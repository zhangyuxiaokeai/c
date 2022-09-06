package com.qf.yiqing.service;

import com.qf.yiqing.entity.Visit;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;

/**
 * (Visit)表服务接口
 *
 * @author makejava
 * @since 2022-04-20 14:34:08
 */
public interface VisitService {
    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Visit queryById(Integer id);

    /**
     * 新增数据
     *
     * @param visit 实例对象
     * @return 实例对象
     */
     Visit insert(Visit visit);

    /**
     * 修改数据
     *
     * @param visit 实例对象
     * @return 实例对象
     */
    Visit update(Visit visit);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    boolean deleteById(Integer id);

    Visit queryByIp(String ip);

    /**
     * 统计浏览次数
     * @param
     * @return
     */


    Integer getVisit();
}
