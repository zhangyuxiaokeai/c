package com.qf.yiqing.entity;

import java.io.Serializable;

/**
 * (Qfnumber)实体类
 *
 * @author makejava
 * @since 2022-04-22 10:35:03
 */
public class Qfnumber implements Serializable {
    private static final long serialVersionUID = -36326551812931110L;

    private Integer id;

    private String province;

    private String numbers;

    private String types;


    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getProvince() {
        return province;
    }

    public void setProvince(String province) {
        this.province = province;
    }

    public String getNumbers() {
        return numbers;
    }

    public void setNumbers(String numbers) {
        this.numbers = numbers;
    }

    public String getTypes() {
        return types;
    }

    public void setTypes(String types) {
        this.types = types;
    }

}

