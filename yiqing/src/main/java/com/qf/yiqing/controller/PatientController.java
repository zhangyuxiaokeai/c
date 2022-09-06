package com.qf.yiqing.controller;

import com.qf.yiqing.entity.*;
import com.qf.yiqing.service.PatientService;
import com.qf.yiqing.service.ProvinceofchinaService;
import com.qf.yiqing.service.QfnumberService;
import com.qf.yiqing.service.VisitService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.*;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/*
http://localhost:8080/patient/1
 */
/**
 * (Patient)表控制层
 *
 * @author makejava
 * @since 2022-04-19 09:52:56
 */
@Controller
@RequestMapping("patient")
public class PatientController {

    //Resouce 通过名称找到实现类
    //@Resource
    @Autowired
    private PatientService  patientService;
    @Autowired
    private VisitService visitService;
    @Autowired
    private ProvinceofchinaService provinceofchinaService;
    @Autowired
    private QfnumberService qfnumberService;
      @RequestMapping("data")
    public String toMap(Model model){//庸才存放数据的对象

            //获取到浏览的人数
         Integer visit_num=visitService.getVisit();
         model.addAttribute("visit_num",visit_num);
            //获取国内疫情数据
        ResultData resultData= provinceofchinaService.getChinaData();
        model.addAttribute("resulData",resultData);
             return "data";
      }
    @RequestMapping("foreign")
    @ResponseBody
    public ResultData toData(){//庸才存放数据的对象

       //获取国外数据

        return null;
    }


    @RequestMapping("getmapdata")
    @ResponseBody
    public List<MapData> mapdata(){
          return provinceofchinaService.getMapData();
    }

    @RequestMapping("getxiaolvs")
    @ResponseBody
    public List<xiaolv> xiaolvs(){
          return  provinceofchinaService.getXiaoLvs();
    }
    @RequestMapping("getNnmbers")
    @ResponseBody
    public ArrayList<Qfnum> getNumber(){
          return qfnumberService.getNumbers();
    }

  }
    /**
     * 服务对象
     */

//    @Resource
//    private PatientService patientService;
//
//    /**
//     * 分页查询
//     *
//     * @param patient     筛选条件
//     * @param pageRequest 分页对象
//     * @return 查询结果
//     */
//    @GetMapping
//    public ResponseEntity<Page<Patient>> queryByPage(Patient patient, PageRequest pageRequest) {
//        return ResponseEntity.ok(this.patientService.queryByPage(patient, pageRequest));
//    }
//
//    /**
//     * 通过主键查询单条数据
//     *
//     * @param id 主键
//     * @return 单条数据
//     */
////    @GetMapping("{id}")
//    public ResponseEntity<Patient> queryById(@PathVariable("id") Integer id) {
//        return ResponseEntity.ok(this.patientService.queryById(id));
//    }

    /**
     *反转id
     */
//    @RequestMapping("insert")
//    public String insert(){
//        Patient patient = new Patient();
//        patient.setPatientName("糖果超甜");
//        patient.setCountry("中国");
//        patient.setProvince("重庆");
//        return "成功";
//    }


//    /**
//     * 新增数据
//     *
//     * @param patient 实体
//     * @return 新增结果
//     */
//    @PostMapping
//    public ResponseEntity<Patient> add(Patient patient) {
//        return ResponseEntity.ok(this.patientService.insert(patient));
//    }
//
//    /**
//     * 编辑数据
//     *
//     * @param patient 实体
//     * @return 编辑结果
//     */
//    @PutMapping
//    public ResponseEntity<Patient> edit(Patient patient) {
//        return ResponseEntity.ok(this.patientService.update(patient));
//    }
//
//    /**
//     * 删除数据
//     *
//     * @param id 主键
//     * @return 删除是否成功
//     */
//    @DeleteMapping
//    public ResponseEntity<Boolean> deleteById(Integer id) {
//        return ResponseEntity.ok(this.patientService.deleteById(id));
//    }

//}

