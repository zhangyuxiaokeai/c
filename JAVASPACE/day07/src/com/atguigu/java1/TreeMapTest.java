package com.atguigu.java1;

import com.sun.org.apache.xalan.internal.lib.ExsltStrings;
import org.junit.Test;

import java.util.*;

/**
 * @author shkstart
 * @create 2022-02-14 23:35
 */
public class TreeMapTest {
    //向TreeMap中添加key-value,要求key必须是由统一类创建的对象
    //因为要按要求key进行排序：自然排序，定制排序
    //自然排序
    @Test
    public void test(){
        TreeMap map = new TreeMap();
        User u1 = new User("Tom",29);
        User u2 = new User("Jery",28);
        User u3 = new User("Milk",27);
        User u4 = new User("Ross",26);
        map.put(u1,98);
        map.put(u2,97);
        map.put(u3,96);
        map.put(u4,100);
        //按顺序遍历
        Set set = map.entrySet();
        Iterator iterator = set.iterator();
        while(iterator.hasNext()){
            Object obj = iterator.next();
            Map.Entry entry=(Map.Entry) obj;
            System.out.println(entry.getKey()+"===="+entry.getValue());


        }

    }
    //定制排序
    @Test
    public void test2(){
        TreeMap map = new TreeMap(new Comparator() {
            @Override
            public int compare(Object o1, Object o2) {
               if(o1 instanceof User && o2 instanceof User){
                   User u1=(User) o1;
                   User u2=(User) o2;
                   if(u1.getAge()> u2.getAge()){
                       return -1;
                   }else {
                       return 1;
                   }
               }
               throw new RuntimeException("输入的类型不一致");
            }
        });
        User u1 = new User("Tom",29);
        User u2 = new User("Jery",28);
        User u3 = new User("Milk",27);
        User u4 = new User("Ross",26);
        map.put(u1,98);
        map.put(u2,97);
        map.put(u3,96);
        map.put(u4,100);
        //按顺序遍历
        Set set = map.entrySet();
        Iterator iterator = set.iterator();
        while(iterator.hasNext()){
            Object obj = iterator.next();
            Map.Entry entry=(Map.Entry) obj;
            System.out.println(entry.getKey()+"===="+entry.getValue());


        }
    }
}
