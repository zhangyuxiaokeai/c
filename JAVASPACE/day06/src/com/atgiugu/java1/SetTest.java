package com.atgiugu.java1;

import com.atgiugu.java.Person;
import com.atgiugu.java.User;
import org.junit.Test;

import java.util.HashSet;
import java.util.Iterator;
import java.util.LinkedHashSet;

/**
 *1.Set接口的框架结构
 *  |-----Collection接口：单列集合，用来存储一个一个对象
 *         |---Set接口：存储无序的，不可重复的数据 --->高中讲的集合“集合”
 *               |-----HashSet：作为set接口的主要实现类：线程不安全的：可以存储null值
 *                    |-----LinkedHashSet：作为HashSet的子类，遍历其内部数据时，可以按照添加的顺序遍历
 *              |-----TreeSet：可以按照添加对象的指定属性，进行排序
 *
 *1.Set接口中没有额外定义新的方法，使用的都是Collection中申明过的方法。
 *
 * 2.要求：向Set中添加的数据，其所在类一定也要重写equals()和hashCode()方法
 * 要求：重写的hashCode()和equals()尽可能保持一致性：相等的对象必须有相等的散列码
 *  重写两个方法的小技巧：对象中用作equals()方法比较的 Field,都应该用来计算hashCode
 * @author shkstart
 * @create 2022-02-11 22:08
 */
public class SetTest {
/*
  一. Set接口：存储无序的，不可重复的数据
     以HashSet为例说明：
     1.无序性：不等于随机性，存储的数据在底层的数组中并非按照数组索引的顺序添加，而是根据数据的哈希值决定的

     2.不可重复性：保证添加的元素按照equals()判断时，不能返回True,即：相同的元素只能添加一个。

  二.添加元素的过程：以HashSet为例：
        我们向HashSet中添加元素a,首先调用元素a所在类的hashCode()方法，计算元素a的哈希值
        此哈希值接着通过某种算法计算出HashSet在底层数组中存放位置（即为：索引位置），判断数组
        此位置上是否已经有元素，如果此位置上没有其他元素，则元素a添加成功-----情况一
                             如果此位置上有其他元素b（或以链表形式存在的多个元素），则比较元素a与元素b的hash值：
                             如果hash值不相同，则元素a添加成功。-----情况二
                             如果hash值不相同，进而需要调用元素a所在的类的equals()方法:
                             equals()返回true，表明元素a添加失败
                             equals(0返回false,则元素a添加成功-----情况二

     对于添加成功的情况2和情况3而言;元素a与已经存在的指定索引位置上数据以链表的方式存储。
     jdk7:元素a放到数组中，指向原来的元素。
     jdk8：原来的元素在数组中，指向元素a
     总结：七上八下
     HashSet底层：数组+链表的结构
 */
    @Test
    public void test1(){
        HashSet set = new HashSet();
        set.add(123);
        set.add(123);
        set.add(456);
        set.add("AA");
        set.add("CC");
        set.add(new User("Jery",12));
        set.add(new User("Jery",12));
        set.add(158);
        Iterator iterator = set.iterator();
        while (iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }

    //LinkedHashSet的使用
    //LinkedHashSet作为HashSet的子类，在添加数据的同时，每个数据还维护了两个引用，记录此数据前一个数据
    //和后一个数据
    //优点：对于频繁的遍历操作，LinkedHashSet效率高于HashSet
    @Test
    public void test2(){
            HashSet set = new LinkedHashSet();
            set.add(123);
            set.add(123);
            set.add(456);
            set.add("AA");
            set.add("CC");
            set.add(new User("Jery",12));
            set.add(new User("Jery",13));
            set.add(158);
            Iterator iterator = set.iterator();
            while (iterator.hasNext()){
                System.out.println(iterator.next());
            }
    }
}
