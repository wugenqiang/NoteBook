# Shell脚本编程

## 声明脚本解释器

`#!/bin/bash`	`#!/bin/sh`



##  脚本的执行

`chmod +x ./test.sh`  给予可执行权限

`./test.sh` 执行脚本



## 变量

> 变量名和等号之间不能有空格。

**变量引用使用**$

Example:

```bash
#!/bin/bash
clear
echo "this is my first shell script."
authorName = "keyon"
echo $authorName
```

---

**清除/删除变量**

```shell
unset var
```

---

**键盘读入**

```shell
read str
```

---

**只读变量**

使用 readonly 命令可以将变量定义为只读变量，只读变量的值不能被改变。

```shell
readonly var=100
```

---

**变量类型**

- 局部变量：局部变量在脚本或命令中定义，仅在当前shell实例中有效，其他shell启动的程序不能访问局部变量。
- 环境变量：所有的程序，包括shell启动的程序，都能访问环境变量，有些程序需要环境变量来保证其正常运行。必要的时候shell脚本也可以定义环境变量。
- shell变量：shell变量是由shell程序设置的特殊变量。shell变量中有一部分是环境变量，有一部分是局部变量，这些变量保证了shell的正常运行

---

**导出为环境变量**

```shell
export var=300
```

注意：

- 此时必须使用source xxx.sh才可以生效
- 关闭终端后失效



## 字符串

**单引号**

原样输出，变量无效。

**双引号**

双引号里可以有变量，可以出现转义字符。

**字符串拼接**

不需要加+

**获取字符串长度**

${#str}

**提取子字符串**

${str:1:4}

从str[1]到str[4]



## 环境变量

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200310112122.png)

## 预定义变量

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200310112046.png)



## 特殊用法

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200310112219.png)



## 传递参数

```shell
echo "执行的文件名：$0";
echo "第一个参数为：$1";
echo "第二个参数为：$2";
echo "第三个参数为：$3";
```

### 遍历所有参数值

不确定shell调用传参的个数时，根据参数总数进行依次遍历

```shell
# 示例：shell.sh a b c d e
for((i=1;i<=$#;i++))
do
    param=${!i} # 获取第i个参数值
    echo $param
done
```





## 条件测试

> https://www.runoob.com/linux/linux-shell-test.html

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20200310163552.png)

**数值测试**

| 参数 | 说明           |
| :--- | :------------- |
| -eq  | 等于则为真     |
| -ne  | 不等于则为真   |
| -gt  | 大于则为真     |
| -ge  | 大于等于则为真 |
| -lt  | 小于则为真     |
| -le  | 小于等于则为真 |

**字符串测试**

| 参数      | 说明                     |
| :-------- | :----------------------- |
| =         | 等于则为真               |
| !=        | 不相等则为真             |
| -z 字符串 | 字符串的长度为零则为真   |
| -n 字符串 | 字符串的长度不为零则为真 |

**文件测试**

| 参数      | 说明                                 |
| :-------- | :----------------------------------- |
| -e 文件名 | 如果文件存在则为真                   |
| -r 文件名 | 如果文件存在且可读则为真             |
| -w 文件名 | 如果文件存在且可写则为真             |
| -x 文件名 | 如果文件存在且可执行则为真           |
| -s 文件名 | 如果文件存在且至少有一个字符则为真   |
| -d 文件名 | 如果文件存在且为目录则为真           |
| -f 文件名 | 如果文件存在且为普通文件则为真       |
| -c 文件名 | 如果文件存在且为字符型特殊文件则为真 |
| -b 文件名 | 如果文件存在且为块特殊文件则为真     |



判断字符串是否为空，不为空则输出111

注意这个 $str 要加双引号

```shell
#!/bin/bash

function test()
{
    str="222"
    if [ -n "$str" ]; then
        echo "111"
    fi
}

test

```



## 控制语句

### if-else

```shell
if [条件1]; then
	程序1
else
	程序2
fi #关闭if
```

```shell
if [条件1]; then
	程序1
elif [条件2]; then
	程序2
else
	程序3
fi #关闭if
```

### for

```shell
for((i=1;i<10;i++))
do
	...
done
```



### for in

> https://blog.csdn.net/wzj_110/article/details/86669426

```shell
for var in item1 item2 ... itemN
do
    command1
    command2
    ...
    commandN
done
```



### while

```shell
while condition
do
    command
done
```

无限循环

```shell
while true
do
    command
done
```



### until

```shell
until condition
do
    command
done
```



### case

> https://www.runoob.com/linux/linux-shell-process-control.html

```shell
case 值 in
模式1)
    command1
    command2
    ...
    commandN
    ;;
模式2）
    command1
    command2
    ...
    commandN
    ;;
esac
```



## 函数

```shell
funWithReturn(){
    echo "这个函数会对输入的两个数字进行相加运算..."
    echo "输入第一个数字: "
    read aNum
    echo "输入第二个数字: "
    read anotherNum
    echo "两个数字分别为 $aNum 和 $anotherNum !"
    return $(($aNum+$anotherNum))
}
funWithReturn
echo "输入的两个数字之和为 $? !"
```

### 获取函数的返回值的多种方法

```shell
#!/bin/bash

##
# 如何获取函数的返回值
##

#### 法1，(子进程)函数中打印需要返回的值,父进程用反引号调用函数
function foo
{
    pid="88"
    echo $pid
    return 1
}

ret=`foo`
echo "foo:$ret"

#### 法2 全局变量法,函数内定义的变量,也拥有全局的生命期
function foo2
{
    pid="99"
    return 0
}

foo2
echo "foo2:$pid"

```



