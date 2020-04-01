# Linux基础

> [高频面试题](https://zhuanlan.zhihu.com/p/88116335)

## Linux文件系统层次结构标准FHS

> 参考：https://www.cnblogs.com/huang-yc/p/9979924.html

- /bin 存放大多数系统命令
- /sbin 存放管理员权限级别的命令
- /dev 存放设备文件
- /etc 系统配置文件
- /home 用户目录
- /root 管理员目录
- /lib 应用程序所需的共享库
- /mnt 挂载点，用于外挂文件系统，一般为固定存储设备
- /media 挂载移动存储设备
- /opt 第三方程序的安装目录
- /proc 存放系统信息的文件、记录系统状态的文件
- /usr 系统软件资源目录Unix Software Resources
- /var 系统执行过程中经常变化的文件
  - /var/log 日志文件
- /tmp 临时文件
- /boot  系统启动时的相关文件

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200225140651.png)



> Linux文件系统与windows文件系统的区别？
>
> - Windows，分盘，每个驱动器有自己的根目录，形成的是多个树并列的结构。
>
> - Linux，只有一个根目录 / ，所有东西都是从这开始。
> - https://www.cnblogs.com/zhehan54/p/9644987.html



## Linux文件类型

- 普通文件
- 目录文件
- 设备文件
- 链接文件
- 管道文件：本地进程间通讯媒介
- 套接口文件：不同计算机进程间通讯媒介



### Linux常用命令

命令格式  `command [-options] parameter 1` 

