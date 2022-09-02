/**
 * @author shkstart
 * @create 2022-05-14 0:26
 */
/**
 * @author shkstart
 * @create 2022-05-14 0:23
 */

import org.apache.commons.dbutils.QueryRunner;
import org.apache.commons.dbutils.ResultSetHandler;
import org.apache.commons.dbutils.handlers.*;
import org.junit.Test;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.List;
import java.util.Map;

/**
 * commons-dbutils 是Apache组织提供的一个开源的JDBC工具类库，封装了针对于数据库的增删改查操作
*/
public class QueryRunnerTest {
    @Test
    public void testInsert(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            connection = JDBCUtilis.getConnection();
            String sql="insert into qfnumber(province,numbers,types)values(?,?,?)";
            int insertCount = runner.update(connection, sql, "周didi", 1009, "小甜心");
            System.out.println(insertCount+"条记录");
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }


//查询测试

    /**
     *
     *BeanHander:是ResultSetHandlers是接口的实现类，用于封装表中的一条记录
     *
     *
     * @throws Exception
     */
    @Test
    public void testQuery1() throws Exception {
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String sql = "select id,province,numbers,types from qfnumber where id=?";
            connection = JDBCUtilis.getConnection3();
            BeanHandler<Qfnumber> handler = new BeanHandler<Qfnumber>(Qfnumber.class);
            Qfnumber qfnumber = runner.query(connection, sql, handler, 15);
            System.out.println(qfnumber);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection, null);
        }
    }

    /**
     * BeanKistHandler:是ResultSetHandler接口的实现类，用于封装表中的多条记录构成的集合
     *
     * @throws Exception
     */
    //返回多条记录
    @Test
    public void testQuery2(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String  sql="select id,province,numbers,types from qfnumber where id<?";
            connection = JDBCUtilis.getConnection3();
            BeanListHandler<Qfnumber> beanListHandler=new BeanListHandler<Qfnumber>(Qfnumber.class);

            List<Qfnumber> qfnumberList = runner.query(connection, sql, beanListHandler, 15);
            qfnumberList.forEach(System.out::println);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }

    /**
     * MapHander：是ResultSetHandler接口的实现类，对用表中的一条记录
     * 将字段及相应字段的值对应map中的key,value
     */
    @Test
    public void testQuery3(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String  sql="select id,province,numbers,types from qfnumber where id<?";
            connection = JDBCUtilis.getConnection3();
            MapHandler handler=new MapHandler();
            Map<String, Object> query = runner.query(connection, sql, handler, 15);
            System.out.println(query);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }

    /**
     * MapListHandler：是ResultSetHandler接口实现类，对应表中的多条记录
     * 将字段相应字段的值作为map中的key,value。将这些map添加到List中.
     */
    @Test
    public void testQuery4(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String  sql="select id,province,numbers,types from qfnumber where id<?";
            connection = JDBCUtilis.getConnection3();
            MapListHandler handler1=new MapListHandler();
            List<Map<String, Object>> query = runner.query(connection, sql, handler1, 15);
            query.forEach(System.out::println);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }

    /*

    ScalarHandler:用于查询特殊值
  s  */
    @Test
    public void testQuery5(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String  sql="select count(*) from qfnumber";
            connection = JDBCUtilis.getConnection3();
            ScalarHandler handler = new ScalarHandler();
            Long count = (Long) runner.query(connection, sql, handler);
            System.out.println(count);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }

    /*

    自定义ResultSetHandler的实现类
     */
    @Test
    public void testQuery6(){
        Connection connection = null;
        try {
            QueryRunner runner = new QueryRunner();
            String sql="select id,province,numbers,types from qfnumber where id=?";
            connection = JDBCUtilis.getConnection3();
            ResultSetHandler<Qfnumber> handler=new ResultSetHandler<Qfnumber>() {
                @Override
                public Qfnumber handle(ResultSet rs) throws SQLException {
                   // return new Qfnumber(19,"河南",10000,"数学");
                if(rs.next()){
                    int id=rs.getInt("id");
                    String province=rs.getString("province");
                    int numbers=rs.getInt("numbers");
                    String types= rs.getString("types");
                    Qfnumber qfnumber=new Qfnumber(id,province,numbers,types);
                    return qfnumber;
                }else
                    return null;
                }
            };
            Qfnumber qfnumber = runner.query(connection, sql, handler, 15);
            System.out.println(qfnumber);
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtilis.closeResource(connection,null);
        }

    }
}
