package com.atguigu.java;

import org.testng.annotations.Test;

import java.nio.charset.StandardCharsets;
import java.util.Arrays;

/**
 *
 * 涉及到String类和其他结构之间的转换
 *
 * @author shkstart
 * @create 2022-02-07 0:03
 */
public class StringTest1 {


    /*
    String与byte[]之间的转换
    String---->byte[]数组:调用String的getBytes()
    编码：字符串--->字节
    解码：编码的逆过程，字节---->字符串

    说明：解码时，要求 解码使用的字符集必须与编码使用的的字符集一致，否则会出现乱码

     */
    @Test
    public void test3(){
        String str1="abc123中国";
        byte[] bytes = str1.getBytes(StandardCharsets.UTF_8);//使用默认字符集，进行转换
        System.out.println(Arrays.toString(bytes));
        //byte[] bytes1 = str1.getBytes("gbk");//使用gbk字符进行编码
        String str2 = new String(bytes);
        System.out.println(str2);
    }

    /*
    String 与char[]之间的转换

    String---->char[]数组:调用String的toCharArray()方法
    char[]数组---->String:调用String的构造器
     */
    @Test
    public void test2(){
        String str1="abc123";
        char[] charArry = str1.toCharArray();
        for(int i=0;i<charArry.length;i++){
            System.out.println(charArry[i]);
        }
        char[] arr=new char[]{'h','e','l','l','o'};
        String str2 = new String(arr);
        System.out.println(str2);
    }


    /*
    复习：
    String 与基本数据类型，包装类之间的转换
    String -->基本数据类型，包装类：调用包装类的静态方
    基本数据类型，包装类--->String:调用String重载的valueOf(xxx)
     */
    @Test
    public void test1(){
        String str1="123";
        //int num=(int)str1;//错误
        int num = Integer.parseInt(str1);
        String str2 = String.valueOf(num);
        String str3=num+"";

    }

}
