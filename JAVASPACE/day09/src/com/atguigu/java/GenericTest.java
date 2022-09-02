package com.atguigu.java;

import org.junit.Test;

import java.util.*;

/**
 *
 * 泛型的使用
 * 1.jdk5.0新增的特性
 * 2.在集合中使用泛型：
 * 总结：
 * ①集合接口中或集合类在jdk5.0时都修改为带泛型的结构。
 * ②在实例化集合类时，可以指明具体的泛型类型
 * ③：指明完以后，在集合类或接口中凡是定义类或接口时，内部结构(比如：方法 ，构造器，属性等)使用到类的泛型的位置，都指定为实例化泛型类型
 *      比如： add(E  e) ---->实例化以后 add(Integer  e)
 *
 * ④注意但：泛型的类型必须是类，不能是基本数据类型，需要用到基本数据类型的位置，那包装类替换
 * ⑤如果实例化时，没有指定泛型的类型，默认类型为java.lang.Object类型
 *
 * 3.如何自定义泛型结构：泛型类，泛型接口：泛型方法。见GenericTest1.java
 * @author shkstart
 * @create 2022-02-15 22:03
 */
public class GenericTest {
    @Test
    public void test1() {
        ArrayList list = new ArrayList();
        //存放学生的成绩
        list.add(78);
        list.add(785);
        list.add(58);
        list.add(785);
        //问题1 ：类型不安全
        //list.add("Tom");
        for (Object score : list) {
            //强转时，可能出现ClassCastException
            int stuScore = (Integer) score;
            System.out.println(stuScore);
        }

    }

    //在集合中使用泛型的情况:以ArrayList举例
    @Test
    public void test2() {
        ArrayList<Integer> list = new ArrayList<Integer>();
        list.add(78);
        list.add(785);
        list.add(58);
        list.add(785);
        //编译时就会进行类型检查，保证数据的安全
        //list.add("Tom");
        //方式一
//        for(Integer score:list){
//            //避免了强转操作
//            int stuScore=score;
//            System.out.println(stuScore);
//        }
        //方式二
        Iterator<Integer> iterator = list.iterator();
        while (iterator.hasNext()) {
            Integer score = iterator.next();
            System.out.println(score);
        }
    }

    @Test
    //在集合中使用泛型的情况，以HashMap为例
    public void test3() {
//            HashMap<String, Integer> map = new HashMap<String,Integer>();
        //jdk新特性：类型推断
        HashMap<String, Integer> map = new HashMap<>();
        map.put("张三", 100);
        map.put("李四", 98);
        map.put("王五", 97);

        //map.put(132,"sda");
        //泛型的嵌套
        //泛型的嵌套
        Set<Map.Entry<String, Integer>> entry = map.entrySet();
        Iterator<Map.Entry<String, Integer>> iterator = entry.iterator();
        while (iterator.hasNext()) {
            Map.Entry<String, Integer> e = iterator.next();
            String key = e.getKey();
            Integer value = e.getValue();
            System.out.println(key + value);
        }

    }
}
