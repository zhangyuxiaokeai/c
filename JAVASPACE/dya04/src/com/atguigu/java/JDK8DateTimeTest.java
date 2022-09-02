package com.atguigu.java;

import org.junit.Test;

import java.time.*;
import java.time.format.DateTimeFormatter;
import java.time.format.FormatStyle;
import java.time.temporal.TemporalAccessor;
import java.util.Date;

/**
 * jdk 8中日期时间API的测试
 * @author shkstart
 * @create 2022-02-08 14:16
 */
public class JDK8DateTimeTest {
@Test
    public void testDate(){
    Date data1=new Date(2020,9,8);
    System.out.println(data1);
}
/*
locaLDate,LocalTime,LocaDateTime 的使用
说明：
    LocalDateTime相较于另外两个locaLDate,LocalTime,使用频率较高
 */
    @Test
    public void test1(){
        //获取当前日期，时间，日期+时间
        LocalDate nowDate = LocalDate.now();
        LocalTime localTime = LocalTime.now();
        LocalDateTime localDateTime = LocalDateTime.now();
        System.out.println(nowDate);
        System.out.println(localTime);
        System.out.println(localDateTime);
    //of();设置指定的年月日时分秒，没有偏移量
        LocalDateTime localDateTime1 = LocalDateTime.of(2020, 10, 6, 13, 23, 43);
        System.out.println(localDateTime1);

        //getXxx()
        System.out.println(localDateTime.getDayOfMonth());
        System.out.println(localDateTime.getDayOfWeek());
        System.out.println(localDateTime.getMonthValue());
    }
    /*
    Instant的使用
    类似于java.until.Date类
     */
    @Test
    public void test2(){
        //now():获取本初子午线对应的标准时间
        Instant instant = Instant.now();
        System.out.println(instant);//2022-02-08T13:52:36.864Z

        //添加时间偏移量
        OffsetDateTime offsetDateTime = instant.atOffset(ZoneOffset.ofHours(8));
        System.out.println(offsetDateTime);

        //获取对应的毫秒数从1970.1.1.0时0分 开始的毫秒数  ---->Date类的getTime()
        long milli = instant.toEpochMilli();
        System.out.println(milli);

        //ofEpochMilli（）;通过给定的毫秒数，获取Instant实例---->Date(long mills)
        Instant instant1 = Instant.ofEpochMilli(1644328737345L);
        System.out.println(instant1);
    }
    /*
    DateTimeFormatter:格式化或解析日期，时间
    类似于SimpleDateFormat

     */
    @Test
    public void test3(){
//        //方式一：预定义的标准格式ISO_LOCAL_DATE_TIME;ISO_LOCAL_DATE;ISO_LOCAL_TIME
//        DateTimeFormatter formatter = DateTimeFormatter.ISO_LOCAL_DATE_TIME;
//        //格式化:日期--->字符串
//        LocalDateTime localDateTime = LocalDateTime.now();
//        String str1 = formatter.format(localDateTime);
//        System.out.println(localDateTime);
//        System.out.println(str1);
//        //解析：字符串 -->日期
//        TemporalAccessor parse = formatter.parse("2022-02-08T22:15:21.992");
//        System.out.println(parse);
//        //方式二本地化相关格式。如：ofLocallizedDateTime(FormatStyle.LONG)
//        DateTimeFormatter formatter1 = DateTimeFormatter.ofLocalizedDateTime(FormatStyle.SHORT);
//        //格式化
//        String str2 = formatter1.format(localDateTime);//22-2-8 下午10:21
//        System.out.println(str2);
//        //本地相关的格式。如：ofLocalizedDate()
//        //FormatStyle.Full/FormatStyle.LONG/ForatStyle.SHORT:适用于LocalDate
//        DateTimeFormatter formatter2 = DateTimeFormatter.ofLocalizedDateTime(FormatStyle.FULL);
////
////        String str3 = formatter2.format(LocalDate.now());
////        System.out.println(str3);

        //重点：方式三自定义相关格式。如ofPattern("yyyy-MM-dd hh:mm:ss E")
        DateTimeFormatter formatter3 = DateTimeFormatter.ofPattern("yyyy-MM-dd hh:mm:ss");
        //格式化
        String str4 = formatter3.format(LocalDateTime.now());
        System.out.println(str4);//2022-02-08 10:39:23

        //解析
        TemporalAccessor accessor = formatter3.parse("2022-02-08 10:39:23");
        System.out.println(accessor);

    }

}
