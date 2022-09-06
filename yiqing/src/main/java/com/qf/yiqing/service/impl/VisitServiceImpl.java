package com.qf.yiqing.service.impl;

import com.qf.yiqing.entity.Visit;
import com.qf.yiqing.dao.VisitDao;
import com.qf.yiqing.service.VisitService;
import org.springframework.stereotype.Service;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageImpl;
import org.springframework.data.domain.PageRequest;

import javax.annotation.Resource;

/**
 * (Visit)表服务实现类
 *
 * @author makejava
 * @since 2022-04-20 11:19:17
 */
@Service("visitService")
public class VisitServiceImpl implements VisitService {
    @Resource
    private VisitDao visitDao;

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    @Override
    public Visit queryById(Integer id) {
        return this.visitDao.queryById(id);
    }

    /**
     * 分页查询
     *
     * @param visit       筛选条件
     * @param pageRequest 分页对象
     * @return 查询结果
     */
//    @Override
//    public Page<Visit> queryByPage(Visit visit, PageRequest pageRequest) {
//        long total = this.visitDao.count(visit);
//        return new PageImpl<>(this.visitDao.queryAllByLimit(visit, pageRequest), pageRequest, total);
//    }

    /**
     * 新增数据
     *
     * @param visit 实例对象
     * @return 实例对象
     */
    @Override
    public Visit insert(Visit visit) {
        this.visitDao.insert(visit);
        return visit;
    }

    /**
     * 修改数据
     *
     * @param visit 实例对象
     * @return 实例对象
     */
    @Override
    public Visit update(Visit visit) {
        this.visitDao.update(visit);
        return this.queryById(visit.getId());
    }

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    @Override
    public boolean deleteById(Integer id) {
        return this.visitDao.deleteById(id) > 0;
    }

    @Override
    public Visit queryByIp(String ip) {
        Visit visit=visitDao.queryByIp(ip);
        return visit;
    }

    @Override
    public Integer getVisit() {
        return visitDao.sumCount();
    }
}