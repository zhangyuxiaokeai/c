package com.atguigu.java;

/**
 *
 * @author shkstart
 * @create 2022-01-28 18:42
 *
 * 例子：创建三个窗口卖票，总票数为一百张，使用Thread类的方式
 *
 * 使用同步代码块解决继承Thread类的方式的线程安全问题
 *
 *说明：在继承Thread类创建多线程的方式中，慎用this来充当同步监视器，考虑使用当前类充当同步监视器
 */
class Window2 extends  Thread {
    private static int ticket = 100;
    private static Object obj = new Object();

    @Override
    public void run() {
        while (true) {
           synchronized (Window2.class){// synchronized (obj) {//此处无法用this因为这里有三个对象
                try {
                    Thread.sleep(100);
                } catch (InterruptedException e) {
                    e.printStackTrace();
                }
                if (ticket > 0) {
                    System.out.println(Thread.currentThread().getName() + ":卖票" + ticket);
                    ticket--;
                } else {
                    break;
                }
            }
        }
    }
}

    public  class WindowTest2 {
        public static void main(String[] args) {
            Window2 t1 = new Window2();
            Window2 t2 = new Window2();
            Window2 t3 = new Window2();
            t1.setName("窗口1");
            t2.setName("窗口2");
            t3.setName("窗口3");
            t1.start();
            t2.start();
            t3.start();
        }
    }
