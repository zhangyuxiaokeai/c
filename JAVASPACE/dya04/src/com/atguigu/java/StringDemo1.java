package com.atguigu.java;

import org.junit.Test;

/**
 * @author shkstart
 * @create 2022-02-08 2:02
 */
public class StringDemo1 {
    /*
    获取一个字符串在另一个字符串中出现的次数。
     */

    /**
     * 获取subStr在mainStr出现的次数
     * @param mainStr
     * @param subStr
     * @return
     */
    public int getCount(String mainStr,String subStr){
        int mainLength = mainStr.length();
        int sublength = subStr.length();
        int count=0;
        int index=0;
        if(sublength<=mainLength){
            //方式一
//           while ((index=mainStr.indexOf(subStr))!=-1){
//            count++;
//            mainStr=mainStr.substring(index+subStr.length());
//            }
            //方式二
            while ((index=mainStr.indexOf(subStr,index))!=-1){
                count++;
                index+=sublength;
            }
            return count;
        }else{
            return 0;
        }
    }
    @Test
    public void testGetCount(){
        String mainStr="abcdabcdabcdabcd";
        String subStr="ab";
        int count=getCount(mainStr,subStr);
        System.out.println(count);
    }
}
