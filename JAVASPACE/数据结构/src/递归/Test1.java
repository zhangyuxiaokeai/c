package 递归;

import org.junit.Test;

import java.util.Scanner;

/**
 * @author shkstart
 * @create 2022-03-13 0:43
 */
public class Test1 {
    public static void test2(int n){
        if(n>2){
            test2(n-1);
        }
        System.out.println("n="+n);
    }
    public static int test3(int x){
        if(x==1){
            return 1;
        }
        if(x==2){
            return 2;
        }
    return test3(x - 2) + test3(x - 1);
    }
    public static void main(String[] args) {
        int i = test3(10);
        System.out.println(i);
    }
}
