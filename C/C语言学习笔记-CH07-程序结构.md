## 第七章 程序结构

### 7.1 全局变量

> 全局变量初始化

* 默认初始化为0，指针会得到NULL
* 尽量不要使用全局变量来在函数间传递参数和结果



### 7.2 静态本地变量

* static

* 使用全局变量和静态本地变量的函数是线程不安全的



### 7.3 编译预处理和宏

> 编译预处理指令

* #开头的是编译预处理指令

* 它们不是c语言的成分，但是c语言程序离不开它们

* #define 用来定义一个宏，原始的文本替换

* Example 01：

  * ```c
    #include <stdio.h> 
    //const double PI = 3.14159; 
    #define PI 3.14159
    
    int main(){
    	
    	printf("%f\n",2*PI);
    	
    	return 0;
    }
    ```

* Example 02：

  * ```c
    #include <stdio.h> 
    //const double PI = 3.14159; 
    #define PI 3.14159
    #define PI2 2*PI  // PI * 2
    #define PRT printf("%f ",PI); \
    			printf("%f\n",PI2)
    
    int main(){
    	
    //	printf("%f\n",PI);
    //	printf("%f\n",PI2);
    	PRT;
    	
    	return 0;
    }
    ```

> #define

* 有值的宏：参考上面 Example 02
* 没有值的宏：#define _DEBUG    //  这类宏适用于条件编译，后面有其他的编译预处理指令来检查这个宏是否已经被定义过了

> 预定义的宏

* _ _ LINE _ _

* _ _ FILE _ _

* _ _ DATE _ _

* _ _ TIME _ _

* _ _ STDC _ _

* Example 01：

  * ```c
    #include <stdio.h> 
    
    int main(){
    	printf("%s:%d\n",__FILE__,__LINE__);
    	printf("%s:%s\n",__DATE__,__LINE__);
    	
    	return 0;
    }
    ```

> 像函数的宏

* #define cube(x)  ( (x) * (x) * (x) )

* 宏可以带参数

* Example 01：

  * ```c
    #include <stdio.h> 
    
    #define cube(x) ((x)*(x)*(x)) 
    
    int main(int argc,char const *argv[]){
    	int i;
    	scanf("%d",&i);
    	printf("%d\n",cube(i));
    	
    	return 0;
    }
    ```

* 带参数的宏的原则：

  * 一切都要括号
    * 整个值要括号
    * 参数出现的每个地方都要括号
  * #define RADTODEG(x)  ( (x) * 57.29578 )

* 宏可以带多个参数：

  * #define MIN(a,b)  ((a)>(b)?(b):(a))

* 宏也可以组合(嵌套)使用其他宏



### 7.4 大程序结构

> 多个 .c 文件

* 在 Dev C++ 中新建一个项目，然后把几个源代码文件加入进去，然后编译和构建运行即可。

![image-20200306171635923](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185318.png)

* 编译单元
  * 一个 .c 文件是一个编译单元
  * 编译器每次编译只处理一个编译单元

* 引入头文件
  * 把函数原型放在一个头文件(以 .h 结尾)中，在需要调用这个函数的源代码文件( .c 文件)中 #include 这个头文件，就可以让编译器在编译的时候知道函数的原型。

![image-20200306173027863](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423185322.png)

> 声明

在 .h 中添加 extern int gAll; 就能使用 gAll 了

* int i; //是变量的定义
* extern int i;  //是变量的声明

* 声明不产生代码，定义产生代码
* 声明包括：
  * 函数原型
  * 变量声明
  * 结构声明
  * 宏声明
  * 枚举声明
  * 类型声明
  * inline 声明
* 只有声明才能放在头文件中

> 标准头文件结构

* 条件编译指令

* #ifndef  _ MAX_H _  //如果没有定义
* #define  _ MAX_H _  //则定义
* #endif
* 避免了重复引用的情况

![image-20200306175006974](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200423183514.png)

## 