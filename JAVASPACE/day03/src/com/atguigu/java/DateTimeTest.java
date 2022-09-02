package com.atguigu.java;

import org.testng.annotations.Test;

import java.util.Date;

/**JDK 8之前日期和时间的API测试
 * @author shkstart
 * @create 2022-02-07 14:35
 */
public class DateTimeTest {

    /*
    Java.until.Date类
            |----java.sql.Date类
            1.两个构造器的使用
              //构造器一：Date()：创建一个对应当前时间的Date对象
               //构造器:创建指定毫秒数的Date对象
            2.两个方法的使用
            toString()显示当前的年月日时分秒
            >getime():获取当前Date对象对应的毫秒数。时间戳
            3.java.sql.Date对应着数据库中的日期类型的变量
            >如何实例化
            >sql.Date ---->util.Date对象转化为sql.Date对象
            //如何将java.utilDate对象转化为java.sqlDate对象
     */
    @Test
    public void test2(){
        //构造器一：Date()：创建一个对应当前时间的Date对象
        Date date1 = new Date();
        System.out.println(date1.toString());
        System.out.println(date1.getTime());

        //构造器:创建指定毫秒数的Date对象
        Date date2 = new Date(1644246072059L);
        System.out.println(date2.toString());

        //创建java.sql.Date对象
        java.sql.Date date3 = new java.sql.Date(1644246072059L);
        System.out.println(date3.toString());

        //如何将java.utilDate对象转化为java.sqlDate对象
        Date date4=new java.sql.Date(1644246072059L);
        java.sql.Date date5=(java.sql.Date) date4;
        //情况二
        Date date6=new Date();
        java.sql.Date date7=new java.sql.Date(date6.getTime());
    }

    //System类中的currentTimeMillis()
    @Test
    public void test1(){
        long time = System.currentTimeMillis();
        //返回当前时间与19970年1月1日0分0秒之间以毫秒为单位的时间差
        //称为时间戳
        System.out.println(time);
    }

}
