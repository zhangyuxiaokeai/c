package com.atguigu.exer1;

import java.util.List;

/**
 * @author shkstart
 * @create 2022-02-16 16:01
 */
public class DAOTest {
    public static void main(String[] args) {
        DAO<User> dao = new DAO<User>();
        dao.save("1001",new User(1001,31,"周杰伦"));
        dao.save("1002",new User(1002,32,"刘德华"));
        dao.save("1003",new User(1003,33,"成立"));
        dao.save("1004",new User(1004,34,"王祖贤"));

      dao.update("1003",new User(1003,30,"方文山"));
      dao.delete("1002");
        List<User> list = dao.list();
       //System.out.println(list);
        list.forEach(System.out::println);

    }
}
