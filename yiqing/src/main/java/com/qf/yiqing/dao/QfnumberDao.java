package com.qf.yiqing.dao;

import com.qf.yiqing.entity.Qfnum;
import com.qf.yiqing.entity.Qfnumber;
import org.apache.ibatis.annotations.Param;
import org.springframework.data.domain.Pageable;

import java.util.ArrayList;
import java.util.List;

/**
 * (Qfnumber)表数据库访问层
 *
 * @author makejava
 * @since 2022-04-22 10:35:02
 */
public interface QfnumberDao {

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Qfnumber queryById(Integer id);

    /**
     * 查询指定行数据
     *
     * @param qfnumber 查询条件
     * @param pageable 分页对象
     * @return 对象列表
     */
    List<Qfnumber> queryAllByLimit(Qfnumber qfnumber, @Param("pageable") Pageable pageable);

    /**
     * 统计总行数
     *
     * @param qfnumber 查询条件
     * @return 总行数
     */
    long count(Qfnumber qfnumber);

    /**
     * 新增数据
     *
     * @param qfnumber 实例对象
     * @return 影响行数
     */
    int insert(Qfnumber qfnumber);

    /**
     * 批量新增数据（MyBatis原生foreach方法）
     *
     * @param entities List<Qfnumber> 实例对象列表
     * @return 影响行数
     */
    int insertBatch(@Param("entities") List<Qfnumber> entities);

    /**
     * 批量新增或按主键更新数据（MyBatis原生foreach方法）
     *
     * @param entities List<Qfnumber> 实例对象列表
     * @return 影响行数
     * @throws org.springframework.jdbc.BadSqlGrammarException 入参是空List的时候会抛SQL语句错误的异常，请自行校验入参
     */
    int insertOrUpdateBatch(@Param("entities") List<Qfnumber> entities);

    /**
     * 修改数据
     *
     * @param qfnumber 实例对象
     * @return 影响行数
     */
    int update(Qfnumber qfnumber);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 影响行数
     */
    int deleteById(Integer id);

    ArrayList<Qfnum> queryByAll();
}

