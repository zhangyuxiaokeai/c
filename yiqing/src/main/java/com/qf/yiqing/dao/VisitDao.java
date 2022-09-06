package com.qf.yiqing.dao;

import com.qf.yiqing.entity.Visit;
import org.apache.ibatis.annotations.Param;
import org.springframework.data.domain.Pageable;

import java.util.List;

/**
 * (Visit)表数据库访问层
 *
 * @author makejava
 * @since 2022-04-20 11:19:15
 */
public interface VisitDao {

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Visit queryById(Integer id);

    /**
     * 查询指定行数据
     *
     * @param visit    查询条件
     * @param pageable 分页对象
     * @return 对象列表
     */
    List<Visit> queryAllByLimit(Visit visit, @Param("pageable") Pageable pageable);

    /**
     * 统计总行数
     *
     * @param visit 查询条件
     * @return 总行数
     */
    long count(Visit visit);

    /**
     * 新增数据
     *
     * @param visit 实例对象
     * @return 影响行数
     */
    int insert(Visit visit);

    /**
     * 批量新增数据（MyBatis原生foreach方法）
     *
     * @param entities List<Visit> 实例对象列表
     * @return 影响行数
     */
    int insertBatch(@Param("entities") List<Visit> entities);

    /**
     * 批量新增或按主键更新数据（MyBatis原生foreach方法）
     *
     * @param entities List<Visit> 实例对象列表
     * @return 影响行数
     * @throws org.springframework.jdbc.BadSqlGrammarException 入参是空List的时候会抛SQL语句错误的异常，请自行校验入参
     */
    int insertOrUpdateBatch(@Param("entities") List<Visit> entities);

    /**
     * 修改数据
     *
     * @param visit 实例对象
     * @return 影响行数
     */
    int update(Visit visit);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 影响行数
     */
    int deleteById(Integer id);

    Visit queryByIp(String ip);

    Integer sumCount();
}