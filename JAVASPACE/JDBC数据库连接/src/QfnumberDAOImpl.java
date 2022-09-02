import java.sql.Connection;
import java.util.List;

/**
 * @author shkstart
 * @create 2022-05-09 15:26
 */


public class QfnumberDAOImpl extends BaseDao<Qfnumber> implements QfnumberDAO{



    @Override
    public void insert(Connection connection, Qfnumber qfnumber) {
        String sql="insert into qfnumber(province,numbers,types) values(?,?,?)";
        update(connection,sql,qfnumber.getProvince(),qfnumber.getNumbers()
        ,qfnumber.getTypes());
    }

    @Override
    public void deleteById(Connection connection, int id) {
        String sql="delete from qfnumber where id=?";
        update(connection,sql,id);
    }

    @Override
    public void update(Connection connection, Qfnumber qfnumber) {
        String sql="update qfnumber set province=?,numbers=?,types=? where id=?";
        update(connection ,sql,qfnumber.getProvince(),qfnumber.getNumbers(),qfnumber.getTypes(),
                qfnumber.getId());
    }

    @Override
    public Qfnumber getQfnumberById(Connection connection, int id) {
        String sql="select id,province,numbers,types from qfnumber where id=?";
        Qfnumber qfnumber = getInstance(connection, sql, id);
        return qfnumber;
    }

    @Override
    public List<Qfnumber> getAll(Connection connection) {
        String sql="select id,province,numbers,types from qfnumber";
        List<Qfnumber> forList = getForList(connection, sql);
        return forList;
    }

    @Override
    public Long getCount(Connection connection) {
        String sql="select count(*) from qfnumber";
        return   getValue(connection,sql);
    }

    @Override
    public int getnumbers(Connection connection) {
     String sql="select max(numbers) from qfnumber";
       return getValue(connection,sql);

    }
}
