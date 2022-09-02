package com.atguigu.com;

/**
 * @author shkstart
 * @create 2022-03-12 16:08
 */
public class Caiculayor {
    public void main(String[] args) {
        //根据前面的思路完成代码
        String expression = "3+2*6-2";
        //创建两个站，数栈和符号栈
        ArrayStack2 numStack =  new ArrayStack2(10);
        ArrayStack2 operStack = new ArrayStack2(10);
        //定义需要的相关变量
        int index = 0;//用于扫描
        int num1 = 0;
        int num2 = 0;
        int oper = 0;
        int res = 0;
        char ch = ' ';//将每次扫描得到的char保存到ch
        //开始whilex循环的扫描expresssion
        while (true) {
            //依次得到expression的每一个字符
            ch = expression.substring(index, index + 1).charAt(0);
            //判断ch是什么，在做相关的处理
            if (operStack.isOper(ch)) {

            }
        }
    }

    //先创建一个栈，直接使用前面创建好的
//定义一个栈ArrayStack2表示栈
    class ArrayStack2 {
        private int maxSize;//栈的大小
        private int[] stack;//数组，数组模拟栈，数据就放在该数组
        private int top = -1; //top表示栈顶，初始化为-1

        public ArrayStack2(int maxSize) {
            this.maxSize = maxSize;
            stack = new int[this.maxSize];
        }

        //栈满
        public boolean isFull() {
            return top == maxSize - 1;
        }

        //栈空
        public boolean isEmpty() {
            return top == -1;
        }

        //入栈
        public void push(int value) {
            //判断栈是否已满
            if (isFull()) {
                System.out.println("栈满");
                return;
            }
            top++;
            stack[top] = value;
        }

        //出栈;将栈顶的数据返回
        public int pop() {
            //先判断栈是否空
            if (isEmpty()) {
                //抛出异常
                throw new RuntimeException("栈空，没有数");
            }
            int value = stack[top];
            top--;
            return value;
        }

        //显示栈的情况【遍历栈】,遍历时，需要从栈顶开始显示数据
        public void list() {
            if (isEmpty()) {
                System.out.println("栈空，没有数据");
                return;
            }
            for (int i = top; i >= 0; i--) {
                System.out.printf("stack[%d]=%d\n", i, stack[i]);
            }
        }

        //返回运算付的优先级，优先级是程序员的来确定的，优先级使用数字来表示
        //数字越大，则优先级越高
        public int priority(int oper) {
            if (oper == '*' || oper == '/') {
                return 1;
            } else if (oper == '+' || oper == '-') {
                return 0;
            } else {
                return -1;//假定目前的表达式只有加减惩处
            }
        }

        //判断是不是一个运算符号
        public boolean isOper(char val) {
            return val == '+' || val == '-' || val == '*' || val == '/';
        }

        //计算方法
        public int cal(int num1, int num2, int oper) {
            int res = 0;
            switch (oper) {
                case '+':
                    res = num1 + num2;
                    break;
                case '-':
                    res = num2 - num1;//注意顺序
                    break;
                case '*':
                    res = num1 * num2;
                    break;
                case '/':
                    res = num2 / num1;
                    break;
            }
            return res;
        }
    }
}