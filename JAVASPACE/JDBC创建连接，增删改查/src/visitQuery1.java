import org.junit.Test;

import java.lang.reflect.Field;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;

/**
 * @author shkstart
 * @create 2022-05-06 9:23
 */
public class visitQuery1 {
    /**
     * 针对表的字段名于类的属性名不相同的情况：
     * 1.必须声明sql时，使用类的属性名来命名字段的别名
     *2.使用ResultSeData,需要使用getColumnLabel（）来替换getColumnName()
     *      获取列的别名。
     *
     *   补充说明：如果sql中没有给字段其别名，getColumnLabel（）获取的就是列名
     */
    @Test
public void tetsVisitForQuery(){
    String sql="select id ,`count`,ip from visit where id=?";
    VisitTest visitTest = visitQuery1(sql, 2);
    System.out.println(visitTest);
}
    /**
     *通用的针对于visit的表的查询操作
     *
     * @return
     */
    public VisitTest visitQuery1(String sql, Object...args) {
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
                VisitTest visit = new VisitTest();
                for (int i = 0; i < columnCount; i++) {
                    //获取每个列值:通过结果集ResultSet
                    Object columnValue = rs.getObject(i+1);
                    //获取每个列的列名:ResultSetMetaData
                    //获取列的列明：getColumnName
                    //获取列的别名：getColumnLabel
                  //  String columnName = rsmd.getColumnName(i + 1);
                    String columnLabel = rsmd.getColumnLabel(i + 1);
                    //通过反射，将对象指定名columnName的属性赋值为指定的值columnValue

                    Field filed = VisitTest.class.getDeclaredField(columnLabel);
                    filed.setAccessible(true);
                    filed.set(visit,columnValue);
                }
                return visit;

            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps,rs);
        }

        return null;
    }









    @Test
    public void tetsVisit1(){
        Connection connection= null;
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            connection = JDBCUtils.getConnection();
            String sql="select id ,`count`,ip from visit where id=?";
            ps = connection.prepareStatement(sql);
            ps.setObject(1,1);
            rs = ps.executeQuery();
            if(rs.next()){
                int id = (int)rs.getObject(1);
                int count = (int)rs.getObject(2);
                String ip = (String) rs.getObject(3);

                VisitTest visitTest = new VisitTest(id,count,ip);
                System.out.println(visitTest);
            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps,rs);
        }
    }
}