## grep文本查找工具



## awk文本分析工具

> https://www.cnblogs.com/ftl1012/p/9250541.html

格式：

```shell
awk '{pattern + action}' {filenames}
```

### awk内置变量

```
ARGC               命令行参数个数
ARGV               命令行参数排列
ENVIRON            支持队列中系统环境变量的使用
FILENAME           awk浏览的文件名
FNR                浏览文件的记录数
FS                 设置输入域分隔符，等价于命令行 -F选项
NF                 浏览记录的域的个数
NR                 已读的记录数
OFS                输出域分隔符
ORS                输出记录分隔符
RS                 控制记录分隔符
$0变量是指整条记录。$1表示当前行的第一个域,$2表示当前行的第二个域,......以此类推。

$NF是number finally,表示最后一列的信息，跟变量NF是有区别的，变量NF统计的是每行列的总数
```



打印输出的第一列

ps -ef awk '{print $1}'



## sed文本编辑工具



## basename

截取文件名



## 案例

### ping本网段所有主机的连通性

```shell
#!/bin/bash
for i in `seq 1 254`
do
    ping -c 1 192.168.0.$i > /dev/null
    if [ $? -eq 0 ]; then
        echo "192.168.72.$i is ok"
    else
        echo "192.168.72.$i is not ok"
    fi
done
```

### 获取目录下所有文件

```shell
#!/bin/bash
cd /home
for file in $(ls)
do
	...
done
```

### 根据进程名精确查询该进程是否正在运行

```shell
# 参数1: 完整的进程名
# 返回值: 进程PID  没有则说明进程未运行
function isRunning()
{
	$processName=$1
	pid=$(ps | grep -P "\b$processName\b" | awk '{print $1}')
}

isRunning $1
if [ -n "$pid" ]; then
	echo "isRunning"
else
	echo "isNotRunning"
fi
```



### 启动目录下所有可执行文件

```shell
#!/bin/bash

##
# 启动可执行程序的脚本
# 无参数：执行当前目录下所有可执行文件
# 有参数：将参数作为可执行文件名来执行相应文件
# 示例：
# 无参 bash start.sh
# 有参 bash start.sh a b c       
##

# 启动
function start()
{
    fileName=$1
    echo "fileName: $fileName"
    if [ -x $fileName ]; then # 如果文件存在且可执行
        pid=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
        # pid=$(ps | grep -P "\bps\b" | awk '{print $1}')
        if [ -n "$pid" ]; then # 如果正在运行
            echo "The process $fileName[PID $pid] is running"
            # 根据PID杀死该进程
            kill -9 $pid

            # 检查是否已死
            ps_out=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
            if [ -n "$ps_out" ]; then # 进程还存在，没死
                echo "The process $fileName[PID $ps_out] kill failed..."
                return 1
            fi
            echo "The process $fileName[PID $pid] kill successfully"

            # 重启且放在后台运行
            echo "Restart[..]"
            ./$fileName &
            # 判断是否启动成功(进程是否存在)
            ps_out2=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
            if [ -n "$ps_out2" ]; then # 进程确实启动成功
                echo "Restart[OK] PID=$ps_out2"
                return 0
            fi

        else # 没有在运行
            # 启动程序，后台运行
            echo "Start[..]"
            ./$fileName &
            # 判断程序是否启动成功
            pid=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
            
            if [ -n "$pid" ]; then # 如果正在运行，说明启动成功
                echo "Start[OK]"
                return 0
            else # 没有在运行，说明启动失败
                echo "Start[Failed]"
                return 1
            fi
            
        fi

    fi
}

if [ 0 -eq $# ]; then # 如果未传参，则执行该目录下所有可执行文件
    for file in $(ls | grep -v *.sh)
    do
        if [ -x $file ]; then # 如果文件可执行
            start $file
            echo "----------------------------------"
        fi
    done
else # 如果传参，则将参数作为可执行文件名来执行
    for i in $*
    do
        start $i
        echo "----------------------------------"
    done
fi
```

### 关闭目录下所有可执行文件

```shell
#!/bin/bash

##
# 关闭可执行程序的脚本
# 无参数：关闭当前目录下所有可执行文件
# 有参数：将参数作为可执行文件名来关闭相应文件
# 示例：
# 无参 bash stop.sh
# 有参 bash stop.sh a b c       
##

function stop()
{
    fileName=$1
    echo "fileName: $fileName"
    if [ -x $fileName ]; then # 如果文件存在且可执行
        pid=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
        if [ -n "$pid" ]; then # 如果正在运行
            echo "The process $fileName[PID $pid] is running"
            # 根据PID杀死该进程
            kill -9 $pid

            # 检查是否已死
            ps_out=$(ps | grep -P "\b$fileName\b" | awk '{print $1}')
            if [ -n "$ps_out" ]; then # 进程还存在，没死
                echo "The process $fileName[PID $ps_out] kill failed..."
                return 1
            fi
            echo "The process $fileName[PID $pid] kill successfully"
            return 0
        else # 没有在运行
            echo "The process $fileName is not running"
            return 0
        fi

    fi
}


if [ 0 -eq $# ]; then # 如果未传参，则关闭该目录下所有可执行程序
    for file in $(ls | grep -v *.sh)
    do
        if [ -x $file ]; then # 如果文件可执行
            stop $file
            echo "----------------------------------"
        fi
    done
else # 如果传参，则将参数作为可执行文件名来关闭
    for i in $*
    do
        stop $i
        echo "----------------------------------"
    done
fi
```

