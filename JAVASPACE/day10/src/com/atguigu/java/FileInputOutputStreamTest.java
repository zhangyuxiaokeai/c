package com.atguigu.java;

import org.junit.Test;

import java.io.*;

/**
 * \测试FileInputStream和FileOutputStream的使用
 *
 *
 * 结论：
 * 1.对于文本文件，（.txt ,.java ,.c,.cpp）使用字符流处理
 * 2.对于非文本文件，(.jp,.mp3,.mp4,.avi,.doc,.ppt)使用字节流处理
 * @author shkstart
 * @create 2022-02-18 22:55
 */

public class FileInputOutputStreamTest   {
    @Test
    public void testFileInputStream(){
        FileInputStream fis = null;
        try {
            //1.造文件
            File file =new File("hello.txt");
            //造流
            fis = new FileInputStream(file);
            //3.读数据
            byte[] buffer=new byte[5];
            int len;//记录每次读取的字节的个数
            while((len=fis.read(buffer))!=-1){
                String str = new String(buffer,0,len);
                System.out.print(str);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if(fis!=null){
                //4.关闭字节流
                try {
                    fis.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

    }
    /*
    实现对图片的复制操作
     */
    @Test
    public void testFileInputStream1(){
        File srcFile=new File("mmexport1644741742163.jpg");
        File destFile=new File("mmexport16447417421631.jpg");
        FileOutputStream fos= null;
        FileInputStream fis= null;

        try {
            //造流
            fos = new FileOutputStream(destFile);
            fis = new FileInputStream(srcFile);

            //3.数据的读入与写出操作
            byte[] buffer=new byte[5];
            int len;
            while((len=fis.read(buffer))!=-1){
                fos.write(buffer,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            //关闭流
            try {
                fis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }finally {
                try {
                    fos.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

        }

    }
        //指定路径下文件的复制
    public void copyFile(String srcPath,String destPath ){
        File srcFile=new File(srcPath);
        File destFile=new File(destPath);
        FileOutputStream fos= null;
        FileInputStream fis= null;

        try {
            //造流
            fos = new FileOutputStream(destFile);
            fis = new FileInputStream(srcFile);

            //3.数据的读入与写出操作
            byte[] buffer=new byte[1024];
            int len;
            while((len=fis.read(buffer))!=-1){
                fos.write(buffer,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            //关闭流
            try {
                fis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }finally {
                try {
                    fos.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }

        }
    }
@Test
    public void testCopyFile(){
        long start=System.currentTimeMillis();
        String srcPath="mmexport1644741742163.jpg";
        String destPath="mmexport16447417421635.jpg";
        copyFile(srcPath,destPath);
        long end=System.currentTimeMillis();
    System.out.println("复制操作花费的时间为"+(start-end));
}

}
