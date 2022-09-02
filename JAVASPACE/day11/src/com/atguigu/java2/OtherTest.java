package com.atguigu.java2;

import com.atguigu.java1.Person;
import org.junit.Test;
import sun.reflect.annotation.AnnotationType;

import java.lang.annotation.Annotation;
import java.lang.reflect.AnnotatedType;
import java.lang.reflect.Constructor;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.util.Calendar;

public class OtherTest {
    /*
    获取构造器结构
     */
    @Test
    public void test1(){
        Class clazz= Person.class;
        //getConstructors（）获取当前运行时类的声明为public的构造器
        Constructor[] constructors = clazz.getConstructors();
    for(Constructor c:constructors){
        System.out.println(c);
    }
    //getDeclaredConstructors()：获取当前运行时类中声明的所有构造器
        Constructor[] declaredConstructors = clazz.getDeclaredConstructors();
    for (Constructor c:declaredConstructors){
        System.out.println(c);
    }
    }

    /**
     * 获取运行时类的父类
     */
    @Test
    public void test2(){
        Class<Person> clazz = Person.class;
        Class<? super Person> superclass = clazz.getSuperclass();
        System.out.println(superclass);
    }
    /**
     * 获取运行时类的带泛型父类
     */
    @Test
    public void test3(){
        Class<Person> clazz = Person.class;
        Type genericSuperclass = clazz.getGenericSuperclass();
        System.out.println(genericSuperclass);
    }
    @Test
    public void test4() {
        Class<Person> clazz = Person.class;
        Type genericSuperclass = clazz.getGenericSuperclass();
        ParameterizedType parameterizedType=(ParameterizedType) genericSuperclass;
    //获取泛型参数
        Type[] actualTypeArguments = parameterizedType.getActualTypeArguments();
        System.out.println(actualTypeArguments[0].getTypeName());
        System.out.println((Class)actualTypeArguments[0]);
    }
    /**
     * 获取运行时类的接口
     */
@Test
    public void test5(){
    Class<Person> clazz = Person.class;
    Class<?>[] interfaces = clazz.getInterfaces();
    for(Class c:interfaces){
        System.out.println(c);
    }
    System.out.println();
    //运行父类时父类的接口
    Class<?>[] interfaces1 = clazz.getSuperclass().getInterfaces();
    for(Class c:interfaces1){
        System.out.println(c);
    }
}
/**
 * 获取运行时类的包
 */
@Test
public void test6() {
    Class<Person> clazz = Person.class;
    Package aPackage = clazz.getPackage();
    System.out.println(aPackage);
}
/**
 * 获取运行时类声明的注解
 */
@Test
public void test7() {
    Class<Person> clazz = Person.class;
    Annotation[] annotations = clazz.getAnnotations();
    for(Annotation c:annotations){
        System.out.println(c);
    }
}
}
