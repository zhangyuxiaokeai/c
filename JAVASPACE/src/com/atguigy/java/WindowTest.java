package com.atguigy.java;

/**
 * 例子：创建三个接口卖票，总票数为100张
 * 存在线程安全问题
 *
 * @author shkstart
 * @create 2022-01-26 21:07
 */
class Window extends  Thread{
    private static int ticket=100;
    @Override
    public void run() {
       while (true){
           if(ticket>0){
               System.out.println(Thread.currentThread().getName()+":卖票"+ticket);
            ticket--;
           }else{
               break;
           }
       }
    }
}
public class WindowTest {
    public static void main(String[] args) {
        Window t1=new Window();
        Window t2=new Window();
        Window t3=new Window();
        t1.setName("窗口1");
        t2.setName("窗口2");
        t3.setName("窗口3");
        t1.start();
        t2.start();
        t3.start();
    }
}
