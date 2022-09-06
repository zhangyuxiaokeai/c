package com.qf.yiqing.service;

import com.qf.yiqing.entity.MapData;
import com.qf.yiqing.entity.Provinceofchina;
import com.qf.yiqing.entity.ResultData;
import com.qf.yiqing.entity.xiaolv;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;

import java.util.List;

/**
 * (Provinceofchina)表服务接口
 *
 * @author makejava
 * @since 2022-04-20 15:42:34
 */
public interface ProvinceofchinaService {

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    Provinceofchina queryById(Integer id);

    /**
     * 分页查询
     *
     * @param provinceofchina 筛选条件
     * @param pageRequest     分页对象
     * @return 查询结果
     */
    Page<Provinceofchina> queryByPage(Provinceofchina provinceofchina, PageRequest pageRequest);

    /**
     * 新增数据
     *
     * @param provinceofchina 实例对象
     * @return 实例对象
     */
    Provinceofchina insert(Provinceofchina provinceofchina);

    /**
     * 修改数据
     *
     * @param provinceofchina 实例对象
     * @return 实例对象
     */
    Provinceofchina update(Provinceofchina provinceofchina);

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    boolean deleteById(Integer id);
    //获取国内疫情数据
    ResultData getChinaData();

    List<MapData> getMapData();

    List<xiaolv> getXiaoLvs();

}
