package com.atguigu.exer.src.com.atguigu.java1;

import org.junit.Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;

/**
 * Collections:操作Collection,Map的工具类
 *
 *
 * 面试题：Collection和Collections的区别
 * @author shkstart
 * @create 2022-02-15 0:34
 */
public class CollectionsTest {
    /*
    reverse(List)反转list中元素的顺序
    shuffle(List):对List集合元素进行随机排序
    sort(List):根据元素的自然顺序对指定的List集合元素按升序排序
    sort(List Comparator):根据指定的Comparator产生的顺序对list集合元素进行排序
    swap(List, int ,int)：将指定的list集合中的i处元素和j处元素进行交换

    Object max(Collection):根据元素的自然排序，返回给定集合中的最大元素
    Object max(Collection,Comparator):根据Comparator指定的顺序，返回给定集合中的最大元素
    Object min(Collection)
    Object min(Collection,Comparator)
    int frequency(Collection,Object):返回指定集合中指定元素的出现次数
    void copy(List dest ,list src):将src中的内容复制到dest中
    boolean replaceAll(list list ,Object oldVal,Object newVal):使用新值替换list对像的所有旧值
     */
    @Test
    public void test(){
        ArrayList list = new ArrayList();
        list.add(123);
        list.add(234);
        list.add(24);
        list.add(3);
        list.add(1555);
        System.out.println(list.size());
        List dest = Arrays.asList(new Object[list.size()]);
        Collections.copy(dest,list);
        System.out.println(dest);
        /*
        Coolections 类中提供 多个synchronizedXxx()方法，
        该方法可使将指定集合包装成线程同步的集合，从而解决多线程并发访问集合时
        的线程安全问题
         */
        //返回的线程list1即为线程安全的list
        List list1 = Collections.synchronizedList(list);
    }
    @Test
    public void test1(){
        ArrayList list = new ArrayList();
        list.add(123);
        list.add(234);
        list.add(24);
        list.add(3);
        list.add(1555);
        System.out.println(list);
      //  Collections.reverse(list);
      //  Collections.shuffle(list);
       // Collections.sort(list);
        //Collections.swap(list,1,2);
        System.out.println(Collections.frequency(list, 123));

        System.out.println(list);
    }
}
