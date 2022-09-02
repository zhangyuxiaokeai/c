/**
 * @author shkstart
 * @create 2022-05-04 23:55
 */

import java.io.InputStream;
import java.sql.*;
import java.util.Properties;

/**
 *
 * 操作数据库的工具类
 *
 */
public class JDBCUtils {
    //获取数据库链接

    public static Connection getConnection() throws Exception {
        //获取数据库连接
        InputStream resourceAsStream = ClassLoader.getSystemClassLoader().getResourceAsStream("jdbc.properties");
        Properties properties = new Properties();
        properties.load(resourceAsStream);
        String user=properties.getProperty("user");
        String password=properties.getProperty("password");
        String url=properties.getProperty("url");
        String driverClass = properties.getProperty("driverClass");
        Connection connection = DriverManager.getConnection(url, user, password);
        return connection;

    }

    /**
     * 关闭连接和Statement的操作
     *
     * @param connection
     * @param ps
     */
    public static void closeResource(Connection connection, Statement ps){
        try {
            if(ps!=null)
                ps.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if(connection!=null)
                connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
//关闭资源的操作
    public static void closeResource(Connection connection, Statement ps, ResultSet rs) {
        try {
            if(ps!=null)
                ps.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if(connection!=null)
                connection.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
        try {
            if(rs!=null)
                rs.close();
        } catch (SQLException e) {
            e.printStackTrace();
        }
    }
}
