import org.junit.Test;

import java.lang.reflect.Field;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;

/**
 * @author shkstart
 * @create 2022-05-05 16:22
 */
public class QfnumberForQuery {
    //通用的查询操作
    @Test
    public void queryForQfnumberstest(){
        String sql="select id,province,numbers, types from qfnumber where id =?";
        Qfnumber qfnumber = queryForQfnumbers(sql, 6);
        System.out.println(qfnumber);
    }
    public Qfnumber queryForQfnumbers(String sql, Object... args) {
        Connection connection = null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            connection = JDBCUtils.getConnection();
           ps = connection.prepareStatement(sql);
            for (int i = 0; i <args.length; i++) {
                ps.setObject(i + 1, args[i]);
            }
            rs = ps.executeQuery();
            //获取结果集的元数据 ResultSetMetaData
            ResultSetMetaData rsmd = rs.getMetaData();
            //通过ResultSetMetaData获取结果集中的列数
            int columnCount = rsmd.getColumnCount();
            if (rs.next()) {
                Qfnumber qfnumber = new Qfnumber();
                //处理结果集一行中的每一列个列
                for (int i = 0; i < columnCount; i++) {
                    //获取列值
                    Object columValue = rs.getObject(i + 1);

                    //获取每个列的列名
                    String columnName = rsmd.getColumnName(i + 1);

                    //给qfnumber对象指定的，某个对象赋值为value：通过反射

                    Field field = Qfnumber.class.getDeclaredField(columnName);
                    field.setAccessible(true);
                    field.set(qfnumber, columValue);
                }
           return qfnumber;
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps,rs);
        }

    return null;
    }






    /**
     *
     * 针对于qfnumber表的查询操作
     *
     *
     */
    @Test
    public void testQuery()  {
        Connection connection = null;
        PreparedStatement ps = null;
        ResultSet resultSet = null;
        try {
            connection = JDBCUtils.getConnection();
            String sql="select id,province,numbers, types from qfnumber where id =?";
            ps = connection.prepareStatement(sql);
        ps.setObject(1,5);
            //执行返回结果集
            resultSet = ps.executeQuery();
            //处理结果集合
            if(resultSet.next()){
                //判断结果集下一条是否有数据，如果有数据返回true并指针下移，如果返回false指针不会下移

                //获取当前这条数据的各个字段值
                int id = resultSet.getInt(1);
                String province = resultSet.getString(2);
                String numbers = resultSet.getString(3);
                String types=resultSet.getString(4);
                //方式一
    //            System.out.println(id,province,numbers,types);
                //方式二
     //    Object[] tye= new Object[]{id,province,numbers,types};
                //方式三：将数据封装成一个对象（推荐）
                Qfnumber qfnumber = new Qfnumber(id,province,numbers,types);
                System.out.println(qfnumber);

            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps,resultSet);
        }
        //关闭资源

    }
}

