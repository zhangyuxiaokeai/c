package com.qf.yiqing.service.impl;

import com.qf.yiqing.entity.Qfnum;
import com.qf.yiqing.entity.Qfnumber;
import com.qf.yiqing.dao.QfnumberDao;
import com.qf.yiqing.service.QfnumberService;
import org.springframework.stereotype.Service;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageImpl;
import org.springframework.data.domain.PageRequest;

import javax.annotation.Resource;
import java.util.ArrayList;
import java.util.List;

/**
 * (Qfnumber)表服务实现类
 *
 * @author makejava
 * @since 2022-04-22 10:35:03
 */
@Service("qfnumberService")
public class QfnumberServiceImpl implements QfnumberService {
    @Resource
    private QfnumberDao qfnumberDao;

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    @Override
    public Qfnumber queryById(Integer id) {
        return this.qfnumberDao.queryById(id);
    }

    /**
     * 分页查询
     *
     * @param qfnumber    筛选条件
     * @param pageRequest 分页对象
     * @return 查询结果
     */
    @Override
    public Page<Qfnumber> queryByPage(Qfnumber qfnumber, PageRequest pageRequest) {
        long total = this.qfnumberDao.count(qfnumber);
        return new PageImpl<>(this.qfnumberDao.queryAllByLimit(qfnumber, pageRequest), pageRequest, total);
    }

    /**
     * 新增数据
     *
     * @param qfnumber 实例对象
     * @return 实例对象
     */
    @Override
    public Qfnumber insert(Qfnumber qfnumber) {
        this.qfnumberDao.insert(qfnumber);
        return qfnumber;
    }

    /**
     * 修改数据
     *
     * @param qfnumber 实例对象
     * @return 实例对象
     */
    @Override
    public Qfnumber update(Qfnumber qfnumber) {
        this.qfnumberDao.update(qfnumber);
        return this.queryById(qfnumber.getId());
    }

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    @Override
    public boolean deleteById(Integer id) {
        return this.qfnumberDao.deleteById(id) > 0;
    }

    @Override
    public ArrayList<Qfnum> getNumbers( ) {
    return qfnumberDao.queryByAll();
    }
}
