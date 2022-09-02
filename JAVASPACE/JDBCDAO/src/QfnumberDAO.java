import java.sql.Connection;
import java.util.List;

/**
 * @author shkstart
 * @create 2022-05-09 15:02
 */
/*

此接口用于规范针对于qfnubers表的常用操作

 */
public interface QfnumberDAO {
    /*
    将qfnumber对象添加到数据库当中
     */
    void insert(Connection connection,Qfnumber qfnumber);

    /**
     * 针对指定的id删除表中的一条记录
     * @param connection
     * @param id
     */
    void deleteById(Connection connection,int id);
    /**
     * 针对于内存中qfnumber对象，去修改数据表中中指定的记录
     */
    void update(Connection connection,Qfnumber qfnumber);

    /**
     * 针对指定的id查询对应的qfnumber对象
     * @param connection
     * @param id
     * @return
     */
    Qfnumber getQfnumberById(Connection connection , int id);

    /**
     * 查询表中的所有记录构成的集合
     * @param connection
     * @return
     */
    List<Qfnumber> getAll(Connection connection);

    /**
     * 返回数据表中的条目数
     * @param connection
     * @return
     */
     Long getCount(Connection connection);

    /**
     * 返回数据表中最多的人数
     * @param connection
     * @return
     */
    int getnumbers(Connection connection);
}
