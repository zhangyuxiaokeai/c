package com.qf.yiqing.entity;

import java.io.Serializable;

/**
 * @author shkstart
 * @create 2022-04-18 16:47
 */
public class SysUser implements Serializable {
    private String name;
    private  String sex;
    private Integer age;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSex() {
        return sex;
    }

    public void setSex(String sex) {
        this.sex = sex;
    }

    public Integer getAge() {
        return age;
    }

    public void setAge(Integer age) {
        this.age = age;
    }
}
