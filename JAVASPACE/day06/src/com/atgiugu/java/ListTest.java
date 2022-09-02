package com.atgiugu.java;

import org.junit.Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;

/**
 *  1.list接口框架
 *        |-----Collection接口：单列集合，用来存储一个一个对象
 *                |---List接口：存储有序的，可重复的的数据，-->“动态”数组，替换原有数组
 *                   |---->Arraylist：作为List接口的主要实现类，线程不安全的，效率高：底层使用Object[] elementData存储
 *                   |---->LinkedList：对于频繁的插入，删除操作，使用此类效率比ArrayList高，底层使用双向链表存储
 *                   |----->Vector：作为List接口的古老实现类：线程安全，效率低:底层使用Object[] elementData存储
 *
 *  2.ArrayList的源码分析：
 *         2.1 jdk7的情况下：
 *          ArrayList list =new ArrayList();//底层创建了长度为10的Object[]数组elementData
 *             list.add(123);//elementData[0]=new Integer(123);
 *             ...
 *             List.add(111)//如果此次的添加导致底层elementData数组容量不够，则扩容。
 *             默认情况下，扩容为原来的1.5倍，则同时需要将原有的数组中的数据复制到新的数组中
 *
 *             结论：建议开发中使用带参的构造器： ArrayList list =new ArrayList(int capacity)
 *
 *           2.2 jdk8中Arraylist的变化：
 *               ArrayList list =new ArrayList();//底层Object[]elementData初始化{}，并没有创建长度为10的数组
 *
 *               list.add(123);//第一次调用add()时，底层才创建了长度为10的数组，并将123添加到elementData
 *              。。。
 *              后续的添加和扩容操作与jdk7无异
 *          2.3小结：jdk7中ArrayList类似于单例模式中的饿汉式，而jdk8中的ArrayList的对象的创建类似于
 *          单例的懒汉式，延迟了数组的创建，节省了内存
 *
 *  3.LinkedList的源码分析：
 *      LinkedList list =new LinkedList();内部申明了Node类型的first和last属性，默认值null
 *      list.add(123);//将123封装到Node中，创建了Node对象。
 *
 *      其中，Node定义为:体现了LinkedList的双向链表的说法
 * private static class Node<E> {
 *         E item;
 *         Node<E> next;
 *         Node<E> prev;
 *
 *         Node(Node<E> prev, E element, Node<E> next) {
 *             this.item = element;
 *             this.next = next;
 *             this.prev = prev;
 *         }
 *     }
 *    4.Vector的源码分析：jdk7和jdk8中通过Vector()构造器创建对象时，底层都创建了长度为10的数组
 *      在扩容方面，默认扩容为原来数组的两倍
 *  面试题：ArrayList ,LinkedList,Vector三者的异同
 *  同：三各类都实现了List接口，存储数据的特点相同：存储有序的，可重复的的数据
 *  不同：
 *
 *
 *  5.List中的常用方法
 *
 * @author shkstart
 * @create 2022-02-11 16:18
 */
public class ListTest {
    /*
    void add(int index,Object ele):在index位置插入ele元素
    boolean addAll(int index ,Collection else):从index位置开始将eles中的所有元素添加进来
    Object get(int index):获取指定index位置的元素
    int indexOf(Object obj)：返回obj在集合中首次出现的位置不存在返回-1
    int lastIndexof(Obj object ele):返回obj在集合中末次出现的位置不存在返回-1
    Object remove(int index):移除指定index位置的元素返回ele
    Object set(int index,Objet ele):设置指定index位置的元素为ele
    List subList(int fromIndex,int toIndex):返回从fromIndex到toIndex位置的子集合
   总结：常用方法
   增： add(Object obj)
   删：remove(int index)  /remove(Object obj)
   改：set(int index)
   查：get(int index)
   插：add(int index Object ele)
   长度：size()
   遍历：①Iterator迭代器方式
        ②增强for循环
        ③普通for循环

     */
    @Test
    public void test3(){
        ArrayList list = new ArrayList();
        list.add(123);
        list.add(456);
        list.add("AA");
        list.add(new Person("Tom",212));
        list.add(456);
        //方式一使用迭代器Iterator
        Iterator iterator = list.iterator();
        while (iterator.hasNext()){
            System.out.println(iterator.next());
        }
        System.out.println("****************");
        //方式二
        for(Object obj :list){
            System.out.println(obj);
        }
        System.out.println("****************");
        for(int i=0;i< list.size();i++){
            System.out.println(list.get(i));
        }
        System.out.println("****************");
    }


    @Test
    public void test2(){
        ArrayList list = new ArrayList();
        list.add(123);
        list.add(456);
        list.add("AA");
        list.add(new Person("Tom",212));
        list.add(456);
        //int indexOf(Object obj)：返回obj在集合中首次出现的位置
        System.out.println(list.indexOf(456));//没有该元素返回-1
        //int lastIndexof(Obj object ele):返回obj在当前集合中末次出现的位置
        System.out.println(list.lastIndexOf(456));//没有该元素返回-1
       // Object remove(int index):移除指定index位置的元素返回ele
        System.out.println("***********************");
        Object obj = list.remove(0);
        System.out.println(obj);
        System.out.println(list);
        // Object set(int index,Objet ele):设置指定index位置的元素为ele
        System.out.println("**************************");
        list.set(1,"CC");
        System.out.println(list);
        // List subList(int fromIndex,int toIndex):返回从fromIndex到toIndex位置的子集合
        List list1 = list.subList(2, 4);
        System.out.println(list);
        System.out.println(list1);
    }
    @Test
    public void test1(){
        ArrayList list = new ArrayList();
        list.add(123);
        list.add(456);
        list.add("AA");
        list.add(new Person("Tom",212));
        list.add(456);

        System.out.println(list);
        System.out.println(super.getClass().toString());
        //void add(index,Object ele):在index位置插入ele元素
        list.add(1,"BB");
        System.out.println(list);
        //boolean addAll(int index ,Collection else):从index位置开始将eles中的所有元素添加进来
        List list1 = Arrays.asList(1, 2, 3, 4);
        list.addAll(list1);
        System.out.println(list.size());//9
        System.out.println(list);
        //Object get(int index):获取指定index位置的元素
        System.out.println(list.get(2));
    }


}
