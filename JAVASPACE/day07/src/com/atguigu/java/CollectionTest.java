package com.atguigu.java;

import org.junit.Test;

import java.util.ArrayList;

/**
 * @author shkstart
 * @create 2022-02-12 23:01
 */
public class CollectionTest {
    @Test
    public void test1(){
        ArrayList coll = new ArrayList();
        coll.add(123);
        coll.add(456);
        coll.add(343);
        coll.add(343);
        coll.forEach(System.out::println);
    }

}
