package com.atguigu.java;

import org.junit.Test;

import java.io.*;

/**
 * 一流的分类：
 * 1.操作数据单位：字节流 ，字符流
 * 2.数据的流向：输入流，输出流
 * 3.流的角色：节点流，处理流
 *
 * 二，流的体系结构
 * 抽象基类                 节点流(或文件流)                                   缓冲流（处理流的一种）
 * InputStream          FiledInputStream  （read(byte[] buffered）            BufferedInputStream   （read(byte[] buffered）
 * OutputStream         FileOutputStream   (write(byte[] buffered,0,len）     BufferedOutputStream   (write(byte[] buffered,0,len）
 * Reader               FileReader （read(char[] cubf）                       BufferedRead            （read(char[] cubf /readLine()）
 * Writer               FileWrite   (write(char[] cubf,0,len）              BufferWriter                 (write(char[] cubf,0,len）
 *
 * @author shkstart
 * @create 2022-02-18 16:20
 */
public class FileReaderWriterTest {
    public static void main(String[] args) {
        File file = new File("hello.txt");//相较于当前工程
        System.out.println(file.getAbsolutePath());
        File file1 = new File("day10\\hello.txt");//相较于当前工程
        System.out.println(file1.getAbsolutePath());
    }

    /*
    将day10下的的hello.txt文件内容读入到程序中，并输入到控制台

    说明点：
    1.read()的理解：返回读入的一个字符。如果达到文件末尾，返回-1
    2.异常的处理：为了保证流资源一定可以执行关闭操作。需要再执行try-catch-finally处理
    3.读入的文件一定要存在，否则就会报FileNotFoundException
     */
    @Test
    public void testFileReader(){
        FileReader fr= null;
        try {
            //1.实例化File类的对象，指明要操作的文件
            File file = new File("hello.txt");//相较于当前Module
            System.out.println(file.getAbsolutePath());
            //2.提供具体的流
            fr = new FileReader(file);

            //3.数据的读入过程
            //read():返回读入的一个字符，如果达到文件末尾，返回-1
            //方式一
//        int data = fr.read();
//        while(data!=-1){
//            System.out.print((char)data);
//            data=fr.read();
//        }
            //方式二:语法上针对于方式一的修改
            int data;
            while((data= fr.read())!=-1){
                System.out.println((char)data);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            //4.流的关闭操作
            try {
                if(fr!=null)
                fr.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
    }
    //对read()操作升级：使用read()重载方法
    @Test
    public void test1(){
        FileReader fr= null;
        try {
            //1.File类 的实例化
            File file=new File("hello.txt");
            //2FileReader流的实例化
            fr = new FileReader(file);
            //3.读入的操作细节
            //read(char[]):返回每次读入cbuf数组中的字符个数。如果达到文件末尾，返回-1
            char[] cubf=new char[5];
            int len;
            while((len= fr.read(cubf))!=-1){
                //方式一：
                //错误的写法
//                for (int i=0;i<cubf.length;i++){
//                    System.out.print(cubf[i]);
//                }
                //正确写法
//                for(int i=0;i<len;i++){
//                    System.out.print(cubf[i]);
//                }
                //方式二：
                //错误写法，对应方式一的错误方法
//                String str=new String(cubf);
//                System.out.print(str);
                //正确写法
                String str=new String(cubf,0,len);
                System.out.print(str);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if (fr!=null) {
                try {
                    //4.资源的关闭
                    fr.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

    }
    /*
    从内存中写出数据到硬盘的文具里。
    说明：
    1.输出操作，对应的File可以是不存在的。并不会报异常
    2.
    File对应的硬盘中的文件如果不存在，在输出的过程中，会自动创建文件。
    File对应的硬盘中的文件如果存在：
            如果流使用的构造器：Fi了Writer(file,false)/FileWriter(file)对源文件覆盖
             如果流使用的构造器：Fi了Writer(file,true)就不会对源文件进行覆盖而是在文件末尾添加
     */
    @Test
    public void testFileWriter(){
        FileWriter fw= null;
        try {
            //1.提供File类的对象，指明写出到的文件
            File file=new File("hello1.txt");

            //2.提供FileWriter的的对象，用于数据的写出
            fw = new FileWriter(file,false);

            //3.写出的操作
            fw.write("i have  a  dream\n");
            fw.write("you need to have a dream!");
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            if (fw!=null)
                //4.流资源的关闭
            {
                try {
                    fw.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }


    }
    @Test
    public void testFileReaderWriter(){
        FileReader  fr= null;
        FileWriter fw= null;
        try {
            //1.创建File类的对象，指明读入和写出的文件
            File srcFile=new File("hello.txt");
            File destFile=new File("hello2.txt");

            //不能使用字符流来处理图片等字节数据
//            File srcFile=new File("mmexport1644741742163.jpg");
//            File destFile=new File("mmexport16447417421631.jpg");
            //2.创建输入流和输出流的对象
            fr = new FileReader(srcFile);
            fw = new FileWriter(destFile);
            //3数据的读入和写出操作
            char[] cubf=new char[5];
            int len;//记录每次读入到cubf数组中的字符个数
            while((len=fr.read(cubf))!=-1){
                //每次写出len个字符
                fw.write(cubf,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            //4关闭流资源
            try {
                if (fw!=null)
                fw.close();
            } catch (IOException e) {
                e.printStackTrace();
            }finally {
                try {
                    if (fr!=null)
                        fr.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

    }
}













