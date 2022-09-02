/**
 * @author shkstart
 * @create 2022-05-06 21:29
 */

import org.junit.Test;

import java.io.File;
import java.io.FileInputStream;
import java.sql.Connection;
import java.sql.PreparedStatement;

/**
 * 测试PreparedStatement操作Blob类型
 *
 */
public class BlobTest {

    //像数据表qfnumber插入blob对象
    @Test
    public void testInsert(){
        Connection connection = null;
        PreparedStatement ps = null;
        try {
            connection = JDBCUtils.getConnection();
            String sql="insert into qfnumber(province,numbers,types,photo)values(?,?,?,?) ";
            ps = connection.prepareStatement(sql);
            ps.setObject(1,"重庆");
            ps.setObject(2,1000);
            ps.setObject(3,"asdad");
            FileInputStream is = new FileInputStream(new File("2.jpg"));
            ps.setBlob(4,is);
            ps.execute();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(connection,ps);
        }

    }
}
