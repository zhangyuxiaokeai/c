/**
 * @author shkstart
 * @create 2022-05-09 0:48
 */


import java.lang.reflect.Field;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.sql.*;
import java.util.ArrayList;
import java.util.List;

/**DAO:data( base) access object
 * 封装了针对于数据表的通用操作
 */
public abstract class BaseDao<T> {
    private Class<T> clazz=null;

    {
        //获取当前BaseDAO的子类继承父类中的泛型
        Type type = this.getClass().getGenericSuperclass();
        if (type instanceof ParameterizedType) {
            ParameterizedType paramType = (ParameterizedType) type;
            Type[] types = paramType.getActualTypeArguments();//获取父类中泛型参数
            clazz = (Class<T>) types[0];//泛型的第一个参数
        }
    }
    //通用的增删改操作-----version2.0(考虑数据库事务)
    public int update(Connection connection, String sql, Object... args) {
        //sql当中占位符的个数与可变形参的长度相同！
        PreparedStatement ps = null;
        try {

            //预编译sql语句，返回PreparedStatement实例
            ps = connection.prepareStatement(sql);
            //填充占位符
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i + 1, args[i]);//小心参数申明
            }
            //执行
            return ps.executeUpdate();
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(null, ps);
        }

        return 0;
    }


    public T getInstance(Connection connection, String sql, Object... args) {
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            ps = connection.prepareStatement(sql);
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i + 1, args[i]);
            }
            //执行，获取结果集
            rs = ps.executeQuery();
            //获取结果集的元数据
            ResultSetMetaData rsmd = rs.getMetaData();
            //获取列数
            int columnCount = rsmd.getColumnCount();
            if (rs.next()) {
                T t = clazz.newInstance();
                for (int i = 0; i < columnCount; i++) {
                    //获取每个列值:通过结果集ResultSet
                    Object columnValue = rs.getObject(i + 1);
                    //获取每个列的列名:ResultSetMetaData
                    //获取列的列明：getColumnName
                    //获取列的别名：getColumnLabel
                    //  String columnName = rsmd.getColumnName(i + 1);
                    String columnLabel = rsmd.getColumnLabel(i + 1);
                    //通过反射，将对象指定名columnName的属性赋值为指定的值columnValue

                    Field filed = clazz.getDeclaredField(columnLabel);
                    filed.setAccessible(true);
                    filed.set(t, columnValue);
                }
                return t;

            }
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(null, ps, rs);
        }

        return null;
    }

    //***************************************************************************************
    public  List<T> getForList(Connection connection,String sql, Object... args) {
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            ps = connection.prepareStatement(sql);
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i + 1, args[i]);
            }
            //执行，获取结果集
            rs = ps.executeQuery();
            //获取结果集的元数据
            ResultSetMetaData rsmd = rs.getMetaData();
            //获取列数
            int columnCount = rsmd.getColumnCount();
            //创建集合对象
            ArrayList<T> list = new ArrayList<T>();
            while (rs.next()) {
                T t = clazz.newInstance();
                //处理结果集一行数据中的，欸一个列：给t对象那个指定的属性赋值
                for (int i = 0; i < columnCount; i++) {
                    //获取每个列值:通过结果集ResultSet
                    Object columnValue = rs.getObject(i + 1);
                    //获取每个列的列名:ResultSetMetaData
                    //获取列的列明：getColumnName
                    //获取列的别名：getColumnLabel
                    //  String columnName = rsmd.getColumnName(i + 1);
                    String columnLabel = rsmd.getColumnLabel(i + 1);
                    //通过反射，将对象指定名columnName的属性赋值为指定的值columnValue

                    Field filed = clazz.getDeclaredField(columnLabel);
                    filed.setAccessible(true);
                    filed.set(t, columnValue);
                }
                list.add(t);

            }
            return list;
        } catch (Exception e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(null, ps, rs);
        }

        return null;
    }


    //查询特殊值的特殊方法
    public <E> E getValue(Connection connection,String sql,Object...args){
        PreparedStatement ps = null;
        ResultSet rs = null;
        try {
            ps = connection.prepareStatement(sql);
            for (int i = 0; i < args.length; i++) {
                ps.setObject(i+1,args[i]);
            }
            rs = ps.executeQuery();
            if(rs.next()){
                return (E)  rs.getObject(1);
            }
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
            JDBCUtils.closeResource(null,ps,rs);
        }
       return null;
    }
}
