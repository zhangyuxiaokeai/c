package com.atgiugu.java1;

import com.atgiugu.java.User;
import org.junit.Test;

import java.util.Comparator;
import java.util.Iterator;
import java.util.TreeSet;

/**
 * @author shkstart
 * @create 2022-02-12 0:36
 */
public class TreeSetTest {
    /*
    1.向TreeSet中添加数据，要求是相同类的对象
    2.两种排序方式：自然排序（实现Comparable接口）和定制排序（comparator）
    3.自然排序中，比较两个对象是否相同的标准：compareTo()返回0，不在是equals()
    4.定制排序中，比较两个对象是否相同的标准为：compare（）返回0，不再是equals()
     */
    @Test
    public void test1(){
        //不能添加不同类的对象;
      TreeSet set = new TreeSet();
//        set.add(123);
//        set.add(456);
//        set.add("AA");
//        set.add(new User("Tom",22));
        //举例1：
//        set.add(34);
//        set.add(-34);
//        set.add(43);
//        set.add(11);
//        set.add(8);
        set.add(new User("Tom",22));
        set.add(new User("Jery",32));
        set.add(new User("Jim",26));
        set.add(new User("Mike",42));
        set.add(new User("Mike",32));
        Iterator iterator = set.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }

    }
    @Test
    public void test2(){
        Comparator com = new Comparator() {
            //按照年龄从小到大排列
            @Override
            public int compare(Object o1, Object o2) {
               if(o1 instanceof User && o2 instanceof User){
                   User u1=(User) o1;
                   User u2=(User) o2;
                   return Integer.compare(u1.getAge(),u2.getAge());
               }else {
                   throw new RuntimeException("输入的类型不匹配");
               }
            }
        };
        TreeSet set = new TreeSet();
        set.add(new User("Tom",22));
        set.add(new User("Jery",32));
        set.add(new User("Jim",26));
        set.add(new User("Mike",42));
        set.add(new User("Mike",32));
        Iterator iterator = set.iterator();
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }

}
