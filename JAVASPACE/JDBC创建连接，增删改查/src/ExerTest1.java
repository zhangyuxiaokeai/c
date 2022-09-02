import com.mysql.cj.x.protobuf.MysqlxCrud;
import com.sun.org.apache.regexp.internal.RE;
import org.junit.Test;

import java.lang.reflect.Field;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.ResultSetMetaData;
import java.util.Scanner;

/**
 * @author shkstart
 * @create 2022-05-06 20:51
 */
public class ExerTest1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("请输入地区：");
        String province = scanner.next();
        System.out.println("请输入数量：");
        int numbers = scanner.nextInt();
        System.out.println("请输入学科类型：");
        String types = scanner.next();
        System.out.println(province+numbers+types);
        String sql="insert into qfnumber(province,numbers,types)values(?,?,?) ";
        int insertCount = update(sql,province, numbers, types);
        if(insertCount>0){
            System.out.println("添加成功");
        }else {
            System.out.println("添加失败");
        }
    }



    //通用的增删改查操作
    public static int update( String sql,Object ...args){
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
            /**
             * ps.execute():
             * 如果执行的查询操作，有返回结果，此方法返回true；
             * 如果执行的增删改操作，没有返回结果，则此方法返回false
             */
            //ps.execute();
           return ps.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
        }
        JDBCUtils.closeResource(connection,ps);
return 0;
}

}
