package com.atguigu.java;

import org.junit.Test;

import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class ReflectionTest {

    //反射之前，对于Person的操作
@Test
    public void test1(){
    //1创建Person类的对象
    Person person = new Person("tom",12);
    //2通过对象，调用其内部的属性，方法
    person.age=10;
    System.out.println(person.toString());
    person.show();

        //在person类的外面，不可用通过person类的对象调用
    //其内部类的私有方法
    //比如：name.nation (这个私有的方法，和私有的构造器)
}

@Test
    public void test2() throws Exception {
    Class clazz = Person.class;
    //`1通过反射，创建Person类的对象
    Constructor constructor = clazz.getConstructor(String.class, int.class);
    Object tom = constructor.newInstance("TOM", 12);
    Person p= (Person) tom;
    System.out.println(p.toString());
    //2.通过反射，调用对象指定的属性方法
    Field age = clazz.getDeclaredField("age");
    age.set(p,10);
    System.out.println(p.toString());
    System.out.println("****************************");
    //调用方法
    Method show = clazz.getDeclaredMethod("show");
    show.invoke(p);
    //通过反射，可以调用person类的私有结构的，比如：
    //私有的构造器，方法，属性

    //调用私有的构造器
    Constructor cons1 = clazz.getDeclaredConstructor(String.class);
    cons1.setAccessible(true);
    Person p1 = (Person)cons1.newInstance("Jery");
    System.out.println(p1);

    //调用私有的属性
    Field name = clazz.getDeclaredField("name");
    name.setAccessible(true);
    name.set(p1,"HANmeimei");
    System.out.println(p1.toString());
    System.out.println("888888888888888888");

    //调用私有的方法
    Method showNation = clazz.getDeclaredMethod("showNation", String.class);
    showNation.setAccessible(true);
    String nation =(String) showNation.invoke(p1, "中国");//相当于p1.showNation(“中国”)

}
//疑问一:通过直接new的方式或反射的方式都可以调用公共的结构，开发中到底用那个
    // 建议：直接new的方式
    //什么时候会使用：反射的方式。反射的特征：动态性
//疑问2：有了反射之后与面对对象中的封装性是不是矛盾的？如何看待两个技术
//不矛盾。
/*
关于java.lang.Class类的理解
1.类的加载过程：
    程序经过javac，exe命令后以后，会生成或多个字节码文件（.class结尾），接着我们使用
    java.exe命令对某个字节码文件进行解释运行。相当于将某个字节码文件加载到内存，
    此过程称为类的加载。加载到内存中的类，我们称为运行时类，运行此
    运行时类，就作为Class的一个实例。

    2.换句话说：Class的实例就对应着一个运行时类
 */

//3.加载到内存中的运行时类，会缓存一定的时间，在此时间内我们可以
//通过不同的方法来获取运行时类。

    //获取Class的实例的方式(前三种方式需要掌握)
    @Test
    public void test3() throws Exception {
        //方式一:调用运行时类的属性：.class
        Class<Person> clazz1 = Person.class;
        System.out.println(clazz1);
        //通过运行时类的对象,去掉用getclass()
        Person p1 = new Person();
        Class clazz2 = p1.getClass();
        System.out.println(clazz2);
        //方式三：调用Class的静态方法：forName(String calssPath)
        Class<?> clazz3 = Class.forName("com.atguigu.java.Person");
        System.out.println(clazz3);
        System.out.println(clazz1==clazz2);
        System.out.println(clazz1==clazz3);
    //方式四使用类的加载器ClassLoader
        ClassLoader classLoader=ReflectionTest.class.getClassLoader();
        Class<?> clazz4 = classLoader.loadClass("com.atguigu.java.Person");
        System.out.println(clazz4);
        System.out.println(clazz2==clazz4);


    }

}