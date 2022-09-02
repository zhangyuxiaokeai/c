package com.atgiugu.java;

import org.junit.Test;

import java.util.ArrayList;
import java.util.Collection;

/**
 * jdk5.0新增了foreach循环，用于遍历集合，数组
 * @author shkstart
 * @create 2022-02-10 15:23
 */
public class ForTest {
    @Test
    public void test1() {
        Collection coll = new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(new String("Tom"));
        coll.add(new Person("jery", 20));
        coll.add(false);

        // for(集合中元素的类型 局部变量 ：集合对象 )
        //内部仍然用了迭代器
        for (Object obj : coll) {
            System.out.println(obj);
        }
    }
    @Test
    public void test2(){
        int[] arr=new int[]{1,23,4,2,56,7,78};
        //for（数组元素类型  局部变量：数组对象）
        for(int i:arr){
            System.out.println(i);
        }
    }
    @Test
    public void test3(){
        String[] arr=new String[]{"MM","MM","MM","MM"};

        //普通for循环
//        for(int i=0 ;i< arr.length;i++){
//          arr[i]="阿里嘎多";
//        }
//        for (int i=0;i<arr.length;i++){
//            System.out.println(arr[i]);
//        }
        for(String obj:arr){
            obj="阿里嘎多";
        }
        for (String obj:arr){
            System.out.println(obj);
        }
    }

}
