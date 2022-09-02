package com.atguigu.java;

import org.junit.Test;

/**
 * @author shkstart
 * @create 2022-02-08 11:03
 */
public class StringDemo2 {
    /*
    获取两个字符串的最大相同字串，
     */
    //前提：两个字符串中只有一个最大相同字串
    public String subMaxString(String str1, String str2) {
    if(str1!=null &&str2!=null){
        String maxStr =(str1.length()>=str2.length())? str1:str2;
        String minStr=(str1.length()<str2.length())? str1:str2;
        int length=minStr.length();
        for(int i=0;i<length;i++){
            for(int x=0,y=length-i;y<=length;x++,y++) {
                String subStr = minStr.substring(x, y);
                if (maxStr.contains(subStr)) {
                    return subStr;
                }
            }
            }
        }
        return null;
    }
    @Test
    public void testGetMaxSameString(){
        String str1="abcwerthello1yuiodefabcdef";
        String str2="cvhello1bnm";
        String maxSameString=subMaxString(str1,str2);
        System.out.println(maxSameString);
    }

}