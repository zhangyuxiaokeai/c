package com.atguigu.java1;

/**
 * @author shkstart
 * @create 2022-01-29 15:32
 * 使用同步机制将单例模式中的懒汉式改写为线程安全的
 *
 *
 */

class Bank {
    private Bank() {
    }

    private static Bank instance = null;

    public static Bank getInstance() {       //可以在static后面家synchronize
        //方式一：效率稍差
//        synchronized (Bank.class) {
//            if(instance==null){
//                instance=new Bank();
//            }
//            return null;
//        }

 //方式二：效率稍高
        if (instance == null) {
            synchronized (Bank.class) {
                if (instance == null) {
                    instance = new Bank();
                }
            }
        }
            return null;
    }
}
public class BanckTest {
    public static void main(String[] args) {
    }
}