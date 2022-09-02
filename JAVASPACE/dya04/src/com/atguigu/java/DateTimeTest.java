package com.atguigu.java;

import org.junit.Test;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

/**
 * JDK之前的日期时间的API测试
 * 1.System类中currentTimeMillis();
 * 2.java.untill.Date和子类java.sql.Date
 * 3.SimpleDateFormat
 * 4.Calendar
 *
 *
 * @author shkstart
 * @create 2022-02-08 13:00
 */
public class DateTimeTest {
    /*
    SimpDateFormat的使用：SimleDateFormat对日期Date类的格式化和解析
    1.1两个操作 ：日期--->字符串
    1.2解析“  格式化的逆过程：字符串---->日期

    2.SimpDateFormat的实例化
     */
    @Test
    public void testSimpDateFormat() throws ParseException {
        //实例化SimDateFormat
        SimpleDateFormat sdf = new SimpleDateFormat();

        //格式化日期：日期--->字符串
        Date date = new Date();
        System.out.println(date);
        String format = sdf.format(date);
        System.out.println(format);


        //解析：字符串---->日期
        String str="0-2-8 下午1:13";
        Date date1 = sdf.parse(str);
        System.out.println(date1);

        //*********按照指定的方式进行格式化：调用带参的构造器********************
        //SimpleDateFormat sdf1 = new SimpleDateFormat("yyyyy.MMMMM.dd GGG hh:mm aaa");
        SimpleDateFormat sdf1 = new SimpleDateFormat("yyyy.MM.dd hh:mm aaa");
        //格式化
        String format1 = sdf1.format(date);
        System.out.println(format1);
        //解析:要求字符串必须使用是符合SimleDateFormat识别的格式（通过构造器参数体现）
        Date data2 = sdf1.parse("2022.02.08 01:28 下午");
        System.out.println(data2);
    }
/*
练习一：字符串2020-09-08转换为java.sql.Date
练习二："三天打鱼两天晒网" 1990-01-01   xxxx-xx-xx打鱼？筛网
举例：2020-09-08？总天数
总天数%5==1，2，3，打渔
总天数%5==4，0：筛网
总天数的计算？
方式一：（data2.getTime()-datd1.GetTime()）/(1000*60*60*24)+1
 */
    @Test
    public void testExer() throws ParseException {
        String birth="2020-09-08";
        SimpleDateFormat sdf1 = new SimpleDateFormat("yyyy-MM-dd");
        Date date = sdf1.parse(birth);
        //System.out.println(date);
        java.sql.Date birthDate=new java.sql.Date(date.getTime());
        System.out.println(birthDate);

    }
    /*
    Calender日历类（抽象类）的使用
     */
    @Test
    public void testCalendar(){
        //实例化
        //方式一：创建其子类（GregorianCalendar）的对象
        //方式二：调用其静态方法getInstance()
        Calendar calendar = Calendar.getInstance();
//        System.out.println(calendar.getClass());
        //2.常用方法
        //get()
        int days = calendar.get(Calendar.DAY_OF_MONTH);
        System.out.println(days);
        int i = calendar.get(Calendar.HOUR_OF_DAY);
        System.out.println(i);
        //set()
        calendar.set(Calendar.DAY_OF_MONTH,22);
        int days1 = calendar.get(Calendar.DAY_OF_MONTH);
        System.out.println(days1);
        //add()
        calendar.add(Calendar.DAY_OF_MONTH,3);
        days=calendar.get(Calendar.DAY_OF_MONTH);
        System.out.println(days);
        //getTime():日历类---Date
        Date date = calendar.getTime();
        System.out.println(date);
        //setTime()
        Date date1=new Date();
        calendar.setTime(date1);
        days=calendar.get(Calendar.DAY_OF_MONTH);
        System.out.println(days);
    }
    @Test
    public void test4() {
        Calendar calendar = Calendar.getInstance();
        for (int year = 1980; year <= 10000; year+=100) {
            calendar.set(Calendar.YEAR, year);
            calendar.set(Calendar.MONTH, 11);
            calendar.set(Calendar.DAY_OF_MONTH, 31);
            if(calendar.get(Calendar.DAY_OF_WEEK)==1) {
                System.out.println(calendar.get(Calendar.YEAR));
                Date date = calendar.getTime();

                break;
            }
        }
    }
}
