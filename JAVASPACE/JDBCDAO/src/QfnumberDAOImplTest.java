import org.junit.Test;

import java.sql.Connection;
import java.util.List;

import static org.junit.Assert.*;

/**
 * @author shkstart
 * @create 2022-05-10 11:15
 */
public class QfnumberDAOImplTest extends BaseDao {
   private QfnumberDAOImpl dao = new QfnumberDAOImpl();
    @Test
    public void insert(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            Qfnumber qfnumber = new Qfnumber(1,"美国",1000,"note++");
            dao.insert(connection,qfnumber);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null);
        }

    }

    @Test
    public void deleteById() {
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            dao.deleteById(connection, 5);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection, null);
        }

    }

    @Test
    public void testUpdate(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            Qfnumber qfnumber = new Qfnumber(19,"加拿大",1998,"基督教");
            dao.update(connection,qfnumber);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null);
        }

    }

    @Test
    public void getQfnumberById(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            Qfnumber qfnumberById = dao.getQfnumberById(connection, 19);
            System.out.println(qfnumberById);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null,null);
        }

    }

    @Test
    public void getAll(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            List<Qfnumber> all = dao.getAll(connection);
            all.forEach(System.out::println);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null,null);
        }

    }

    @Test
    public void getCount(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            Long count = dao.getCount(connection);
            System.out.println(count);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null,null);
        }

    }

    @Test
    public void getnumbers(){
        Connection connection = null;
        try {
            connection = JDBCUtils.getConnection();
            int getnumbers = dao.getnumbers(connection);
            System.out.println(getnumbers);
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,null,null);
        }

    }
}