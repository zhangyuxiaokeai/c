package com.atguigu.java;

import org.testng.annotations.Test;

/**
 * 关于StringBuffer和StringBuilder的使用
 *
 *对比String StringBuffer,StringBuilder三者的效率
 * 从高到低排列：StringBuilder> StringBuffer> String
 * @author shkstart
 * @create 2022-02-07 13:00
 */
public class StringBufferBuilderTest {
    /*
    StringBuffer的常用方法
    StringBuffer append(xxx):提供了很多的append（）方法，用于字符串的拼接
    StringBuffer delete(int start,int end):删除指定位置上的内容
    StringBuffer replace(int start,int end ,String str):把[start ,end]位置转化为str
    StringBuffer insert(int offset,xxx):在指定位置插入xxx
    StringBuffer reverse():把当前字符串逆转
    public int indexOf(String str)
    public String substring(int start,int end)
    public int length()
    public char charAt(int n)
    public void setCharAt(int n,char ch)
    总结：
    增：append（xxx）
    删：delete(int start,int end)
    改：setcharAt(int n,char ch)/replace(int start ,int end,String str)
    查：charAt(int n)
    插：insert(int offset ,xxx)
    长度：length()
    遍历：for()+charAt()


     */
@Test
public void test2(){
StringBuffer s1=new StringBuffer("abc");
    StringBuffer s12=new StringBuffer("abc");
s1.append(1);
s1.append('1');
    System.out.println(s1);
   // StringBuffer keai = s1.delete(2, 4);
   // s1.replace(2,4,"hello");
   // s1.insert(2,"false");
   // s1.reverse();
    String s2 = s1.substring(1, 3);
    System.out.println(s1);
    //System.out.println(keai);
    System.out.println(s1.length());
    System.out.println(s2);
    s12.append("qwe").append("qweweqwe").append("dsdasdsad");
    System.out.println(s12);

}




    /*
    String ,StringBuffer,StringBuilder三者的异同？
   String:不可变的字符序列：使用使用char[]数组存储
   StringBuffer: 可变的字符序列：线程安全的，效率偏低：
   StringBuilder:可变的字符序列：jdk5.0新增，线程不安全的，效率高：

    源码分析：
    String str=new String();//new char[0]
    String str1=new String("abc")//new char[]{'a','b','c'};
    StringBuffer sb1=new StringBuffer();//new char[16];底层创建了一个长度为16的数组
    system.out.println(sb2.length())//
    sb1.append('a');//value[0]='a';
    sb1.append('b');//value[1]='b';
    StringBuffer sb2=new StringBuffer("abc");//char[]value=new char["abc".length()+16];
    问题1：system.out.println(sb2.length());//3
    问题2：扩容问题：如果要添加的数据底层数组盛不下了，那就需要扩容底层数组。
           默认情况下，扩容为原来的两倍+2，同时将原有数组中的数组元素复制到新的数组中
           指导意义：开发中建议大家使用：StringBuffer(int capacity) 或StringBuilder(int capacity)
     */
    @Test
    public void test1(){
        StringBuffer sb1=new StringBuffer("abc");
        sb1.setCharAt(0,'m');
        System.out.println(sb1);
        StringBuffer sb2=new StringBuffer();
        System.out.println(sb2);//0
    }
}
