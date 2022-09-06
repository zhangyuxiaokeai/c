package com.qf.yiqing.entity;

import org.springframework.data.mongodb.core.aggregation.ArrayOperators;

/**
 * @author shkstart
 * @create 2022-04-21 19:44
 */
public class xiaolv {
    private String name;
    private String value;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getValue() {
        return value;
    }

    public void setValue(String value) {
        this.value = value;
    }
}
