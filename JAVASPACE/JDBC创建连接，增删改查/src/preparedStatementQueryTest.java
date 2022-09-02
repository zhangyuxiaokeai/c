/**
 * @author shkstart
 * @create 2022-05-06 10:33
 */

import org.junit.Test;

import java.lang.reflect.Field;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.util.ArrayList;
import java.util.List;

/**
 * 使用preparedStatement实现针对不同表的通用查询操作
 *
 *
 */
public class preparedStatementQueryTest {


    @Test
    public void testGetForList(){
        String sql="select id ,province,numbers,types from qfnumber where id<?";
       // List<VisitTest> list = getForList(VisitTest.class, sql, 3);
        List<Qfnumber> forList = getForList(Qfnumber.class, sql, 10);
        forList.forEach(System.out::println);
    }
    public <T> List<T> getForList(Class<T> clazz,String sql,Object...args){
        Connection connection = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            connection = JDBCUtils.getConnection();
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
            //创建集合对象
            ArrayList<T> list=new ArrayList<T>();
            while(rs.next()){
                T t = clazz.newInstance();
                //处理结果集一行数据中的，欸一个列：给t对象那个指定的属性赋值
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
                list.add(t);

            }
            return list;
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps,rs);
        }

        return null;
    }




    @Test
    public void testGetInstance(){
        String sql="select id ,`count`,ip from visit where id=?";
        VisitTest instance = getInstance(VisitTest.class, sql, 2);
        System.out.println(instance);
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
    public <T> T getInstance(Class<T> clazz, String sql,Object ...args){
        Connection connection = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            connection = JDBCUtils.getConnection();
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
            JDBCUtils.closeResource(connection,ps,rs);
        }

        return null;
    }
}
