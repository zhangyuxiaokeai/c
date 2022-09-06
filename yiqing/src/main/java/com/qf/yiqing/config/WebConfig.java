package com.qf.yiqing.config;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.annotation.Configuration;
import org.springframework.web.servlet.config.annotation.InterceptorRegistry;
import org.springframework.web.servlet.config.annotation.WebMvcConfigurer;

/**自定义springMvc中的内容
 * @author shkstart
 * @create 2022-04-20 10:39
 */
@Configuration
public class WebConfig  implements WebMvcConfigurer {
    /**
     * 将创建的拦截器添加到springMvc
     */
    @Autowired
    private VisitInterceptor visitInterceptor;
    @Override
    public void addInterceptors(InterceptorRegistry registry) {

        registry.addInterceptor(visitInterceptor);
    }

}
