package com.qf.yiqing.service.impl;

import com.qf.yiqing.entity.Patient;
import com.qf.yiqing.dao.PatientDao;
import com.qf.yiqing.service.PatientService;
import org.springframework.stereotype.Service;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageImpl;
import org.springframework.data.domain.PageRequest;

import javax.annotation.Resource;

/**
 * (Patient)表服务实现类
 *
 * @author makejava
 * @since 2022-04-19 09:52:57
 */
@Service("patientService")
public class PatientServiceImpl implements PatientService {

    @Resource
    private PatientDao patientDao;
    @Override
    public Patient queryById(Integer id) {
        //业务逻辑
        Patient patient = patientDao.queryById(id);

        return patient;
    }


    //    @Resource
//    private PatientDao patientDao;
//
//    /**
//     * 通过ID查询单条数据
//     *
//     * @param id 主键
//     * @return 实例对象
//     */
////    @Override
////    public Patient queryById(Integer id) {
////        return this.patientDao.queryById(id);
////    }
//
//    /**
//     * 分页查询
//     *
//     * @param patient     筛选条件
//     * @param pageRequest 分页对象
//     * @return 查询结果
//     */
//    @Override
//    public Page<Patient> queryByPage(Patient patient, PageRequest pageRequest) {
//        long total = this.patientDao.count(patient);
//        return new PageImpl<>(this.patientDao.queryAllByLimit(patient, pageRequest), pageRequest, total);
//    }
//
//    /**
//     * 新增数据
//     *
//     * @param patient 实例对象
//     * @return 实例对象
//     */
//    @Override
//    public Patient insert(Patient patient) {
//        this.patientDao.insert(patient);
//        return patient;
//    }
//
//    /**
//     * 修改数据
//     *
//     * @param patient 实例对象
//     * @return 实例对象
//     */
//    @Override
//    public Patient update(Patient patient) {
//        this.patientDao.update(patient);
//        return null;
//    }
//
//    /**
//     * 通过主键删除数据
//     *
//     * @param id 主键
//     * @return 是否成功
//     */
//    @Override
//    public boolean deleteById(Integer id) {
//        return this.patientDao.deleteById(id) > 0;
//    }
}
