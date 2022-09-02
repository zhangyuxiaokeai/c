package com.atguigu.java;

/**
 * @author shkstart
 * @create 2022-01-28 19:51
 *
 *使用同步方法处理继承Thread类的方式中的线程安全问题
 *
 */
class Window4 extends  Thread {
    private static int ticket = 100;


    @Override
    public void run() {
        while (true) {
            show();
        }
    }

    private synchronized void show() {
        try {
            Thread.sleep(100);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        if (ticket > 0) {
            System.out.println(Thread.currentThread().getName() + ":卖票" + ticket);
            ticket--;
        }
    }
}

public  class WindowTest4 {
    public static void main(String[] args) {
        Window4 t1 = new Window4();
        Window4 t2 = new Window4();
        Window4 t3 = new Window4();
        t1.setName("窗口1");
        t2.setName("窗口2");
        t3.setName("窗口3");
        t1.start();
        t2.start();
        t3.start();
    }
}

