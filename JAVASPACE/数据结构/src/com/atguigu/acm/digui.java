package com.atguigu.acm;

/**
 * @author shkstart
 * @create 2022-03-06 20:34
 *递归
 *
 */

import org.junit.Test;

import java.util.Arrays;


//斐波那契数列
public class digui {
    public long digui(long x){
        if(x==1||x==2){
            return x;
        }else{
           return digui(x-1)+digui(x-2);
        }
    }
    //翻转字符串
    public String reverse(String src,int end){
        if(end==0){
            return ""+src.charAt(0);
        }
        return src.charAt(end)+reverse(src,end-1);
    }
//递归实现辗转相除法
    public int zhanzhuan(int a, int b){
        if(b==0)
            return a;
        if(a<0)
            return zhanzhuan(-a,b);
        if(b<0)
            return zhanzhuan(a,-b);
        return zhanzhuan(b,a%b);
    }

    //递归形式进行插入排序
    public void insertSort(int arr[],int k){
        if(k==0){
            return;
        }
        //对前k-1个元素排序
        insertSort(arr,k-1);
        //把位置k的元素插入到前面的部分
        int x=arr[k];
        int index=k-1;
        while (index>-1&&x<arr[index]){
            arr[index+1]=arr[index];
        index--;
        }
        arr[index+1]=x;
    }


    @Test
    public void test1() {
    //翻转字符串
        String reverse = reverse(new String("12345"), 4);
        System.out.println(reverse);
        System.out.println(digui(20));
        System.out.println(zhanzhuan(12,-10));
       int[]arr= new int[]{4,3,2,6,5};
       insertSort(arr,4);
        for (int x=0;x<arr.length;x++){
            System.out.println(arr[x]);
        }
    }
    //汉诺塔问题
    public long hannuota(int n,String from,String to,String help) {
         long sum=0;
        if (n == 1) {
            System.out.println("move " + n + "from " + from + "to " + to);
        } else {
            hannuota(n - 1, from, help, to);//将n-1个盘子移动到辅助盘
            System.out.println("move " + n + "from " + from + "to " + to);//将最后一个盘移动到目标盘上
            hannuota(n - 1, help, to, from);//让在辅助盘上的n-1个盘回到第一个盘
        }
        return sum;
    }
@Test
    public void test2(){
    long hannuota = hannuota(10, "A", "B", "C");

}
//插入排序
    public void xier(int[] arr){
       for(int i=0;i< arr.length;i++){
       }


    }
    @Test
    public void test3(){
        int[] arr=new int[]{8,7,6,5,4,3,2,1,0,10};
    }
}
