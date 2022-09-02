package com.atguigu.java;

import org.junit.Test;

import java.io.*;

/**
 * 处理流之一：缓冲流的使用
 *
 * 1.缓冲流：
 *  BufferedInputStream
 *  BufferedOutputStream
 * BufferedRead
 * BufferWriter
 *
 * 2.作用：提供流的读取，写入的速度
 *  提高读写速度的原因：内部提供了一个缓冲区
 * @author shkstart
 * @create 2022-02-19 22:17
 *
 * 3.处理流，就是“套接”在已有的流的基础上
 */
public class BufferedTest {
    /*
    实现非文本文件的复制
     */
    @Test
    public void BufferedStreamTest(){
        BufferedInputStream bis= null;
        BufferedOutputStream bos= null;
        try {
            //1.造文件
            File src=new File("mmexport1644741742163.jpg");
            File dest=new File("mmexport16447417421631.jpg");
            //2.造流
            //2.1造节点流
            FileInputStream fis=new FileInputStream((src));
            FileOutputStream fos=new FileOutputStream(dest);
            //2.2造缓冲流
            bis = new BufferedInputStream(fis);
            bos = new BufferedOutputStream(fos);

            //3.复制的细节：读取，写入
            byte[] buffer=new byte[10];
            int len;
            while((len=bis.read(buffer))!=-1){
                bos.write(buffer,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            //4.资源关闭：
            //要求1：先关闭外层的流，再关闭内层的流
            try {
                if(bos!=null)
                bos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            try {
                if(bos!=null)
                bis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            //说明：再关闭外层流的同时，内层流也会自动的进行关闭。关于内层流的关闭 ，我们可以省略
//        fos.close();
//        fis.close();
        }




    }
    //实现文件复制的方法
    public void copyFileWithBufferd(String srcPath,String destPath){
            BufferedInputStream bis= null;
            BufferedOutputStream bos= null;
            try {
                //1.造文件
                File src=new File(srcPath);
                File dest=new File(destPath);
                //2.造流
                //2.1造节点流
                FileInputStream fis=new FileInputStream((src));
                FileOutputStream fos=new FileOutputStream(dest);
                //2.2造缓冲流
                bis = new BufferedInputStream(fis);
                bos = new BufferedOutputStream(fos);

                //3.复制的细节：读取，写入
                byte[] buffer=new byte[1024];
                int len;
                while((len=bis.read(buffer))!=-1){
                    bos.write(buffer,0,len);
                }
            } catch (IOException e) {
                e.printStackTrace();
            } finally {
                //4.资源关闭：
                //要求1：先关闭外层的流，再关闭内层的流
                try {
                    if(bos!=null)
                        bos.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                try {
                    if(bos!=null)
                        bis.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
                //说明：再关闭外层流的同时，内层流也会自动的进行关闭。关于内层流的关闭 ，我们可以省略
//        fos.close();
//        fis.close();
            }


        }
        @Test
    public void testCopyFileWithBufferd(){
            long start=System.currentTimeMillis();
            String srcPath="mmexport1644741742163.jpg";
            String destPath="mmexport16447417421635.jpg";
            copyFileWithBufferd(srcPath,destPath);
            long end=System.currentTimeMillis();
            System.out.println("复制操作花费的时间为"+(end-start));
        }
        /*
        使用BufferedReader和BufferedWriter实现文本文件的复制
         */
@Test
    public void testBufferedReaderBufferWriter() {
        //
    BufferedReader br= null;
    BufferedWriter bw= null;
    try {
        br = new BufferedReader(new FileReader(new File("hello.txt")));
        bw = new BufferedWriter(new FileWriter(new File("hello9.txt")));

        //读写操作
        //方式一
//        char[] cubf=new char[1024];
//        int len;
//        while ((len=br.read(cubf))!=-1){
//            bw.write(cubf,0,len);
//            bw.flush();
//        }
        String data;
        while ((data=  br.readLine())!=null){
            //方式一
//            bw.write(data);//data不包括换行符
            //方法二
            bw.write(data);
            bw.newLine();//提供换行的操作
        }

    } catch (IOException e) {
        e.printStackTrace();
    } finally {
        try {
            if (br!=null)
            br.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        try {
            if(bw!=null)
            bw.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
    System.out.println();
}
}
