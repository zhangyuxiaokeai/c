package com.atguigu.com;

import org.junit.Test;

/**
 * @author shkstart
 * @create 2022-03-08 18:02
 * 稀疏数组的代码实现
 */
public class SparseArray {
    @Test
    public void test1(){
        //创建一个原始的二维数组11*11
        //0；表示没有妻子，1表示黑子2表示篮子
        int chessArr1[][]=new int[11][11];
        chessArr1[1][2]=1;
        chessArr1[2][3]=2;
        for(int[] row:chessArr1){
            for (int data:row){
                System.out.printf("%d\t",data);
            }
            System.out.println();
        }
    //将二维数组转稀疏数组
        //1.先遍历二维数组得到非0的数据个数
        int sum=0;
        for(int i=0;i<11;i++){
            for(int j=0;j<11;j++){
                if(chessArr1[i][j]!=0){
                    sum++;
                }
            }
        }
        //2.创建对应的稀疏数组
        int spaarseArr[][]=new int[sum+1][3];
        //给稀疏数组赋值
        spaarseArr[0][0]=11;
        spaarseArr[0][1]=11;
        spaarseArr[0][2]=sum;

        //遍历二维数组，将非0的值放到sparseArr中
        int count=0;//count用于记录是第几个非0数据
        for(int i=0;i<11;i++){
            for(int j=0;j<11;j++){
                if(chessArr1[i][j]!=0){
                    count++;
                   spaarseArr[count][0]=i;
                   spaarseArr[count][1]=j;
                   spaarseArr[count][2]=chessArr1[i][j];
                }
            }
        }

    //输出稀疏数组
        System.out.println();
        System.out.println("得到的稀疏数组为：");
        for (int i=0;i<spaarseArr.length;i++){
            System.out.printf("%d\t%d\t%d\t\n",spaarseArr[i][0],spaarseArr[i][1],spaarseArr[i][2]);

        }
        System.out.println();
        //将稀疏数组恢复成原始的二维数组
        /*
        1，先读取稀疏数组的第一行，根据一行的数据，创建原始的二维数组，比如上面的chessArr2=int
        2.读取稀疏数组最后几行的数据，并赋值给原始的二维数组即可。
         */
        int row=spaarseArr[0][0];
        int col=spaarseArr[0][1];
        int[][] arr1=new int[row][col];
        for(int i=1;i<3;i++){
          arr1[spaarseArr[i][0]][spaarseArr[i][1]] =spaarseArr[i][2];
        }
        for(int i=0;i<11;i++){
            for(int j=0;j<11;j++){
                System.out.printf("%d\t",arr1[i][j]);
            }
            System.out.println();
        }

    }

}
