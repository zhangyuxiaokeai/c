/**
 * @author shkstart
 * @create 2022-05-06 12:12
 */

import java.lang.reflect.Field;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;

/**
 * 演示使用PreparedStatement替换Statrment，解决sql注入问题
 *
 *除了解决Statement的拼串，sql问题之外，PreparedStatement还有那些好处呢？
 *1.PrepareStatement操作Blob的数据，而Statementzuobudao
 * 2.PreparedStatement可以实现更高效的批量操作
 *
 */
public class PreparedStatementTest {
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
