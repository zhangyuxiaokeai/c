package com.atguigu.exer1;

import java.util.*;

/**
 * @author shkstart
 * @create 2022-02-16 15:05
 */
public class DAO <T>{
   private Map<String,T> map=new HashMap<String,T>();
    //保存T类型的对象到Map成员变量中
    public void save(String id, T entiy){
        map.put(id, entiy);
    }
    //从map中获取id对应的对象
    public T get(String id){
        return  map.get(id);
    }
    //替换，map中的key为id的内容，改为entity对象
    public  void update(String id,T entity){
        if(map.containsKey(id)){
            map.put(id,entity);
        }
    }
    //返回map中存放的所有T对象
    public List<T> list(){
        ArrayList<T>list=new ArrayList<>();
        Collection values=map.values();
        list.addAll(values);
        return list;
    }
    //删除指定id对象
    public void delete(String id){
        map.remove(id);
    }
}
