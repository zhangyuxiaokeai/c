package com.atguigu.acm;

import com.sun.deploy.security.ruleset.ExceptionRule;
import jdk.nashorn.internal.objects.Global;
import org.junit.Test;

import java.math.BigInteger;

import static jdk.nashorn.internal.objects.Global.undefined;

/**
 * @author shkstart
 * @create 2022-03-05 19:28
 */
public class dfs {
    @Test
    public void test() {
        int sum=0;
        int num=0;
        int[] arr= new int[101];
        arr[100]=77;
    for(int i=0;i<100;i++){
        arr[i]=i+1;
    }
    for(int i=0;i<=100;i++){
        sum=sum+i;
    }
        System.out.println(sum);
    for(int i=0;i<=100;i++){
        System.out.print(arr[i]+" ");
        num=arr[i]+num;
    }
        System.out.println(num);
    }
    @Test
    public void test3() {
        int num=0;
    int[] arr1=new int[]{1,1,2,2,3,3,5,5,4,7,4};
    for(int i=0;i< arr1.length;i++){
        num=arr1[i]^num;
    }
        System.out.println(num);
    }
    @Test
    public void test4(){
       int shuzi=189;
       int num=0;
        String s = Integer.toBinaryString(shuzi);
        System.out.println(s);
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='1'){
               num++;
            }
        }
    }
    @Test
    //判断一个数的二进制有多少1

    public void test5(){
        int shuzi=189;
        int mun=0;
        String s1 = Integer.toString(shuzi, 2);
        System.out.println(shuzi);
        System.out.println(s1);
        for(int i=0;i<s1.length();i++){
            if((shuzi & (1<<i))==(1<<i)){
                mun++;
            }
        }
        System.out.println(mun);
    }
    @Test
    //判断一个数的二进制位中有好多1
    public void test6(){
        int shuzi=189;
        int count=0;
        while(shuzi!=0){
            shuzi=shuzi&shuzi-1;
            count++;
        }
        System.out.println(count);
    }
        @Test
        //判断一个数是不是二的次方数
    public void test7(){
        int cifang=1024;
        if((cifang-1&cifang)==0){
            System.out.println("是2的次方数");
        }else{
            System.out.println("不是二的次方");
        }
        }

@Test
//将一个数字的二进制奇数位和偶数位调换位置
    public void test8(){
        int a=9;
        int ou=a&0xaaaaaaaa;//>>>>>>>>01010101010101....
        int ji=a&0x55555555;//>>>>>>>>1010101010101.....
       int c=(ou>>1)^(ji<<1);
    System.out.println(c);
}
@Test
//0到1之间的浮点数表示
    public void test9(){
    double num=0.625;
    StringBuilder builder = new StringBuilder("0.");
    while(num>0){
        double mum=num*2;
        if(mum>=1){
            builder.append("1");
            num=mum-1;
        }else {
            builder.append("0");
            num=mum;
        }
        if(builder.length()>34){
            System.out.println("ERROR");
            return;
    }
    }
    System.out.println(builder.toString());
}
@Test
    //出现K次与出现1次
    //数组中只有一个数出现了一次，其他的数都出现了K次，请输出只出现了一次的数
    public void test10(){
        //求出只出现了一次的数字（暴力求解）
        int[] arr1=new int[]{1,2,3,4,5,6,7,1,2,3,4,5,6,7,10};
        int num=0;
        for(int i=0;i<arr1.length;i++){
            for(int j=0;j<arr1.length;j++){
                if(arr1[i]==arr1[j]){
                  num++;
                }
                }
            if(num==1){
                System.out.println(arr1[i]);
                break;
            }
            num=0;
        }
//方法二
    System.out.println("*************************************");
 int len=arr1.length;
 char[][] kRadix=new char[len][];
 int k=3;
 int maxLen=0;
 for(int i=0;i<len;i++){
     kRadix[i]= new StringBuilder(Integer.toString(arr1[i],k)).reverse().toString().toCharArray();
     if(kRadix[i].length>maxLen)
         maxLen=kRadix[i].length;

 }
 int[] resArr=new int[maxLen];
 for(int i=0;i<len;i++){
     for (int j=0;j<maxLen;j++){
         if(j>=kRadix[i].length)
             resArr[j]+=0;
         else
             resArr[j]+=(kRadix[i][j])-'0';
     }
 }
 int res=0;
 for(int i=0;i<maxLen;i++){
     res+=(resArr[i]%k)*(int)(Math.pow(k,i));
 }
    System.out.println(res);
    }

    }
