/**
 * @author shkstart
 * @create 2022-05-04 19:25
 */

import org.junit.Test;

import java.io.IOException;
import java.io.InputStream;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.SQLException;
import java.util.Properties;

/**
 * 使用PreparedStatement来替换Statement，实现对数据表的增删改查
 *
 *增删改，查
 */
public class PreparedStatementUpdataTest {

@Test
public void testUpdate(){
    String sql="delete from qfnumber where id =? ";
    update(sql,4);
}


//通用的增删改查操作
   public void update( String sql,Object ...args){
       //sql当中占位符的个数与可变形参的长度相同！
       Connection connection = null;
       PreparedStatement ps = null;
       try {
           //数据库连接
           connection = JDBCUtils.getConnection();
           //预编译sql语句，返回PreparedStatement实例
           ps = connection.prepareStatement(sql);
           //填充占位符
           for (int i = 0; i < args.length; i++) {
               ps.setObject(i+1,args[i]);//小心参数申明
           }
           //执行
           ps.execute();
       } catch (Exception e) {
           e.printStackTrace();
       } finally {
       }
       JDBCUtils.closeResource(connection,ps);
   }










@Test
//删除操作
public void testDelete()throws Exception {
    //获取数据库连接0
    PreparedStatement ps = null;
    Connection connection1 = null;
    try {
        connection1 = JDBCUtils.getConnection();
        //预编译返回返回PreparedStatement
        String sql = "delete from qfnumber where numbers=? and province=?";
         ps = connection1.prepareStatement(sql);
        //填充占位符
        ps.setObject(1, "1000");
        ps.setObject(2, "河北");
        //执行
        ps.execute();
    } catch (Exception e) {
        e.printStackTrace();
    } finally {
        JDBCUtils.closeResource(connection1, ps);
    }

}



    //修改qfnumbers表的一条记录
@Test
public void testUPdate() throws Exception {
    Connection connection = null;
    PreparedStatement ps = null;
    try {
        //1获取数据库的连接
        connection = JDBCUtils.getConnection();
        //2。预编译sql语句，返回PreparedStatement
        String sql="update qfnumber set province= ? where id= ?";
        ps = connection.prepareStatement(sql);
        //3.填充占位符
        ps.setObject(1,"周国万");
        ps.setObject(2,"6");
        //4执行
        ps.execute();
    } catch (Exception e) {
        e.printStackTrace();
    } finally {
        //5资源的关闭
        JDBCUtils.closeResource(connection,ps);
    }
}






    //向yiqing表中添加一条记录
    @Test
    public void testInsert() {
        Connection connection=null;
        PreparedStatement ps = null;
        try {
            InputStream resourceAsStream = PreparedStatementUpdataTest.class.getClassLoader().getResourceAsStream("jdbc.properties");
            Properties properties = new Properties();
            properties.load(resourceAsStream);
            String user=properties.getProperty("user");
            String password=properties.getProperty("password");
            String url=properties.getProperty("url");
            String driverClass = properties.getProperty("driverClass");
            connection = DriverManager.getConnection(url, user, password);
            System.out.println(connection);

            //4预编译sql语句，返回PreparStatement
            String sql="insert into qfnumber(province,numbers,types )values (?,?,?)";//?：占位符
            ps = connection.prepareStatement(sql);
            //5.填充占位符
            ps.setString(1,"哪吒");
            ps.setString(2,"2000");
            ps.setString(3,"c++");
            //6执行sql操作
            ps.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            //7资源的关闭
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
        }
}

