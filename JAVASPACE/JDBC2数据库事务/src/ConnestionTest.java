import org.junit.Test;

import java.lang.reflect.Field;
import java.sql.*;

/**
 * @author shkstart
 * @create 2022-05-08 12:33
 *
 * 1.什么是数据库事务？
 *事务：一组逻辑操作单元，是数据从一种状态变换到另一种状态
 *      >一组逻辑操作单元：一个或多个DML操作
 *
 * 2.事务处理的原则：保证所有事务的都作为一个工作单元来执行，即使出现了故障，都不能改变这种执行方式。
 * 当在一个事务中执行多个操作时，要么所有的事务都**被提交（commit）**，那么这些修改就永久的保存下来;
 * 要么数据库管理系统将放弃所作的所有修改，整个事务**回滚（rollback）**到最初状态
 *
 *
 * 3.数据一旦回滚：就不可回滚
 *
 * 4.那些操作会导致数据的自动提交
 *          >DDL操作一旦执行，都会自动提交
 *                  >>set autocommit=false对DDL操作失效
 *          >DML默认情况下，一旦执行，就会自动提交。
 *                  >>我们可以通过set autocommit =false方式取消DML操作的自动提交
 *         >默认在关闭连接时，会自动提交数据
 *
 */
public class ConnestionTest {
//********************************************考虑数据库事务的操作*********************************************
    @Test
    public void testUpdateWithTx(){
        Connection connection=null;
        try {
            connection = JDBCUtils.getConnection();

            //取消数据的自动提交
            System.out.println(connection.getAutoCommit());
            connection.setAutoCommit(false);

            String sql1="update qfnumber set numbers=numbers-100 where province=?";
            update(connection,sql1,"重庆");

            //模拟网络异常
               System.out.println(10/0);
            String sql2="update qfnumber set numbers=numbers+100 where province=?";
            update(connection,sql2,"周国万");
            System.out.println("转账成功");


            //提交数据
            connection.commit();
        } catch (Exception e) {
            e.printStackTrace();
            //回滚数据
            try {
                connection.rollback();
            } catch (SQLException ex) {
                ex.printStackTrace();
            }
        } finally {
            JDBCUtils.closeResource(connection,null);
        }
    }
//通用的增删改查操作-----version2.0(考虑数据库事务)
public void update( Connection connection,String sql,Object ...args){
    //sql当中占位符的个数与可变形参的长度相同！
    PreparedStatement ps = null;
    try {

        //预编译sql语句，返回PreparedStatement实例
        ps = connection.prepareStatement(sql);
        //填充占位符
        for (int i = 0; i < args.length; i++) {
            ps.setObject(i+1,args[i]);//小心参数申明
        }
        //执行
        ps.execute();
    } catch (Exception e) {
        e.printStackTrace();
    } finally {
    }
    JDBCUtils.closeResource(null,ps);
}








    //******************************未考虑数据库事务的情况下做的操作转账操作******************************
    @Test
    /**针对数据表qfnumber来说
     *
     *某两条数据转账
     *
     */
    public void testGetConnection(){
    String sql1="update qfnumber set numbers=numbers-100 where province=?";
    update(sql1,"重庆");

    //模拟网络异常
      //  System.out.println(10/0);
        String sql2="update qfnumber set numbers=numbers+100 where province=?";
        update(sql2,"周国万");
        System.out.println("转账成功");
    }

    //通用的增删改查操作
    public void update( String sql,Object ...args){
        //sql当中占位符的个数与可变形参的长度相同！
        Connection connection = null;
        PreparedStatement ps = null;
        try {
            //数据库连接
            connection = JDBCUtils.getConnection();
            //预编译sql语句，返回PreparedStatement实例
            ps = connection.prepareStatement(sql);
            //填充占位符
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i+1,args[i]);//小心参数申明
            }
            //执行
            ps.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
        }
        JDBCUtils.closeResource(connection,ps);
    }

    //***************************************************************



    @Test
    public void testTransactionSelect() throws Exception {
        Connection connection = JDBCUtils.getConnection();
        //获取当前隔离级别
       //System.out.println(connection.getTransactionIsolation());
        //设置数据库的隔离界别
       // connection.setTransactionIsolation(Connection.TRANSACTION_READ_COMMITTED);
        //取消自动提交数据
        connection.setAutoCommit(false);
        String sql="select id,province,numbers,types from qfnumber where province=?";
        Qfnumber zhou = getInstance(connection, Qfnumber.class, sql, "周过万");
        System.out.println(zhou);
    }
    @Test
    public void testTransactionUpdata() throws Exception {
        Connection connection = JDBCUtils.getConnection();
        String sql="update qfnumber set numbers=? where province=?";
        update(connection,sql,4321,"周过万");
      //  Thread.sleep(15000);
        System.out.println("修改结束");
    }
    /**
     * 针对不同表的通用查询操作，返回表的一条操作
     *
     * @param clazz
     * @param sql
     * @param args
     * @param <T>
     * @return
     */
    //通用的查询操作，用于返回数据表中的一条操作（version2.0:考虑事务）
    public <T> T getInstance(Connection connection,Class<T> clazz, String sql,Object ...args){
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            ps = connection.prepareStatement(sql);
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i+1,args[i]);
            }
            //执行，获取结果集
            rs = ps.executeQuery();
            //获取结果集的元数据
            ResultSetMetaData rsmd = rs.getMetaData();
            //获取列数
            int columnCount = rsmd.getColumnCount();
            if(rs.next()){
                T t = clazz.newInstance();
                for (int i = 0; i < columnCount; i++) {
                    //获取每个列值:通过结果集ResultSet
                    Object columnValue = rs.getObject(i+1);
                    //获取每个列的列名:ResultSetMetaData
                    //获取列的列明：getColumnName
                    //获取列的别名：getColumnLabel
                    //  String columnName = rsmd.getColumnName(i + 1);
                    String columnLabel = rsmd.getColumnLabel(i + 1);
                    //通过反射，将对象指定名columnName的属性赋值为指定的值columnValue

                    Field filed = clazz.getDeclaredField(columnLabel);
                    filed.setAccessible(true);
                    filed.set(t,columnValue);
                }
                return t;

            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(null,ps,rs);
        }

        return null;
    }
}
