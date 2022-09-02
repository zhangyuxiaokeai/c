package com.atguigu.com;

/**
 * @author shkstart
 * @create 2022-03-08 23:14
 */
public class CircleArrayQueueDemo {
    public static void main(String[] args) {

    }
    class CircleArrayQueue{
        private int maxSize;//表示数组最大容量
        private int front;//队列头
        private int rear;//队列尾
        private int[] arr;//该数组用于存放数据，模拟队列

        //创建队列的一个构造器
        public CircleArrayQueue(int arrMaxSize){
            this.maxSize=arrMaxSize;
            arr=new int[maxSize];

        }
        //判断队列是否满
        public boolean isFull(){
            return (rear+1)%maxSize-1==front;
        }
        //判断队列是否为空
        public boolean isEmpty(){
            return front==rear;
        }
        //添加数据到队列
        public void addQueue(int n){
            //判断队列是否满
            if(isFull()){
                System.out.println("队列已满，无法添加数据");
                return;
            }
          //直接将数据加入
            arr[rear]=n;
            //将rear后移，这里必须考虑取模
            rear=(rear+1)%maxSize;
        }
        //获取队列的数据，出队列
        public Object getQueue(){
            //判断队列是否空
            if(isFull()){
                //通过抛异常来处理
                return new RuntimeException("队列空，不能取数据");
            }
           //这里需要分析出front是指向队列的第一个元素
            //1，先把front对应的值保留到一个临时变量
            //2.将front后移,后裔考虑取模
            //3.将临时保存的变量返回
            int value=arr[front];
            front=(front+1)%maxSize;
            return value;
        }

        //显示队列的所有数据
        public void showQueue(){
            if(isFull()){
                System.out.println("队列为空，没有数据");
                return;
            }
            //思路，从front开始遍历，遍历多少个元素
            for(int i=front;i< front+size();i++){
                System.out.printf("arr[%d]=%d\n",i%maxSize,arr[i%maxSize]);
            }
        }
        //求出当前队列有效数据的个数
        public int size(){
            return (rear +maxSize-front)%maxSize;
        }
        //显示队列的头数据，注意不是取出数据
        public  Object  headQueue(){
            //判断
            if(isFull()){
                return new RuntimeException("队列为空，没有数据");
            }
            return arr[front];
        }
    }
}
