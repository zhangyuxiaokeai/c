package com.atguigu.java1;

/**
 * 线程通信的例子：使用两个线程打印1-100.线程1，线程2交替打印
 *涉及三个方法：
 * wait():一旦执行此方法，当前线程就进入阻塞状态，并释放同步监视器。
 * notify():一旦执行此方法，就会唤醒被wait()的一个线程。如果有多个线程被wait，我们就唤醒优先级高的那个
 * notifyall():一旦执行此方法，就会唤醒所有被wait的线程。
 *
 * 说明：
 * 1.wait(),notify(),notifyall()三个方法必须使用在同步代码块或同步方法中
 * 2.wait(),notify(),notifyall()三个方法的调用者必须是同步代码块或同步方法中的同步监视器
 *否则，会出现java.lang.IllegalMonitorStateException异常
 * 3.wait(),notify(),notifyall()三个方法是定义在java.lang.Object类中
 *
 * 面试题：sleep()和wait()方法的异同？
 * 1.相同点：一旦执行此方法都可以当前的线程进入阻塞状态。
 * 2.不同点：
 * 1）两个方法申明的位置不同：Thread类中声明sleep(),wait()声明在Object类中
 * 2）调用的范围和要求不同：sleep(）可以在任何的需要的场景下使用。wait()必须使用在同步代码块或同步方法中
 * 3）关于是否释放同步监视器的问题，如果两个方法都是在同步代码块或者同步方法中，sleep()不会释放锁，wait()会释放锁
 *  @author shkstart
 * @create 2022-01-30 0:31
 */

class Number implements  Runnable {
    private int number = 1;

    @Override
    public void run() {
        while (true) {
            synchronized (this) {
                notifyAll();
                try {
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                if (number <= 100) {
                    System.out.println(Thread.currentThread().getName() + ":" + number);
                    number++;
                    try {
                        //使得调用wait()方法的线程进入阻塞状态
                        wait();
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                } else {
                    break;
                }
            }
        }
    }
}
public class CommnicationTest {
    public static void main(String[] args) {
        Number number = new Number();
        Thread t1 = new Thread(number);
        Thread t2 = new Thread(number);
        t1.setName("线程1");
        t2.setName("线程2");
        t1.start();
        t2.start();


    }
}