[Linux 命令大全](https://man.linuxde.net/)

[Linux 命令搜索引擎](https://linuxcmd.ee-fans.com/)

#### 重定向 >

将本应显示在终端上的内容保存到文件中。

Sample:

```shell
ls > test.txt
```

#### 管道 |

一个程序的输出作为另一个程序的输入

Sample:

```shell
ls | less
```

#### 要点

> cp -R dir1 dir2 拷贝文件夹dir1到dir2下
>
> file 查看文件类型
>
> which 查看命令所在目录

> find /home -name test.txt 在/home路径下查找test.txt文件

> grep aaa test.c -n 查找test.c文件中包含aaa信息的位置，并显示行号
>
> grep aaa ./* -R -n 在当前文件夹下的所有文件中查找包含aaa信息的文件
>
> ls /bin | grep ls 查找bin目录下所有文件名中包含ls的文件

> apt update 更新软件列表
>
> apt upgrade 更新软件
>
> apt install 安装软件
>
> apt remove 卸载软件

> tail -n 10 输出文件最后10行

> tar czvf test.tar.gz a.c 压缩a.c文件为test.tar.gz
>
> tar xzvf test.tar.gz 解压文件test.tar.gz
>
> tar xzvf test.tar.gz -C ./dir 解压到dir目录下

> tar cjvf test.tar.bz2 a.c 压缩，同gz
>
> tar xjvf test.tar.bz2. a.c 解压，同gz

> ps -aux 查看所有进程

> mount 挂载
>
> umount 卸载mount挂载的目录

> df 检查磁盘空间占用情况
>
> du 显示目录/文件占用磁盘空间大小

> chmod u=rwx filename  给文件或目录的拥有者增加读写执行权限
>
> chmod o=- filename  对于当前文件或目录，给其他用户删除所有权限
>
> chmod g+r filename 对于当前文件或目录，给同组用户增加读权限
>
> chmod 777 -R dir 对所有用户拥有读写执行dir目录的权限 -R递归目录下所有文件和目录

---

**Linux下添加用户并将文件夹授权给某一用户**

> adduser yky 添加用户yky
>
> passwd yky 设定用户yky的密码
>
> mkdir /home/yky 创建yky目录
>
> chown yky /home/yky 将yky文件夹的所属人改为yky

---

### Linux文件的用户权限

```shell
# 查看当前目录（包含隐藏文件）的长格式。
ls -la
  -rw-r--r--   1 user  staff   651 Oct 12 12:53 .gitmodules

# 第1位如果是d则代表目录，是-则代表普通文件。
# 更多详情请参阅info coreutils 'ls invocation'（ls命令的info文档）的'-l'选项部分。
# 第2到4位代表当前用户的权限。
# 第5到7位代表组用户的权限。
# 第8到10位代表其他用户的权限。
```

chmod命令：变更文件或目录的权限

- `u`符号代表当前用户。
- `g`符号代表和当前用户在同一个组的用户，以下简称组用户。
- `o`符号代表其他用户。
- `a`符号代表所有用户。
- `r`符号代表读权限以及八进制数`4`。
- `w`符号代表写权限以及八进制数`2`。
- `x`符号代表执行权限以及八进制数`1`。
- `X`符号代表如果目标文件是可执行文件或目录，可给其设置可执行权限。
- `s`符号代表设置权限suid和sgid，使用权限组合`u+s`设定文件的用户的ID位，`g+s`设置组用户ID位。
- `t`符号代表只有目录或文件的所有者才可以删除目录下的文件。
- `+`符号代表添加目标用户相应的权限。
- `-`符号代表删除目标用户相应的权限。
- `=`符号代表添加目标用户相应的权限，删除未提到的权限。



### Linux文本编辑器vi+gedit



## 常用命令

查看端口占用： netstat -anp | grep :80





## GCC编译器

组成：

- cpp(预处理器)、gcc(C编译器)、g++(C++编译器)、binutils(Binary Utilities二进制工具)。
- binutils是辅助GCC的主要软件，常用工具有：as(汇编器)、Id（链接器）、ar（ar工具）等。

命令格式：
`gcc [-option1] ... <filename>`

`g++ [-option1] ... <filename>`

编译选项：

- -o file  指定生成的输出文件名为file
- -E  只进行预处理
- -S  只进行预处理和编译
- -c  只进行预处理、编译和汇编
- -Wall  生成所有级别的警告信息
- -w  关闭所有警告，建议不使用此选项
- -O[0-3]  编译器优化级别，0表示不优化
- -include file  插入一个文件 等同于源代码的#include
- -Dmacro[=def]   将名为marco的宏定义为def  等同于#define marco [def]  def默认为1
- -Umarco  取消宏的定义 等同于#undef marco
- -v  显示制作GCC工具时的配置命令  显示预处理器、编译器的版本号
- -I  dir  将dir目录加入头文件搜索目录列表，优先在dir中查找包含的头文件
- -L dir  将dir目录加入库文件目录列表，优先在dir中查找库文件
- -l name  链接库为name的库
- -static  链接时使用静态库
- -shared  编译动态库
- -g  在可执行文件中加入标准调试信息

过程：

1. 预处理
2. 编译
3. 汇编
4. 链接

## 动态库与静态库

链接过程生成可执行代码

链接分为：静态链接、动态链接

静态链接：由链接器在链接时将库的内容加入到可执行程序中

静态链接的特点：

- 优点：对运行环境的依赖性较小，具有较好兼容性
- 缺点：生成的程序比较大，需要更多的系统资源，在装入内存时会消耗更多的时间，库函数若更新必须重新编译应用程序

静态链接：链接器在链接时仅仅建立与所需库函数的链接关系，在程序运行时才将所需资源调入可执行程序

动态链接的特点：

- 优点：在需要的时候才会调入对应的资源函数，简化程序的升级；有着较小的程序体积，实现进程之间的资源共享（避免重复拷贝）
- 缺点：依赖动态库，不能独立运行，动态库依赖版本问题严重

静态编译加-static

动态编译不用加参数



**如何制作静态链接库？**

1. 制作

   ```bash
   gcc -c mylib.c -o mylib.o # 编译目标文件
   ar rc libtestlib.a mylib.o # 制作静态库
   ```

2. 静态库使用

   ```bash
   库函数、头文件均在当前目录下
   gcc -o my_test mytest.c libxxx.a
   库函数、头文件假设在/opt目录下
   gcc -o mytest mytest.c -L /opt -lxxx -I /opt 
   ```

3. 编译程序时

   编译器默认到/lib/、/usr/lib下查找库函数，到/usr/include查找头文件

   ```bash
   gcc mytest.c -o mytest -I testlib
   ```

**如何制作动态链接库？**

1. 制作

   ```bash
   gcc -shared mylib.c -o libtestlib.so 
   ```

2. 使用

   ```
   库函数、头文件均在当前目录下
   gcc -o my_test mytest.c libtestlib.so
   库函数、头文件假设在/opt目录下
   gcc -o mytest mytest.c -L /opt -I testlib -l /opt 
   ```

3. 编译通过，运行时出错，编译时找到了库函数，但链接找不到，执行以下操作，把当前目录加入搜索路径

   ```bash
   export LD_LIBRARY_PATH=/opt:$LD_LIBRARY_PATH
   ./mytest #可找到动态链接库
   ```

当静态库与动态库重名时，系统优先连接动态库，或者加-static连接静态库

---

**动态库加载的四种方法**

1. 将动态库放置到/lib目录下

2. 修改环境变量LD_LIBRARY_PATH （仅当前终端可用）

3. 在.bashrc 添加环境变量LD_LIBRARY_PATH

   `export LD_LIBRARY_PATH=/opt:$LD_LIBRARY_PATH`

4. 修改/etc/ld.so.conf

写了一个加法的函数：

```c
#include <stdio.h>
int add(int x, int y)
{
	return x+y;
}
```

生成动态库文件libyky.so

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163240.png)

将add.h放入include目录，将libyky.so放入lib目录，在src目录新建main.c文件。

main.c主要内容是调用libyky.so库中的add函数。

```c
#include <stdio.h>
#include "add.h"
int main()
{
    int x, y;
    printf("Input x,y: ");
    scanf("%d %d", &x, &y);
    int res = add(x, y);
    printf("res: %d\n", res);
}
```

动态库加载的方法：

1. 将动态库放置到/lib目录下

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163345.png)

2. 修改环境变量LD_LIBRARY_PATH （仅当前终端可用）

   将/home/keyon/gccTest2/lib添加到环境变量中，将可执行文件test拿到上一层目录运行，依然可以，说明环境变量生效。

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163400.png)

   重新打开终端，不能运行test，说明刚刚设置的环境变量只在临时终端有效

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163419.png)

3. 在.bashrc 添加环境变量LD_LIBRARY_PATH

   打开.bashrc，在文件末尾添加export LD_LIBRARY_PATH=/home/keyon/gccTest2/lib:$LD_LIBRARY_PATH

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163428.png)

   重新打开终端，使终端加载修改后的.bashrc配置文件，执行test成功。

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163438.png)

4. 修改/etc/ld.so.conf

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163451.png)

   末尾追加/home/keyon/gccTest2/lib

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163458.png)

   运行成功

   ![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200324163505.png)



## GDB调试器

调试test程序

```
gcc -g test.c -o test

gdb test
```

gdb命令

- l （list）  列出程序清单
- r （run） 运行程序
- b （breakpoint） 设置断点
- info b  查看断点信息
- clear  清除断点
- c （continue） 继续运行程序
- s （step） 单步运行 进入函数
- n （next） 单步运行 不进入函数
- finish  跳出函数
- print  显示变量/表达式的值
- display  每次程序停止运行时都显示变量或表达式的值

