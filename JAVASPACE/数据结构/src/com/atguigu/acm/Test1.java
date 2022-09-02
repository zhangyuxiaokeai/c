package com.atguigu.acm;

import org.junit.Test;

import java.util.Calendar;

/**
 * @author shkstart
 * @create 2022-03-03 20:21
 */
public class Test1 {
    @Test
    public void test1() {
        String src = "java ,蓝桥杯，12313";
        String s = new String(src.replaceAll("zy", "java"));
        System.out.println(s);
    }

    //创建一个原始的二维数组 11*11
    //0：表示没有棋子，1表示黑子2表示白字
    @Test
    public void test2() {
        int chessArr1[][] = new int[11][11];
        chessArr1[1][2] = 1;
        chessArr1[2][4] = 2;
        //输出原始的二维数组
        for (int[] row : chessArr1) {
            for (int data : row) {
                System.out.printf("%d\t", data);
            }
            System.out.println();
        }
        //将二维数组转为稀疏数组
        //1.先遍历二维数组得到-非0的数据个数
        int sum = 0;
        for (int i = 0; i < chessArr1.length; i++) {
            for (int y = 0; y < chessArr1[i].length; y++) {
                if (chessArr1[i][y] != 0) {
                    sum = sum + 1;
                }
            }
        }
        System.out.println(sum);
        //2.创建对应的稀疏数组
        int sarseArr[][] = new int[sum + 1][3];
        //给稀疏数组复制
        sarseArr[0][0] = 11;
        sarseArr[0][1] = 11;
        sarseArr[0][3] = sum;

        //遍历二维数组，将非0的数据放到稀疏数组中
        int count = 0;//用于记录是第几个非零数据
        for (int i = 0; i < chessArr1.length; i++) {
            for (int y = 0; y < chessArr1[i].length; y++) {
                if (chessArr1[i][y] != 0) {
                    sarseArr[count][1] = chessArr1[i][y];
                }
            }
        }
    }
}