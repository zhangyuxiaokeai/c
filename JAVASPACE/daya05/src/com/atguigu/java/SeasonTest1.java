package com.atguigu.java;

/**
 * 使用enum关键字定义枚举类
 * 说明：定义的枚举类默认继承于class java.lang.Enum
 * @author shkstart
 * @create 2022-02-09 13:21
 */
public class SeasonTest1 {
    public static void main(String[] args) {
        Season1 summer = Season1.SUMMER;
        //toString()
        System.out.println(summer.toString());
//        System.out.println(Season1.class.getSuperclass());
        System.out.println("*************************");
   //values():
        Season1[] values = Season1.values();
        for(int i=0;i< values.length;i++){
            System.out.println(values[i]);
            values[i].show();
        }
        System.out.println("*************************");
        Thread.State[] value1=Thread.State.values();
        for(int i=0;i< value1.length;i++){
            System.out.println(value1[i]);
        }
        System.out.println("*************************");
        //valueOf(String objName):根据提供的objName,返回枚举类中对象名时objName的对象
        //如果没有objName枚举类的对象，则抛异常java.lang.IllegalArgumentException
        Season1 winter = Season1.valueOf("WINTER");
        //Season1 winter2 = Season1.valueOf("WINTER1");//java.lang.IllegalArgumentException
        System.out.println(winter);
        winter.show();
    }
}
interface info{
void show();
        }

//enum枚举类
enum  Season1 implements info{
    //1.提供当前枚举类的对象，多个对象之间用逗号隔开，末尾对象用分号结束
    SPRING ("春天", "春暖花开"){
        @Override
        public void show() {
            System.out.println("春天在那里啊");
        }
    },
    SUMMER("夏天", "夏日炎炎"){
        @Override
        public void show() {
            System.out.println("夏天在这里");
        }
    },
    AUTUMN ("秋天", "秋高气爽"){
        @Override
        public void show() {
            System.out.println("秋天还没来哇");
        }
    },
    WINTER ("冬天", "冰天雪地"){
        @Override
        public void show() {
            System.out.println("冬天已过去");
        }
    };
    //1.申明Season对象的属性：private final修饰
    private final String seasonName;
    private final String SeasonDesc;

    //2.私有化类的构造器:并给对象属性赋值
    private Season1(String seasonName, String SeasonDesc) {
        this.seasonName = seasonName;
        this.SeasonDesc = SeasonDesc;
    }

    //3.提供当前枚举类的多个对象


    //4.其他诉求：获取枚举类对象的属性

    public String getSeasonName() {
        return seasonName;
    }

    public String getSeasonDesc() {
        return SeasonDesc;
    }


    //4.其他诉求：提供toString方法
//
//    @Override
//    public String toString() {
//        return "Season1{" +
//                "seasonName='" + seasonName + '\'' +
//                ", SeasonDesc='" + SeasonDesc + '\'' +
//                '}';
//    }
  //  @Override
//    public void show() {
//        System.out.println("这是一个季节");
//    }
}