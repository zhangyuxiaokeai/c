package com.atguigu.lanqiao;

import org.junit.Test;

import java.math.BigDecimal;
import java.util.Scanner;

/**
 * @author shkstart
 * @create 2022-03-10 15:01
 */
public class shuzi {
    @Test
    public void test1() {
        Scanner scanner = new Scanner(System.in);
        String str = scanner.nextLine();
        if (str.length() < 255) {
            for (int i = 0; i < str.length(); i++) {
                if (str.charAt(i) < 48 && str.charAt(i) < 57) {
                    System.out.println(str.charAt(i));
                }
            }
        }

    }

    @Test
    public void test2() {
        Scanner scanner = new Scanner(System.in);
        String s1 = new String();
        String s2 = new String();
        s1 = scanner.nextLine();
        s2 = scanner.nextLine();
        int sum = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1.charAt(i) == s1.charAt(i)) {
                sum++;
            }
        }
        double i = s1.length() / sum;
        if (i >= 0.85) {
            System.out.println("yes");
        }
    }

    @Test
    public void test3() {
        Scanner s1 = new Scanner(System.in);
        Scanner s2 = new Scanner(System.in);
        String player1 = s1.nextLine();
        String player2 = s2.nextLine();

    }

    @Test
    public void test24() {
        Scanner sc=new Scanner(System.in);
        BigDecimal a=sc.nextBigDecimal();
        BigDecimal b=sc.nextBigDecimal();
        BigDecimal c=a.multiply(b);
    }
}
