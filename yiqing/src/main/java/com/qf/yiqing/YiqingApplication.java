package com.qf.yiqing;

import com.qf.yiqing.entity.Patient;
import org.mybatis.spring.annotation.MapperScan;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication
@MapperScan("com.qf.yiqing.dao")
public class YiqingApplication {

    public static void main(String[] args) {
        SpringApplication.run(YiqingApplication.class, args);
    }
}
