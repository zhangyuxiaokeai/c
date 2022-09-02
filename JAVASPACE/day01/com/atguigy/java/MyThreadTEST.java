package com.atguigy.java;

/**
 * @author shkstart
 * @create 2022-01-27 22:59
 */
class Zhangyu implements Runnable{

    @Override
    public void run() {
        for(int i=0;i<100;i++){
            System.out.println("张余是一个大帅哥"+i+Thread.currentThread().getName());
        }
    }
}


public class MyThreadTEST {
    public static void main(String[] args) {
        Zhangyu t1 = new Zhangyu();
        Thread W1 = new Thread(t1);
//        W1.start();
    W1.run();
    }


}
