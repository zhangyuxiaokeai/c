package com.qf.yiqing.dao;

import com.qf.yiqing.entity.MapData;
import com.qf.yiqing.entity.Provinceofchina;
import com.qf.yiqing.entity.xiaolv;
import org.apache.ibatis.annotations.Param;
import org.springframework.data.domain.Pageable;

import java.util.List;

/**
 * (Provinceofchina)表数据库访问层
 *
 * @author makejava
 * @since 2022-04-20 15:42:34
 */
public interface ProvinceofchinaDao {

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Provinceofchina queryById(Integer id);

    /**
     * 查询指定行数据
     *
     * @param provinceofchina 查询条件
     * @param pageable        分页对象
     * @return 对象列表
     */
    List<Provinceofchina> queryAllByLimit(Provinceofchina provinceofchina, @Param("pageable") Pageable pageable);

    /**
     * 统计总行数
     *
     * @param provinceofchina 查询条件
     * @return 总行数
     */
    long count(Provinceofchina provinceofchina);

    /**
     * 新增数据
     *
     * @param provinceofchina 实例对象
     * @return 影响行数
     */
    int insert(Provinceofchina provinceofchina);

    /**
     * 批量新增数据（MyBatis原生foreach方法）
     *
     * @param entities List<Provinceofchina> 实例对象列表
     * @return 影响行数
     */
    int insertBatch(@Param("entities") List<Provinceofchina> entities);

    /**
     * 批量新增或按主键更新数据（MyBatis原生foreach方法）
     *
     * @param entities List<Provinceofchina> 实例对象列表
     * @return 影响行数
     * @throws org.springframework.jdbc.BadSqlGrammarException 入参是空List的时候会抛SQL语句错误的异常，请自行校验入参
     */
    int insertOrUpdateBatch(@Param("entities") List<Provinceofchina> entities);

    /**
     * 修改数据
     *
     * @param provinceofchina 实例对象
     * @return 影响行数
     */
    int update(Provinceofchina provinceofchina);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 影响行数
     */
    int deleteById(Integer id);

    List<Provinceofchina> queryAll();

    List<MapData> queryNameAndNow();

    List<xiaolv> queryXiaolv();
}

