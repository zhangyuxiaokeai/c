package com.atguigy.java;

/**
 * 多线程的创建  方式一：继承于Thread
 * 1.创建一个继承与thread类的子类
 * 2.重写thread的run()--->此方法執行的操作声明在run（）中
 * 3.创建此对象调用start()
 *
 *
 * 例子：遍历100以内的所有偶数
 * @author shkstart
 * @create 2022-01-21 14:12
 *
 * 创建一个继承于thread的子类
 */
class MyThread extends Thread{
    //2重寫Thread的run()
    @Override
    public void run() {
    for (int i=0;i<100;i++){
        if(i%2==0){
            System.out.println(Thread.currentThread().getName()+":"+i);
        }
    }
    }
    }



public class ThreadTest {
    public static void main(String[] args) {
        //3.创建Therad类的子类对象
        MyThread t1 = new MyThread();
        MyThread t2 = new MyThread();
//        4.创建此对象调用start():①启动当前线程②调用当前线程的run()
        t1.start();
        //问题1：我们不能通过直接调用run（）的方法启动线程
        //t1.run();

        //问题2：再启动一个线程,遍历100以内的偶数。不可以还让已经start（）的线程去执行，会报IllegalThreadStateException
    // t1.start();
        t2.start();
        //如下的操作仍是在main线程中执行的
        for (int i = 0; i < 100; i++) {
            if (i % 2 == 0) {
                System.out.println(Thread.currentThread().getName()+":"+i + "*****main******");
            }
        }
    }
}