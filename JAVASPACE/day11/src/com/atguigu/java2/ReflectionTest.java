package com.atguigu.java2;

import com.atguigu.java1.Person;
import org.junit.Test;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/**
 * 调用运行时类中指定的结构：属，方法，构造器：
 */
public class ReflectionTest {
   /*

    */
    @Test
    public void testFiled() throws Exception{
        Class<Person> clazz = Person.class;
        //创建运行时类的对象
        Person p = (Person) clazz.newInstance();
        //获取指定的属性：要求运行时类中属性声明为public
        //通常不采用此方法
        Field id = clazz.getField("id");
        //设置当前属性的值
        //set():参数1：指名设置那个对象的属性 参数二：将此属性的值设置为多少
        id.set(p,1001);
        /*
        获取当前属性的值
        get():参数一：获取哪个对象的当前属性值
         */
        System.out.println(id.get(p));
    }
/*
如何操作运行时类中的指定的属性--需要掌握
 */
    @Test
    public void testFiled1() throws InstantiationException, IllegalAccessException, NoSuchFieldException {
        Class<Person> clazz = Person.class;
        //获取运行时类的对象
        Person p = (Person) clazz.newInstance();
        //
        Field name = clazz.getDeclaredField("name");
      //setAccessible()保证当前属性是可以访问的
        name.setAccessible(true);
        //获取，设置指定对象的此属性值
        name.set(p,"jery");
        System.out.println(name.get(p));
    }

    /*
    如何操作运行时类中指定的方法 ----需要掌握
     */
    @Test
    public void testMethod() throws NoSuchMethodException, InstantiationException, IllegalAccessException, InvocationTargetException {
        //一.创建运行时类的对象
        Class<Person> clazz = Person.class;
        Person p = clazz.newInstance();
        //二.获取指定的某个方法
         /*
         getDeclaredMethod()：参数一：指明获取的方法的名称 参数2：知名获取的方法的形参列表

          */
        Method show = clazz.getDeclaredMethod("show", String.class);
       //三.保证当前的方法是可访问的
        show.setAccessible(true);
        /*
        invoke():参数一：方法的调用者 参数二：给方法形参赋值的实参
       invoke()的返回值即为对应类中调用的方法的返回值
         */
        String chn = (String) show.invoke(p, "chn");
        System.out.println("***************************************");
        Method showDesc = clazz.getDeclaredMethod("showDesc");
        //如果调用的运行时类的方法没有返回值，则返回null
        showDesc.setAccessible(true);
        Object returnVal = showDesc.invoke(Person.class);
        System.out.println(returnVal);
    }
/*
如何调用运行时类中指定的构造器
 */
    @Test
    public void tetsContructor() throws Exception {
        Class<Person> clazz = Person.class;

        //获取指定的运行时类的构造器、
        /*
        getConstructor():参数：指明构造器的参数列表
         */
        Constructor<Person> constructor = clazz.getDeclaredConstructor(String.class);
        //2保证此构造器时刻访问的
        constructor.setAccessible(true);
        //调用此构造器创建运行时类的对象
        Person tom = constructor.newInstance("Tom");
        System.out.println(tom);
    }
}
