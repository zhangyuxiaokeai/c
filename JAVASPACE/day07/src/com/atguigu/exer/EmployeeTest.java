package com.atguigu.exer;

import org.junit.Test;

import java.util.Comparator;
import java.util.Iterator;
import java.util.TreeSet;

/**
 * @author shkstart
 * @create 2022-02-13 21:48
 */
public class EmployeeTest {
        @Test
    public void test(){
            //问题1使用自然排序
        TreeSet set = new TreeSet();
       set.add(new Employee("Tom",22,new MyDate(1987,9,12)));
        set.add(new Employee("jery",23,new MyDate(1998,9,12)));
        set.add(new Employee("Milk",24,new MyDate(1977,9,12)));
        set.add(new Employee("Huangzi",25,new MyDate(1999,9,12)));
        set.add(new Employee("zzz",22,new MyDate(2000,9,12)));
        set.add(new Employee("sss",22,new MyDate(2001,9,12)));
        Iterator iterator = set.iterator();
        while (iterator.hasNext()){
            System.out.println(iterator.next());
        }
    }
    //使用生日排序
@Test
    public void test1(){

    TreeSet set = new TreeSet(new Comparator() {
        @Override
        public int compare(Object o1, Object o2) {
           if(o1 instanceof Employee && o2 instanceof Employee){
               Employee e1=(Employee)o1;
               Employee e2=(Employee)o2;
               MyDate b1 = e1.getBirthday();
               MyDate b2 = e2.getBirthday();
               if(b1.getYear()- b2.getYear()>0){
                   return 1;
               }else if(b1.getYear()==b2.getYear()){
                   if (b1.getMonth()-b1.getMonth()>0){
                       return 1;
                   }else if(b1.getMonth()-b1.getMonth()==0){
                    if (b1.getDay()- b2.getDay()>0){
                        return 1;
                    }else if(b1.getMonth()-b1.getMonth()==0){
                        return e1.compareTo(e2);
                    }else {
                        return -1;
                    }
                   }else{
                       return -1;
                   }
               }else {
                   return -1;
               }
           }
           throw new RuntimeException("转入的数据不一致");
        }
    });
    set.add(new Employee("Tom",22,new MyDate(1987,9,12)));
    set.add(new Employee("jery",23,new MyDate(1998,9,12)));
    set.add(new Employee("Milk",24,new MyDate(1977,9,12)));
    set.add(new Employee("Huangzi",25,new MyDate(1999,9,12)));
    set.add(new Employee("zzz",22,new MyDate(2000,9,12)));
    set.add(new Employee("sss",22,new MyDate(2001,9,12)));
    Iterator iterator = set.iterator();
    while (iterator.hasNext()){
        System.out.println(iterator.next());
    }
        }

    }

