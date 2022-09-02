import org.apache.commons.dbcp.BasicDataSource;
import org.apache.commons.dbcp.BasicDataSourceFactory;
import org.junit.Test;

import javax.sql.DataSource;
import java.io.FileInputStream;
import java.io.InputStream;
import java.sql.Connection;
import java.util.Properties;

/**
 * @author shkstart
 * @create 2022-05-11 22:43
 */
public class DBCPTest {
    /**
     * 测试DBCP的数据库连接池技术
      */
    //方式一：不推荐
    @Test
    public void testGetConnestion() throws Exception{
        //创建了DBCP的数据库连接池
        BasicDataSource sources= new BasicDataSource();

        //设置基本信息
        sources.setDriverClassName("com.mysql.cj.jdbc.Driver");
        sources.setUrl("jdbc:mysql:///yiqing");
        sources.setUsername("root");
        sources.setPassword("123456");

        //还可以设置其他涉及数据库连接池管理的相关属性
        sources.setInitialSize(10);
        sources.setMaxActive(10);
        //...


        Connection connection = sources.getConnection();
        System.out.println(connection);
    }
    //方式二：使用配置文件
    @Test
    public void testGetConnestion1() throws Exception {
        Properties pros = new Properties();
        //方式一
        //InputStream is = ClassLoader.getSystemClassLoader().getResourceAsStream();
        //方式二
        FileInputStream is = new FileInputStream("src/dbcp.properties");
        pros.load(is);
        DataSource source = BasicDataSourceFactory.createDataSource(pros);
        Connection connection = source.getConnection();
        System.out.println(connection);
    }
}
