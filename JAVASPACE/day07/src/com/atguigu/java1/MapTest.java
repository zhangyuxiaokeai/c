package com.atguigu.java1;

import org.junit.Test;

import java.security.Key;
import java.util.*;

/**
 * |------Map:双列数据 key-value对的数据----类似于高中的函数 y=f(x)
 *          |----HashMap:作为Map的主要实现类：线程不安全的，效率高：存储null的key和value
 *              |----LinkedHashMap:保证在遍历map元素时，可以按照添加顺序实现遍历。
 *                      原因：在原有发HashMap底层结构基础上，添加了一对指针，指向前一个和后一个元素。
 *                      对于频繁的遍历操作，此类的执行效率高于HashMap.
 *          |----TreeMap:保证可以按照添加的key-value进行排序，实现排序遍历，此时考虑key的自然排序或定制排序
 *                      底层使用红黑树
 *         |---Hashtable:作为古老的实现类：线程安全的，效率低；不能存储null的key和value
 *             |----Properties:常用来处理配置文件。key和value都是String类型
 *
 *          HashMap的底层：数组加链表（jdk7及之前）
 *                        数组+链表+红黑树（jdk8)
 *
 *面试题：
 * 1.HashMap的底层实现原理。
 * 2.HashMap和Hashtable的异同。
 * 3.CurrentHashMap与Hashtable的异同？（暂时不讲）
 *
 *
 *
 * 二.Map结构的理解：
 * Map中的key：无序的，不可重复的，使用set存储所有的key  ---->key所在的类要重写equals()和hashCode()  (以HashMap为例)
 * Map中的value：无序的，可重复的，使用Collection存储所有的value   --->所在的类要重写equals()
 * 一个键值对：key-value构成了一个Entry对象
 * Map中的entry：无序的，不可重复的使用Set存储所有的entry
 *
 * 三，HashMap的底层使用原理？以jdk7为例：
 *      Hash map =new HashMap();
 *      在实例化以后，底层创建了长度是16的一维数组Entry[] table.
 *      ..可能已经执行多次put...
 *      map.put(key1,value1):
 *      首先，调用key1所在类的HashCode()计算key1哈希值，此哈希值经过某种计算后，得到在Entry数组中的存放位置
 *     如果此位置上的数据为空，此时的key1-value1添加成功 ，   -----情况一
 *     如果此位置上的数据不为空，（意味着此位置上存在一个或多个数据（以链表形式存在）），比较key1和已经存在的一个或多个数据的哈希值
 *     ：
 *          如果key1的哈希值与已经存在的数据的哈希值都不相同，此时key1-value1添加成功。 -----情况二
 *          如果key1的哈希值与已经存在的某一个数据（key2-value2)的哈希值相同，继续比较：调用key1所在类的equals(key2)方法，比较：
 *              如果equals()返回false；此时key1-value1添加成功 ---- -----情况三
 *              如果equals()返回true:使用value1替换相同的key的value值
 *
 *
 *          补充：关于情况2和情况3：此时key1-value1和原来的数据以链表的方式存储
 *
 *          在不断的添加过程中，会涉及到扩容问题，默认的扩容方式：扩容为原来容量的二倍，并将原有的数据复制过来
 *
 *           jdk8相较于jdk7在底层实现的方式的不同：
 *          1.new HashMap():底层的没有创建一个长度为16的数组
 *          2.jdk8底层的数组：Node[],而非Entry[]
 *          3.首次调用put()方法时，底层创建长度为16的数组
 *          4.jdk7底层结构只有：数组+链表  。jdk8中底层结构：数组+链表+红黑树
 *            当数组的某一个索引位置上的元素以链表的形式存在的数据个数>8且当且数组的长度>64时，
 *            此时此索引位置上的所有数据改为使用红黑树存储。
 *
 *
 *
 *   四，LinkedHashMap的底层实现原理；
 *
 *
 *   五.Map中定义的方法：
 *         一添加，删除，修改的操作
 *         Object put(Object key,Object value):将指定的key-value添加（或修改的）当前map对象中
 *         void putAll(Map m)：将m中所有的key -value对存放到当前map中
 *         Object remove(Object key):移除指定key的key-value对，并返回value
 *         void clear():清空当前map中的所有数据
 *         二 ，元素查询你的操作：
 *         Object get (Object key):获取指定key对应的value
 *         boolean containsKey(Object key):是否包含指定的key
 *         boolean containsValue(Object value):是否包含指定的value
 *         int size():返回map中key-value对的个数
 *         Boolean isEmpty()判断当前map是否为空
 *         boolean equals(Object obj):判断当前map和参数对像obj是否相等
 *         三 ，元视图操作方法：
 *
 *         Set keySet():返回所有key构成的Set集合
 *         Collection values():返回所有value构成的Collection集合
 *         Sets entrySet()：返回key-value对构成的Set集合
 *
 *
 *  总结：常用方法
 *  添加：put(Object key,Object value)
 *  删除：Object remove(Object key)
 *  修改：put(Object key,Object value)
 *  查询： get (Object key):获取指定key对应的value
 *  长度：int size()
 *  遍历：keySet()// values()// entrySet()
 *
 *
 * @author shkstart
 * @create 2022-02-14 0:08
 */
