package com.atguigy.java;

/**
 *
 * 创建多线程的方式二：实现Runable接口
 * 1.创建一个实现Runable接口的类
 * 2.实现类去实现Runable中的抽象方法：run()
 * 3.创建实现类的对象
 * 4.将此对象作为参数传递到Thread类的构造器中，创建Thread类的对象
 * 5.通过Thread类的对象调用start();
 *
 *
 * 比较创建线程的两种方式：
 * 开发中：优先选择：实现Runnable接口的方式
 * 原因：1.实现的方式没有类的但继承性的局限性
 *      2.实现的方式更适合来处理多个数据共享数据的情况
 *
 * 联系：public class Thread implements Runnable
 * 相同点：两种方式都需要重写run()方法，将线程要执行的逻辑申明在run()中
 * @author shkstart
 * @create 2022-01-26 21:29
 */
class MThread implements Runnable{
//实现类去实现Runable中的抽象方法：run()
    @Override
    public void run() {
    for(int i=0;i<100;i++){
        if(i%2==0){
            System.out.println(i);
            System.out.println(Thread.currentThread().getName()+":"+i);
        }
    }
    }
}

public class ThreadTest1 {
    public static void main(String[] args) {
        MThread mThread = new MThread();
        //4.将此对象作为参数传递到Thread类的构造器中，创建Thread类的对象
        Thread t1 = new Thread((mThread));
        t1.setName("线程1");
        //5.通过Thread类的对象调用start();①启动线程②调用当前线程的run()-->调用
        //当前线程的run（）--调用了Runable类型的target的run()方法
        t1.start();
        t1.setName("线程2");
        //再启动一个线程
        Thread t2 = new Thread((mThread));
        t2.start();
    }
}
