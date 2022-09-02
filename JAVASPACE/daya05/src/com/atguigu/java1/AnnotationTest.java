package com.atguigu.java1;

/**
 * 注解的使用：
 * 1.理解Annotation:
 * ①jdk5.0新增的功能
 * ②Annotation其实就是代码里的特殊标记，这些标记可以在编译，类加载，运行时被读取，并执行相应的处理
 * 。通过使用Annotation，程序员可以在不改变原有逻辑的情况下，在源文件中嵌入一些补充信息。代码分析工具
 * ，开发工具的部署工具可以通过这些补充信息进行验证或进行部署
 * ③在JavaSE中，注解的使用目的比较简单，例如通过标记时的功能，忽略警告等。在
 * JavaEE/Android中注解占据了更重要的角色，例如用来配置应用程序的任何切面，代替JavaEE旧版中遗留的繁冗代码和
 * XML配置等
 * @author shkstart
 * @create 2022-02-09 14:42
 * 2.Annocation的使用示例：
 * 示例一：生成相关的文档注解
 * 示例二：在编译时进行格式检查（JDK内置的 三个基本注解）
 * 示例三：跟踪代码依赖性，实现代替配置文件功能
 *
 * 3.如何自定义注解：参照SuppressWarnings定义
 * ①注解申明为：@interface
 * ②内部定义成员，通常使用value表示
 * ③可以指定成员默认值，使用default定义
 * ④如果自定义注解没有成员，表示是一个标识作用
 *
 * 如果这个注解有成员，在使用注解时候，需要指明成员的值
 * 自定义注解必须配上注解信息处理流程（使用反射）才有意义
 * 自定义注解通过都会指明两个元注解：Retention ,Target
 *
 * 4.jdk提供的四个元注解
 * Retention:只能用于修饰一个Annotation定义，用于指定该Annotation的生命周期@Rentention包含一个 RetentionPolicy
 * 类型的成员变量，使用@Retention时必须为该value成员变量指定值
 * Target：用于指定被修饰的Annotation能用于修饰那些程序元素
 * ********出现的频率较低
 * Documented:：表示所修饰的注解 在被javadoc解析时，保留下来
 * Inherited:被它修饰的Annotation将具有继承性
 *
 * 5.通过反射获取注解信息  ----到反射时具体讲解
 *
 * 6.jdk8中注解的新特性：可重复注解，类型注解
 * 6.1可重复注解的新特性：①在MyAnnotation上申明@Repeatable,成员值为MyAnnotation.class
 *                      ②MyAnnotation的Target和Retention和MyAnnotation相同。
 * 6.2
 * */
public class AnnotationTest {
}
