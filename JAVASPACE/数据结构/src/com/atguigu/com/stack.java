package com.atguigu.com;

import java.util.Scanner;

/**
 * @author shkstart
 * @create 2022-03-11 13:06
 * 1使用数组来模拟栈
 * 2定义一个top来表示栈，初始化为-1
 * 3入栈的操作，当有数据加入到栈时，top++;stack[top]=data;
 * 4出栈的操作，invalue=stack[top];top--,return valuel
 */
public class stack {
    public static void main(String[] args) {
        //测试一下ArrayStack是否正确
        //先创建一个ArrayStack对象--》表示栈
        ArrayStack stack = new ArrayStack(4);
        String key="";
        boolean loop=true;//控制是否推出菜单
        Scanner scanner = new Scanner(System.in);
        while(loop){
            System.out.println("show:表示显示栈");
            System.out.println("exit:退出程序");
            System.out.println("push:添加数据");
            System.out.println("pop:从栈取出数据");
            System.out.println("请输入你的选择");
            key= scanner.next();
            switch (key){
                case "show":
                    stack.list();
                    break;
                case "push":
                    System.out.println("请输入一个数");
                    int value= scanner.nextInt();
                    stack.push(value);
                    break;
                case "pop":
                    try {
                        int res= stack.pop();
                        System.out.printf("取出的数据%d",res);
                    }catch (Exception e){
                        System.out.println(e.getMessage());
                    }
                    break;
                case "exit":
                    scanner.close();
                    loop=false;
            }
        }
        System.out.println("程序推出");
    }
}

class ArrayStack{
    private int maxSize;//栈的大小
    private int[] stack;//数组，数组模拟栈，数据就放在该数组
    private int top=-1; //top表示栈顶，初始化为-1

    public ArrayStack(int maxSize){
        this.maxSize=maxSize;
        stack=new int[this.maxSize];
    }

    //栈满
    public boolean isFull(){
        return top==maxSize-1;
    }
    //栈空
    public boolean isEmpty(){
        return top==-1;
    }
    //入栈
    public void push(int value){
        //判断栈是否已满
        if(isFull()){
            System.out.println("栈满");
            return;
        }
        top++;
        stack[top]=value;
    }
    //出栈;将栈顶的数据返回
    public int pop(){
        //先判断栈是否空
        if(isEmpty()){
            //抛出异常
            throw new RuntimeException("栈空，没有数");
        }
        int value=stack[top];
        top--;
        return value;
    }
    //显示栈的情况【遍历栈】,遍历时，需要从栈顶开始显示数据
    public void list(){
        if(isEmpty()){
            System.out.println("栈空，没有数据");
        return;
        }
        for(int i=top;i>=0;i--){
            System.out.printf("stack[%d]=%d\n",i,stack[i]);
        }
    }
}
