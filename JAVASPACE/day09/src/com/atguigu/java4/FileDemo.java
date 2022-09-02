package com.atguigu.java4;

import org.junit.Test;

import java.io.File;
import java.io.IOException;

/**
 * @author shkstart
 * @create 2022-02-17 1:04
 */
public class FileDemo {
    @Test
    public void test() throws IOException {
        File file=new File("D:\\JAVAIO流测试\\io1\\is\\li\\hello.txt");
        //创建一个file同目录下的另一个文件，文件名为：haha.txt
        File file1 = new File(file.getParent(),"haha.txt");
        boolean newFile = file1.createNewFile();
        if(newFile){
            System.out.println("创建成功");
        }
    }

}
