# Java基础

> 问题参考：https://zhuanlan.zhihu.com/p/88116335

## 收藏文章列表

- [Java注解的定义与使用](https://www.baidu.com/link?url=vpaC66rLTQ7IDugWNXYNpGCOSc6JU6GGIxntngMd1v6vWYnyxsHYFonz80lL2VIL7uJ7ptP8u9XMd2ajGwDfP_&wd=&eqid=c7a19a330003ebb4000000025e549a27)



## 1. 接口与抽象类的区别？

> 参考：https://www.cnblogs.com/sixgodbiao/p/9846607.html

Java提供和支持创建抽象类和接口。它们的实现有共同点，不同点在于：

- 接口中所有的方法隐含的都是抽象的。而抽象类则可以同时包含抽象和非抽象的方法。
- 类可以实现很多个接口，但是只能继承一个抽象类
- 类如果要实现一个接口，它必须要实现接口声明的所有方法。但是，类可以不实现抽象类声明的所有方法，当然，在这种情况下，类也必须得声明成是抽象的。
- 抽象类可以在不提供接口方法实现的情况下实现接口。
- Java接口中声明的变量默认都是final的。抽象类可以包含非final的变量。
- Java接口中的成员函数默认是public的。抽象类的成员函数可以是private，protected或者是public。
- 接口是绝对抽象的，不可以被实例化。抽象类也不可以被实例化，但是，如果它包含main方法的话是可以被调用的。

## 2. Java中的异常有哪几类？分别怎么使用？

> 参考：https://www.jianshu.com/p/4f84c14f1a22

从根本上讲所有的异常都属于Throwable的子类，从大的方面讲分为Error（错误）和Exception（异常）。Eror是程序无法处理的异常，当发生Error时程序线程会终止运行。我们一般意义上讲的异常就是指的Exception，这也是面试官常问的问题。

下面就简单说一下关于Exception（以下都简称异常）的一点理解。

异常分为运行时异常（RuntimeException，又叫非检查时异常）和非运行时异常（又叫检查异常）。下面列举一下常见的运行时异常：

NullPointerException - 试图访问一空对象的变量、方法或空数组的元素

ArrayIndexOutOfBoundsException - 数组越界访问

NoClassDefFoundException - JAVA运行时系统找不到所引用的类

ArithmeticException - 算术运算中，被0除或模除

ArrayStoreException - 数据存储异常，写数组操作时，对象或数据类型不兼容

ClassCastException - 类型转换异常

IllegalArgumentException - 方法的参数无效

IllegalThreadStateException - 试图非法改变线程状态，比方说试图启动一已经运行的线程

NumberFormatException - 数据格式异常，试图把一字符串非法转换成数值（或相反）

SecurityException - 如果Applet试图执行一被WWW浏览器安全设置所禁止的操作

IncompatibleClassChangeException - 如改变了某一类定义，却没有重新编译其他引用了这个类的对象。如某一成员变量的声明被从静态改变为非静态，但其他引用了这个变量的类却没有重新编译，或者相反。如删除了类声明中的某一域或方法，但没有重新编译那些引用了这个域或方法的类

OutOfMemoryException - 内存不足，通常发生于创建对象之时

IncompatibleTypeException - 试图实例化一个接口，Java运行时系统将抛出这个异常

UnsatisfiedLinkException - 如果所需调用的方法是C函数，但Java运行时系统却无法连接这个函数

## 3. 常用的集合类有哪些?

> 参考：https://blog.csdn.net/zhanyufeng888/article/details/82498054

常用的三大类集合：Set、List、Map。

### ArrayList与LinkedList对比

**ArrayList**

1. ArrayList 实现了 List 接口，继承了 AbstractList 类，由一个 Object[] 实例实现，即底层为数组结构；
2. 默认初始化长度为 10，扩容规则为 0.5倍的原容量加1，即一次扩容后的长度为 16；
3. 特点：查询速度快，添加、删除相对于LinkedList较慢、线程不同步(不安全)。

**LinkedList**

1. LinkedList 实现了 List 接口，继承了 AbstractSequentialList 类，由一个 Node 节点链表实现，即底层为链表结构；
2. 由于LinkedList 数据结构为链表，无预扩容机制；
3. 特点：添加、删除速度快，查询相对于ArrayList较慢、线程不同步(不安全)。

## 4. 内存溢出是怎么回事？

> 参考：https://blog.csdn.net/qyj19920704/article/details/83759302

**内存溢出分三种情况**

1. **OutOfMemoryError： PermGen space**
   Permanent Generation space 这个区域主要用来保存加来的Class的一些信息，在程序运行期间属于永久占用的，Java的GC不会对他进行释放，所以如果启动的程序加载的信息比较大，超出了这个空间的大小，就会发生溢出错误；

   解决的办法无非就是增加空间分配了——增加java虚拟机中的XX:PermSize和XX:MaxPermSize参数的大小，其中XX:PermSize是初始永久保存区域大小，XX:MaxPermSize是最大永久保存区域大小。

2. **OutOfMemoryError：Java heap space**
   heap 是Java内存中的堆区，主要用来存放对象，当对象太多超出了空间大小，GC又来不及释放的时候，就会发生溢出错误。

   Java中对象的创建是可控的，但是对象的回收是由GC自动的，一般来说，当已存在对象没有引用(即不可达)的时候，GC就会定时的来回收对象，释放空间。但是因为程序的设计问题，导致对象可达但是又没有用(即前文提到的内存泄露)，当这种情况越来越多的时候，问题就来了。
   针对这个问题，我们需要做一下两点：

   1. 检查程序，减少大量重复创建对象的死循环，减少内存泄露。
   2. 增加Java虚拟机中Xms（初始堆大小）和Xmx（最大堆大小）参数的大小。

3. **StackOverFlowError**
   stack是Java内存中的栈空间，主要用来存放方法中的变量，参数等临时性的数据的，发生溢出一般是因为分配空间太小，或是执行的方法递归层数太多创建了占用了太多栈帧导致溢出。

   针对这个问题，除了修改配置参数-Xss参数增加线程栈大小之外，优化程序是尤其重要。

## 5. ==和 equals的区别？

> 参考：https://blog.csdn.net/shenxinmou1661/article/details/87907827

**equals**

- 基本数据类型：无此方法
- 引用数据类型：八种基本数据类型的包装类都覆写了equals方法，判断值是否相等；其他引用数据类型如果没有覆写equals方法，则判断是否指向同一个引用。

**==**

- 基本数据类型：判断值是否相等
- 引用数据类型：判断是否指向同一引用

## 6. hashCode方法的作用？

> 参考：https://www.jianshu.com/p/7da019d19c04
>
> https://blog.csdn.net/weixin_43801704/article/details/89111013

## 7. Hash Map实现原理，如何保证 HashMap的线程安全？

> 参考：https://blog.csdn.net/qq_22339269/article/details/93746270
>
> https://coolshell.cn/articles/9606.html

Java HashMap 是非线程安全的。在多线程条件下，容易导致死循环，具体表现为CPU使用率100%。因此多线程环境下保证 HashMap 的线程安全性，主要有如下几种方法： 

- 使用 java.util.Hashtable 类，此类是线程安全的。
- 使用 java.util.concurrent.ConcurrentHashMap，此类是线程安全的。
- 使用 java.util.Collections.synchronizedMap() 方法包装 HashMap object，得到线程安全的Map，并在此Map上进行操作。
- 自己在程序的关键方法或者代码段加锁，保证安全性，当然这是严重的不推荐。

## 8. NIO是什么？适用于什么场景？

> 参考：https://blog.csdn.net/forezp/article/details/88414741
>
> https://mp.weixin.qq.com/s?__biz=MzU0MzQ5MDA0Mw==&mid=2247483907&idx=1&sn=3d5e1384a36bd59f5fd14135067af1c2&chksm=fb0be897cc7c61815a6a1c3181f3ba3507b199fd7a8c9025e9d8f67b5e9783bc0f0fe1c73903&scene=21#wechat_redirect

## 9. JVM内存结构，为什么需要GC？

> 参考：https://blog.csdn.net/qq_34309305/article/details/79226513

## 10. NIO模型， select/epoll的区别，多路复用的原理

> 参考：https://blog.csdn.net/iteye_17377/article/details/82242450

## 11. Java中一个字符占多少个字节，int, long, double占多少字节

## 12. 创建一个类的实例都有哪些办法？

## 13. final/finally/finalize的区别？

## 14. Session/Cookie的区别？
## 15. String/String Buffer/StringBuilder的区别？实现原理？

## 16. Servlet的生命周期？

## 17. 如何用Java分配一段连续的1G的内存空间？需要注意些什么？

## 18. Java有自己的内存回收机制，但为什么还存在内存泄露的问题呢？

## 19. 什么是Java序列化，如何实现Java序列化？