package com.atgiugu.java;

import org.junit.Test;

import java.sql.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;

/**
 * CollectionTest接口中申明的常用方法的测试
 *
 * 结论：
 * 向Collection接口中的实现类的对象添加数据obj时，要求obj所在类要重写equals()方法
 * @author shkstart
 * @create 2022-02-10 13:05
 */
public class CollectionTest {
    @Test
    public void test1(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);
       // Person p = new Person("jery",20);
        //coll.add(p);
        coll.add(new Person("jery",30));
        //contains(Object obj):判断当前集合中是否包含obj
        //我们在判断时会调用obj对象所在类的equals()
        boolean contains = coll.contains(123);
        System.out.println(contains);
        System.out.println(coll.contains(new String("Tom")));
        System.out.println(coll.contains(new Person("jery",30)));//false--->true
    //2.containsAll(COllection coll1):判断形参coll1中的所有元素都存在于当前这个集合中
        Collection coll1 = Arrays.asList(123,456);
        System.out.println(coll.containsAll(coll1));
        System.out.println(coll.size());
        System.out.println(coll1.size());

    }

    @Test
    public void test2(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);

        boolean remove = coll.remove(123);
        System.out.println(remove);
        System.out.println(coll);

        coll.remove(new Person("jery",20));
        System.out.println(coll);

        //removeAll(Collection coll1):从当前集合中移除cool1中的所有元素
        Collection coll1=Arrays.asList(123,456);
        coll.removeAll(coll1);
        System.out.println(coll);
    }
    @Test
    public void test3(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);
        
        //retainAll()获取当前集合和coll1集合的交集，并返回给当前集合
//        Collection coll1=Arrays.asList(123,456,789);
//        boolean b = coll.retainAll(coll1);
//        System.out.println(b);
//        System.out.println(coll);
//        System.out.println(coll1);
        System.out.println("****************************");

        //6equals(Object obj):要想返回true，需要当前集合和形参集合的元素都相同。
        Collection coll1=new ArrayList();
        coll1.add(123);
        coll1.add(456);
        coll1.add(new String("Tom"));
        coll1.add(new Person("jery",20));
        coll1.add(false);
        System.out.println(coll.equals(coll1));
    }
    @Test
    public void test4(){
        Collection coll=new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery",20));
        coll.add(false);
        //7.hashCode()方法//返回当前对象的哈希值
        System.out.println(coll.hashCode());
        
        //8.集合--->转化为数组：toArray()
        Object[] arr = coll.toArray();
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
        System.out.println("**************");
        //拓展：数组---->集合:调用Arrays类的静态方法asLisy()
        List<String> list = Arrays.asList(new String[]{"aa", "bb", "cc"});
        System.out.println(list);
        List<int[]> arr1 = Arrays.asList(new int[]{123, 456});
        List arr2 = Arrays.asList(new Integer[]{123, 456});
        System.out.println(arr1.size());//1
        System.out.println(arr2.size());//2

        //9.iterator():返回iterator接口的实例，用于遍历集合元素，放在IteratorTest.java中测试中


    }
}
