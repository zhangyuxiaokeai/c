package com.agtuigu.java;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.util.logging.Handler;

/**
 * 动态代理的举例
 */
interface Human{
    String getBelief();
    void eat(String food);
}
//被代理类
class SuperMan implements Human{

    @Override
    public String getBelief() {
        return "I believe I can Fiy!";
    }

    @Override
    public void eat(String food) {
        System.out.println("我喜欢吃"+food);
    }
}
/*
要实现动态代理，需要解决的问题
问题一：如何根据加载到内存中的被代理类，动态的创建一个代理类及其对象
问题二：当通过代理类的对象调用方法时，如何动态的去调用被代理类中的同名方法

 */
class ProxyFactory{
    //调用此方法，返回一个代理类的对象，解决问题一
    public  static  Object getProxyInstance(Object obj){//obj被代理类的对象

        MyInvocationHandler myInvocationHandler = new MyInvocationHandler();

        myInvocationHandler.bind(obj);

       return Proxy.newProxyInstance(obj.getClass().getClassLoader(),obj.getClass().getInterfaces(),myInvocationHandler);
    }
}
class MyInvocationHandler implements InvocationHandler{
    private Object obj;//赋值时，需要使用被代理类的对象进行赋值
    public void bind(Object obj){
        this.obj=obj;
    }
    //当我们通过代理类的对象，调用方法a时，就会自动的调用如下的方法：invoke()
    //将被代理类要执行的方法a的功能就声明在invoke（）中
    @Override
    public Object invoke(Object proxy, Method method, Object[] args) throws Throwable {
       //method：即为代理类对象调用的方法，此方法也就作为了被代理类对象要调用的方法
       //obj:被代理类的对象
        Object returnValue = method.invoke(obj, args);
        //上述方法的返回值就作为当前类中的invoke（）返回值
        return returnValue;
    }
}
public class ProxyTest {
    public static void main(String[] args) {
        SuperMan superMan = new SuperMan();
       //ProxyInstance:代理类的对象
        Human proxyInstance = (Human)ProxyFactory.getProxyInstance(superMan);
        //当通过代理类对象调用方法时，会自动的调用被代理类中的同名的方法
        String belief = proxyInstance.getBelief();
        proxyInstance.eat("麻辣烫");
        System.out.println("********************************************");
        NickClothFactory nickClothFactory = new NickClothFactory();
        ClothFactory proxyInstance1 =(ClothFactory) ProxyFactory.getProxyInstance(nickClothFactory);
        proxyInstance1.produceCloth();
    }
}
