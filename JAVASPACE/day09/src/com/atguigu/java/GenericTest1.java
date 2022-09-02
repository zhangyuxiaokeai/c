package com.atguigu.java;

import org.junit.Test;

import java.util.ArrayList;
import java.util.List;

/**
 * 1.关于自定义类，泛型接口
 * @author shkstart
 * @create 2022-02-15 23:19
 */
public class GenericTest1 {
    @Test
    public void test1(){
        //如果定义了泛型类，实例化没有指明类的泛型，则认为此泛型类型为Object类型
        //要求：如果大家定义了类是带泛型的，建议在实例化时指明类的泛型
        Order order = new Order();
        order.setOrderT(123);
        order.setOrderT("ABC");

        //建议：实例化时指明类的泛型
        Order<String> order1 = new Order<String>("orderAA",1001,"AA");
        order1.setOrderT("AA:hello");
    }
    @Test
    public void test2(){
        SubOrder sub1 = new SubOrder();
        //由于子类在继承带泛型的父类时，指明了泛型的类型。则实例化子类对象时，不需要指明泛型
        sub1.setOrderT(1122);


        SubOrder1<String> sub2 = new SubOrder1<>();
        sub2.setOrderT("是个傻逼");
    }
    @Test
    public void test5(){
        //泛型不同的引用不能相互赋值
        ArrayList<String> list1=null;
        ArrayList<Integer> list2=null;
        //泛型不同的引用不能相互赋值
       // list1=list2;
    }
    
    //测试泛型方法
    @Test
    public void test6(){
        Order<Object> order = new Order<>();
        Integer[] arr=new Integer[]{1,2,34,};
        //泛型方法在调用时，指明泛型参数的类型
        List<Integer> list = order.copyFromArrayToList(arr);
        System.out.println(list);
    }
}
