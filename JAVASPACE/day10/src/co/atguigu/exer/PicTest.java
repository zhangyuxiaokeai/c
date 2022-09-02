package co.atguigu.exer;

import org.junit.Test;

import java.io.*;

/**
 * @author shkstart
 * @create 2022-02-19 23:44
 */
public class PicTest {
    //图片加密
    @Test
    public void test1(){
        FileInputStream fis= null;
        FileOutputStream fos= null;
        try {
            fis = new FileInputStream(new File("mmexport1644741742163.jpg"));
            fos = new FileOutputStream(new File("mmexport1w644741742163srect.jpg"));
            byte[] buffer=new byte[20];
            int len ;
            while ((len=fis.read(buffer))!=-1){
                //字节数据进行修改
//                for (byte b:buffer) {
//                    b = (byte) (b ^ 5);
//                }
                //正确的
                for(int i=0;i<len;i++){
                    buffer[i]=(byte)(buffer[i]^5);
                }
                fos.write(buffer,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                if (fis!=null)
                fis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            try {
                if(fos!=null)
                fos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
    //图片的解密
    @Test
    public void test2(){
        FileInputStream fis= null;
        FileOutputStream fos= null;
        try {
            fis = new FileInputStream(new File("mmexport1w644741742163srect.jpg"));
            fos = new FileOutputStream(new File("sdsd.jpg"));
            byte[] buffer=new byte[20];
            int len ;
            while ((len=fis.read(buffer))!=-1){
                //字节数据进行修改
//                for (byte b:buffer) {
//                    b = (byte) (b ^ 5);
//                }
                //正确的
                for(int i=0;i<len;i++){
                    buffer[i]=(byte)(buffer[i]^5);
                }
                fos.write(buffer,0,len);
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            try {
                if (fis!=null)
                    fis.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
            try {
                if(fos!=null)
                    fos.close();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }

    }
}
