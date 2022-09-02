package com.atgiugu.java;

import org.junit.Test;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;

/**
 * 集合元素的遍历操作，使用迭代器Iterator接口
 *内部的方法：hasNext()和next()
 *2.集合对象每次调用iterator()方法都得到一个全新的迭代器对象，
 * 默认游标都在集合的第一个元素之前。
 * 3.内部定义了remove(),可以在遍历的时候，删除集合中的元素，此方法不同于直接调用remove()
 * @author shkstart
 * @create 2022-02-10 14:35
 */
public class IteratorTest {
    @Test
    public void test1(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);

        Iterator iterator = coll.iterator();
        //方式一
//        System.out.println(iterator.next());
//        System.out.println(iterator.next());
//        System.out.println(iterator.next());
//        System.out.println(iterator.next());
//        System.out.println(iterator.next());
        //当没有这么多元素时报错class NoSuchElementException
        //System.out.println(iterator.next());

        //方式二：不推荐
//        for(int i=0;i<coll.size();i++){
//            System.out.println(iterator.next());
//        }
        //方式三,hasNext()判断后面是否还有元素
        while(iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }
    @Test
    public void test2(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);
        //错误一
//        Iterator iterator = coll.iterator();
//        while(iterator.next()!=null){
//            System.out.println(iterator.next());
//        }
        //错误二
        while(coll.iterator().hasNext()){
            System.out.println(coll.iterator().hasNext());
        }
    }
    @Test
    public void  test3(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);
        //删除集合中的"Tom"
        Iterator iterator = coll.iterator();
        while(iterator.hasNext()){
            Object obj = iterator.next();
            if("Tom".equals(obj)){
                iterator.remove();
            }
        }
        //遍历
        Iterator iterator1 = coll.iterator();
        while(iterator1.hasNext()){
            System.out.println(iterator1.next());
        }
    }
}
