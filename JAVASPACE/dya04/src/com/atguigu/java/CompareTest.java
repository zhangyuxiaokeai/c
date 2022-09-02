package com.atguigu.java;

import org.junit.Test;

import java.lang.reflect.Array;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Arrays;
import java.util.Comparator;
import java.util.Date;

/**
 * 一，说明：java中的对象，正常情况下，只能进行比较 ==或！=。不能使用> 或<的
 * 但是在开发场景中，我们需要对多个对象进行排序，言外之意，就需要比较大小
 * 如何实现？使用两个接口中的任何一个Comparable 或Comparator
 *
 * 二，Compareale接口与Comparator的使用比较
 *Compareale接口的方式一旦指定，保证Compaeable接口实现类的对象在任何位置在任何位置都可以比较大小
 *Comparator接口临时性进行比较，
 * @author shkstart
 * @create 2022-02-08 23:08
 */
public class CompareTest {
    /*
    Comparable接口的使用举例：自然排序
    1.像String,包装类等实现了Comparable接口，就重写了compareTo()方法，给出了比较两个对象大小的方式
    2.像String,包装类重写compareTo方法以后，进行了从小到大的排列
    3.重写compareTo()的规则：
     如果当前对象this大于形参对象obj，则返回正整数，如果当前对象this小于形参obj，则返回负数
    4.如果对于自定义类，如果需要排序，我们可以让自定义类实现Comparable接口
     在ComparableTo(obj)方法中指明如何排序
     */
    @Test
    public void test1() {
        String[] arr = new String[]{"AA", "KK", "CC", "MM", "GG", "JJ", "DD", "KK"};
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    @Test
    public void test2() {
        Goods[] arr = new Goods[4];
        arr[0] = new Goods("拖拉机", 10005);
        arr[1] = new Goods("卡车", 10001);
        arr[2] = new Goods("推土机", 10002);
        arr[3] = new Goods("挂车", 10003);
        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
    }

    /*
    Compartor接口的使用：定制排序
    1.当元素的类型没有实现java.lang.Comparable接口而又不方便修改代码，
    或实现了java.lang.Comparable接口的排序规则不适合当前的操作，那么可以考虑使用Compartor
    的对象来排序
    2.重写compare(Object o1,Object O2)方法，比较o1 o2的大小；
    如果返回正整值，则表示o1大于o2；
    如果返回0，则表示相等，
    返回负整数，则表示o1小于o2
     */
    @Test
    public void test3() {
        String[] arr = new String[]{"AA", "KK", "CC", "MM", "GG", "JJ", "DD", "KK"};
        Arrays.sort(arr, new Comparator() {
            @Override
            //按照字符串从大到小的顺序排列
            public int compare(Object o1, Object o2) {
                if (o1 instanceof String && o2 instanceof String) {
                    String s1 = (String) o1;
                    String s2 = (String) o2;
                    return -s1.compareTo(s2);
                }
                throw new RuntimeException("输入的类型不一致");
            }
        });
        System.out.println(Arrays.toString(arr));
    }

    @Test
    public void test4() {
        Goods[] arr = new Goods[4];
        arr[0] = new Goods("a拖拉机", 10005);
        arr[1] = new Goods("b卡车", 10001);
        arr[2] = new Goods("b卡车", 10002);
        arr[3] = new Goods("c挂车", 10003);
        Arrays.sort(arr, new Comparator() {
            @Override
            public int compare(Object o1, Object o2) {
                //指明商品比较大小的方式：按照产品从低到高排序，再按照价格从高到低排序
                if (o1 instanceof Goods && o2 instanceof Goods) {
                    Goods g1 = (Goods) o1;
                    Goods g2 = (Goods) o2;
                    if (g1.getName().equals(g2)) {
                        return -Double.compare(g1.getPrice(), g2.getPrice());
                    } else {
                        return g1.getName().compareTo(g2.getName());
                    }
                }
              throw  new RuntimeException("输入的类型不一致");
            }
        });
        System.out.println(Arrays.toString(arr));
    }
    @Test
    public void test5() throws ParseException {
        SimpleDateFormat simpleDateFormat = new SimpleDateFormat("yyyy.MM.dd hh:mm");
        Date date = new Date();
        System.out.println(date);
        String format = simpleDateFormat.format(date);
        System.out.println(format);
        Date parse = simpleDateFormat.parse(format);
        System.out.println(parse);

    }
}
