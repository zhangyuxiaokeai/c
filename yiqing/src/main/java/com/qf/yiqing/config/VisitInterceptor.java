package com.qf.yiqing.config;

import com.qf.yiqing.entity.Visit;
import com.qf.yiqing.service.VisitService;
import jdk.nashorn.internal.ir.RuntimeNode;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import org.springframework.web.servlet.HandlerInterceptor;

import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * @author shkstart
 * @create 2022-04-20 10:37
 */
@Component
public class VisitInterceptor implements HandlerInterceptor {
    @Autowired
    private VisitService visitService;

    @Override
    public boolean preHandle(HttpServletRequest request, HttpServletResponse response, Object handler) throws Exception {
        //先获取请求url =http://localhost:8888/patient/data
        String requestURI = request.getRequestURI();
        if (requestURI.contains("patient/data")) {
            String ip = request.getRemoteAddr();
            System.out.println(ip);
            if (ip.equals("0:0:0:0:0:0:0:1")) {
                ip = "127.0.0.1";
            }
           // 判断当前ip是否在数据库中存在
            Visit visit= visitService.queryByIp(ip);
            if(visit==null){
                Visit visit1 = new Visit();
                visit1.setCount(1);
                visit1.setIp(ip);
                visitService.insert(visit1);
            }else {
                visit.setCount(visit.getCount()+1);
                visitService.update(visit);
            }
        }
            System.out.println("哈哈哈我进来了");
            return true;
         }
        }

