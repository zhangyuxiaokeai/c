package com.qf.yiqing.service.impl;

import com.qf.yiqing.entity.MapData;
import com.qf.yiqing.entity.Provinceofchina;
import com.qf.yiqing.dao.ProvinceofchinaDao;
import com.qf.yiqing.entity.ResultData;
import com.qf.yiqing.entity.xiaolv;
import com.qf.yiqing.service.ProvinceofchinaService;
import org.springframework.stereotype.Service;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageImpl;
import org.springframework.data.domain.PageRequest;

import javax.annotation.Resource;
import java.util.List;

/**
 * (Provinceofchina)表服务实现类
 *
 * @author makejava
 * @since 2022-04-20 15:42:34
 */
@Service("provinceofchinaService")
public class ProvinceofchinaServiceImpl implements ProvinceofchinaService {
    @Resource
    private ProvinceofchinaDao provinceofchinaDao;

    /**
     * 通过ID查询单条数据
     *
     * @param id 主键
     * @return 实例对象
     */
    @Override
    public Provinceofchina queryById(Integer id) {
        return this.provinceofchinaDao.queryById(id);
    }

    /**
     * 分页查询
     *
     * @param provinceofchina 筛选条件
     * @param pageRequest     分页对象
     * @return 查询结果
     */
    @Override
    public Page<Provinceofchina> queryByPage(Provinceofchina provinceofchina, PageRequest pageRequest) {
        long total = this.provinceofchinaDao.count(provinceofchina);
        return new PageImpl<>(this.provinceofchinaDao.queryAllByLimit(provinceofchina, pageRequest), pageRequest, total);
    }

    /**
     * 新增数据
     *
     * @param provinceofchina 实例对象
     * @return 实例对象
     */
    @Override
    public Provinceofchina insert(Provinceofchina provinceofchina) {
        this.provinceofchinaDao.insert(provinceofchina);
        return provinceofchina;
    }

    /**
     * 修改数据
     *
     * @param provinceofchina 实例对象
     * @return 实例对象
     */
    @Override
    public Provinceofchina update(Provinceofchina provinceofchina) {
        this.provinceofchinaDao.update(provinceofchina);
        return this.queryById(provinceofchina.getId());
    }

    /**
     * 通过主键删除数据
     *
     * @param id 主键
     * @return 是否成功
     */
    @Override
    public boolean deleteById(Integer id) {
        return this.provinceofchinaDao.deleteById(id) > 0;
    }

    @Override
    public ResultData getChinaData() {
        ResultData resultData = new ResultData();
        //Provinceofchina poc = new Provinceofchina();
        List<Provinceofchina> pocs_list= provinceofchinaDao.queryAll();
       Integer die_num=0;
       Integer recover=0;

       for (Provinceofchina provinceofchina : pocs_list) {
            die_num=die_num+provinceofchina.getDead();
            recover=recover+provinceofchina.getHeal();
       }
       resultData.setDie_num(die_num);
       resultData.setRecovery(recover);
       return resultData;
    }

    @Override
    public List<MapData> getMapData() {

        return provinceofchinaDao.queryNameAndNow();
    }

    @Override
    public List<xiaolv> getXiaoLvs() {
        return provinceofchinaDao.queryXiaolv();
    }
}
