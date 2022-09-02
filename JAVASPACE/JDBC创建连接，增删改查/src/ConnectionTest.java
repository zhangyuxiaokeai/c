import org.junit.Test;
import sun.rmi.runtime.NewThreadAction;
import sun.security.util.Password;

import java.io.IOException;
import java.io.InputStream;
import java.sql.Connection;
import java.sql.Driver;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Properties;

/**
 * @author shkstart
 * @create 2022-05-01 17:35
 */

//方式一：
public class ConnectionTest {

    //Dirver实现类对象
    @Test
    public void testConnection1() throws SQLException {
       // Driver driver=new com.mysql.jdbc.Driver();
        Driver driver=new com.mysql.cj.jdbc.Driver();
        //"jdbc:mysql协议
        //localhost:3306 地址
        //test1数据库
        String url="jdbc:mysql://localhost:3306/yiqing";
        //将用户名密码封装在properties中
        Properties  info=new Properties();
        info.setProperty("user","root");
        info.setProperty("password","123456");
        Connection connection=driver.connect(url,info);
        System.out.println(connection);
    }

    //方式二，对方式一的迭代：在如下的程序中不出现第三方的api，使得程序具有更好的可移植性
    @Test
    public void test2() throws Exception {
//获取Driver的实现类对象：使用反射来实现
        Class aClass = Class.forName("com.mysql.cj.jdbc.Driver");
        Driver driver = (Driver) aClass.newInstance();

        //2,提供要链接的数据库
        String url="jdbc:mysql://localhost:3306/yiqing";
        //3.提供链接需要的用户名和密码
        Properties  info=new Properties();
        info.setProperty("user","root");
        info.setProperty("password","123456");

        //4获取链接
        Connection connect = driver.connect(url, info);
        System.out.println(connect);
    }

    //方式三：DriverManager替换Driver
    @Test
    public void testConnection() throws Exception{

        //1.获取Driver实现类对象
        Class aClass = Class.forName("com.mysql.cj.jdbc.Driver");
        Driver driver = (Driver) aClass.newInstance();

        //2.提供林外的三个链接信息
        String url="jdbc:mysql://localhost:3306/yiqing";
        String user="root";
        String password="123456";
        //注册驱动
        DriverManager.registerDriver(driver);
        //获取链接、
        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }

    //方式四：优化方式三 可以只是加载驱动，不用显示的驱动注册过了
    @Test
    public void testConnection4() throws Exception{
        //1.提供基本的三个链接信息
        String url="jdbc:mysql://localhost:3306/yiqing";
        String user="root";
        String password="123456";


        //2.加载Driver
        Class aClass = Class.forName("com.mysql.cj.jdbc.Driver");
        //相较于方式三，可以省略如下的操作
        //我为什么可以省略上述操作在mysql的Driver实现类中，声明了静态代码块，为你实现了驱动

//        Driver driver = (Driver) aClass.newInstance();
//        //注册驱动
//        DriverManager.registerDriver(driver);
        //3.获取链接、
        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }

    //方式5（final） 将数据库链接的四个基本信息声明在配置文件中，要通过读取配置文件的方式，获取链接

    /**
     *
     * @throws Exception
     * 此种方式的好处
     * 1.实现了数据与代码的分离。实现了解耦
     * 2.如果需要修改配置文件信息，可以避免程序重新打包
     *
     *
     */
    @Test
    public void getConnection5() throws Exception {

        //1读取配置文件的4个基本信息
        InputStream inputStream = ConnectionTest.class.getClassLoader().getResourceAsStream("jdbc.properties");
        Properties properties = new Properties();
        properties.load(inputStream);
        String user=properties.getProperty("user");
        String password=properties.getProperty("password");
        String url=properties.getProperty("url");
        String driverClass=properties.getProperty("driverClass");
//加载驱动
        Class.forName(driverClass);
        //获取链接
        Connection connection = DriverManager.getConnection(url, user, password);
        System.out.println(connection);
    }

}