public class MapTest {
    @Test
    public void test6() {
        /*
            三 ，元视图操作方法：

                           Set keySet():返回所有key构成的Set集合
                *         Collection values():返回所有value构成的Collection集合
                *         Sets entrySet()：返回key-value对构成的Set集合
         */
        Map map = new HashMap();
        map.put("AA", 123);
        map.put(45, "123");
        map.put("BB", 123);
        map.put("ojbk", 123);
        //遍历所有的key集：keySet()
        System.out.println(map.keySet());
        Set set = map.keySet();
        Iterator iterator = set.iterator();
        while (iterator.hasNext()) {
            System.out.println(iterator.next());
        }
        //遍历所有的value集value（）
        Collection values = map.values();
        for(int i=0;i<values.size();i++){
            Iterator iterator1 = values.iterator();
            System.out.println(iterator1.next());
        }
        //遍历所有的key -value
        //方式一：entrySet()
        Set entrySet = map.entrySet();
        Iterator iterator1 = entrySet.iterator();
        while (iterator1.hasNext()) {
//            System.out.println(iterator1.next());
            Object next = iterator1.next();
            //entrySet集合中的元素都是entry
            Map.Entry entry=(Map.Entry)next;
            System.out.println(entry.getKey() + "------" + entry.getValue());
        }
        System.out.println("***************");
        //方式二：
        Set keySet = map.keySet();
        Iterator iterator2 = keySet.iterator();
        while (iterator2.hasNext()) {
//            System.out.println(iterator2.next());
            Object key=iterator2.next();
            Object value = map.get(key);
            System.out.println(key+"====="+value);

        }
        }
    @Test
    public void test5(){
        /*
         二 ，元素查询你的操作：
 *         Object get (Object key):获取指定key对应的value
 *         boolean containsKey(Object key):是否包含指定的key
 *         boolean containsValue(Object value):是否包含指定的value
 *         int size():返回map中key-value对的个数
 *         Boolean isEmpty()判断当前map是否为空
 *         boolean equals(Object obj):判断当前map和参数对像obj是否相等
         */
        Map map=new HashMap();
        //添加
        map.put("AA",123);
        map.put(45,"123");
        map.put("BB",123);
        map.put("ojbk",123);
        System.out.println(map.get("AA")); // Object get (Object key):获取指定key对应的value
        // boolean containsKey(Object key):是否包含指定的key
        boolean isExist = map.containsKey("AA");
        System.out.println(isExist);
        //  boolean containsValue(Object value):是否包含指定的value
        boolean isExit = map.containsValue(123);
        System.out.println(isExit);
        //int size():返回map中key-value对的个数
        System.out.println(map.size());
       // boolean equals(Object obj):判断当前map和参数对像obj是否相等
        Map map1=new HashMap();
        map1.put("AA",123);
        map1.put(45,"123");
        map1.put("BB",123);
        map1.put("ojbk",123);
        boolean equals = map.equals(map1);
        System.out.println(equals);
    }
    @Test
     /*
      一添加，删除，修改的操作
 *         Object put(Object key,Object value):将指定的key-value添加（或修改的）当前map对象中
 *         void putAll(Map m)：将m中所有的key -value对存放到当前map中
 *         Object remove(Object key):移除指定key的key-value对，并返回value
 *         void clear():清空当前map中的所有数据
 *         二 ，元素查询你的操作：
     */
    public void test3(){
        Map map=new HashMap();
        //添加
        map.put("AA",123);
        map.put(45,"123");
        map.put("BB",123);
        map.put("ojbk",123);
        //修改
        map.put("AA","SHABI");
        System.out.println(map);
        Map map1=new HashMap();
        map.put("CC",123);
        map.put("DD","123");
        map.putAll(map1);
        System.out.println(map);

        //remove(Object key)
        Object value = map.remove("CC");//返回value值，没有key值返回null
        System.out.println(value);
        System.out.println(map);
        //clear()
        map.clear();//与map=null操作不同
        System.out.println(map);

    }
    @Test
    public void test4(){

    }
    @Test
    public void test2(){
       Map map=new HashMap();
       map=new LinkedHashMap();
        map.put(123,"AA");
        map.put(345,"BB");
        map.put(12,"CC");
        System.out.println(map);
    }
    @Test
    public void test(){
        Map map = new HashMap();
        //map=new Hashtable();
        map.put(123,456);
    }
}
