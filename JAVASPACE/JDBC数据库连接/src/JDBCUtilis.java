import com.alibaba.druid.pool.DruidDataSourceFactory;
import com.mchange.v2.c3p0.ComboPooledDataSource;
import com.mchange.v2.c3p0.DataSources;
import org.apache.commons.dbcp.BasicDataSourceFactory;
import org.apache.commons.dbutils.DbUtils;
import org.junit.Test;

import javax.sql.DataSource;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.InputStream;
import java.sql.*;
import java.util.Properties;

/**
 * @author shkstart
 * @create 2022-05-11 12:53
 */
public class JDBCUtilis {
    /**
     * C3P0数据库连接池技术
     *
     * @return
     * @throws SQLException
     */
    private static ComboPooledDataSource cpds = new ComboPooledDataSource("hellc3p0");

    public static Connection getConnections1() throws SQLException {
        Connection connection = cpds.getConnection();
        System.out.println(connection);
        return connection;
    }

    public static Connection getConnection() throws Exception {
        //获取数据库连接
        InputStream resourceAsStream = ClassLoader.getSystemClassLoader().getResourceAsStream("jdbc.properties");
        Properties properties = new Properties();
        properties.load(resourceAsStream);
        String user = properties.getProperty("user");
        String password = properties.getProperty("password");
        String url = properties.getProperty("url");
        String driverClass = properties.getProperty("driverClass");
        Connection connection = DriverManager.getConnection(url, user, password);
        return connection;

    }

    /**
     * 使用dbcp数据库连接池技术获取数据库连接
     *
     * @return
     * @throws Exception
     */

    private static DataSource source;

    static {
        try {
            Properties pros = new Properties();
            //方式二
            FileInputStream is = new FileInputStream("src/dbcp.properties");
            pros.load(is);

            //创建一个DBCP数据库连接池
            source = BasicDataSourceFactory.createDataSource(pros);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static Connection getConnestion2() throws Exception {

        Connection connection = source.getConnection();
        return connection;
    }


    /**
     * 使用Druid数据库连接池技术
     */

    private static DataSource source1;

    static {
        try {
            Properties pros = new Properties();

            InputStream is = ClassLoader.getSystemClassLoader().getResourceAsStream("druid.properties");

            pros.load(is);

            source1 = DruidDataSourceFactory.createDataSource(pros);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }




    public static Connection getConnection3() throws SQLException {

        Connection conn = source1.getConnection();
        return conn;
    }


    /**
     * 关闭连接和Statement的操作
     *
     * @param connection
     * @param ps
     */
    public static void closeResource(Connection connection, Statement ps) {
        try {
            if (ps != null)
                ps.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if (connection != null)
                connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    //关闭资源的操作
    public static void closeResource(Connection connection, Statement ps, ResultSet rs) {
        try {
            if (ps != null)
                ps.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if (connection != null)
                connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if (rs != null)
                rs.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }

    /**
     * 使用dbutils.jar中提供的DbUtils工具类，实现资源的关闭
     *
     * @param connection
     * @param ps
     * @param rs
     */

    public static void closeResource1(Connection connection, Statement ps, ResultSet rs) {
//        try {
//            DbUtils.close(connection);
//        } catch (SQLException e) {
//            e.printStackTrace();
//        }
//        try {
//            DbUtils.close(ps);
//        } catch (SQLException e) {
//            e.printStackTrace();
//        }
//        try {
//            DbUtils.close(rs);
//        } catch (SQLException e) {
//            e.printStackTrace();
//        }
        DbUtils.closeQuietly(connection);
        DbUtils.closeQuietly(rs);
        DbUtils.closeQuietly(ps);
    }
}
