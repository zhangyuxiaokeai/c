package com.agtuigu.java;

/**
 * 静态代理举例
 * 特地：代理类和被代理类在编译期间，就确定下来了
 */
interface ClothFactory{
    void produceCloth();
}
//代理类
class ProxyClothFactory implements ClothFactory{
    private  ClothFactory factory;//就用被代理类对象进行实例化
    public ProxyClothFactory( ClothFactory factory){
        this.factory=factory;
    }
    @Override
    public void produceCloth() {
        System.out.println("代理工厂进行一些准备工作");
        factory.produceCloth();
        System.out.println("代理工厂做一些后续的收尾工作");
    }

}
//被代理类
class NickClothFactory implements ClothFactory{

    @Override
    public void produceCloth() {
        System.out.println("nick工厂生产一些运动服");
    }
}
public class StaticProxyTest {
    public static void main(String[] args) {
        //创建被代理类的对象
        NickClothFactory nick=new NickClothFactory();
        //创建代理类的对象
        ProxyClothFactory proxyClothFactory = new ProxyClothFactory(nick);
        proxyClothFactory.produceCloth();
    }
}
