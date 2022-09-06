package com.qf.yiqing.service;

import com.qf.yiqing.entity.Qfnum;
import com.qf.yiqing.entity.Qfnumber;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;

import java.util.ArrayList;
import java.util.List;

/**
 * (Qfnumber)表服务接口
 *
 * @author makejava
 * @since 2022-04-22 10:35:03
 */
public interface QfnumberService {

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Qfnumber queryById(Integer id);

    /**
     * 分页查询
     *
     * @param qfnumber    筛选条件
     * @param pageRequest 分页对象
     * @return 查询结果
     */
    Page<Qfnumber> queryByPage(Qfnumber qfnumber, PageRequest pageRequest);

    /**
     * 新增数据
     *
     * @param qfnumber 实例对象
     * @return 实例对象
     */
    Qfnumber insert(Qfnumber qfnumber);

    /**
     * 修改数据
     *
     * @param qfnumber 实例对象
     * @return 实例对象
     */
    Qfnumber update(Qfnumber qfnumber);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    boolean deleteById(Integer id);

    ArrayList<Qfnum> getNumbers();
}

