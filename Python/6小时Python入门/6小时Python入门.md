# 6 小时 Python 入门

> 以下操作均在 Windows 环境下进行操作，先说明一下哈

## 一、安装 Python

1、官网下载 Python

进入官网（[https://www.python.org](https://www.python.org/)），点击 Downloads，选择要下载的版本：

![image-20200517223148826](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223149.png)

2、安装 Python

安装时注意下图勾选部分一定要勾选：

![image-20200517223527044](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223528.png)



## 二、安装代码编辑器 PyCharm

1、官网下载 PyCharm

进入官网（[https://www.jetbrains.com/pycharm](https://www.jetbrains.com/pycharm/)），点击 Downloads，选择要下载的版本：

![image-20200517223348661](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517223349.png)

2、安装 PyCharm

设置安装路径之后，一直点 next 即可。

![image-20200517224622654](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517224624.png)

3、优化 PyCharm 使用

* [PyCharm 优化使用](Python/PyCharm优化使用.md)

## 三、HelloWorld

创建第一个项目 HelloWorld --> 创建文件 app.py --> 写入代码：

```python
print("HelloWorld")
```



效果图：

![image-20200517225658342](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517225659.png)

## 四、Python 语法

看语法部分之前，推荐直接看下面入门练习题，潜移默化中对 Python 基本语法会有一定了解之后，再回来看这一部分，会更加熟悉 Python 的使用！

* [Python 语法使用要熟记于心](Python/Python语法.md)



## 五、入门练习题

### 1.打印 10 个 *

> 使用到表达式

```python
print('*' * 10)
```

### 2.打印价格

> 使用到变量

```python
price = 10
print(price)
```

### 3.描述医院病人的信息

```python
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
@Time        : 2020/5/18
@Author      : WuGenQiang
@File        : hospital
@Description : 描述医院病人的信息
"""
full_name = 'John Smith'
age = 20
is_new = True
```

### 4.接收用户输入，打印问候信息

> 使用输入函数 input() 进行输入

```python
name = input('what is your name?')
print('Hi ' + name)
```

测试：

![image-20200518092805760](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518092806.png)

### 5.打印年龄

> 使用到强制类型转换

```python
birth_year = input('Birth year: ')
age = 2019 - int(birth_year)
print(age)
```

使用 type() 打印数据类型：

```python
print(type(birth_year))
```

### 6.字符串打印

> 三种字符串表达形式

```python
course_1 = 'Python for "Beginners"'
print(course_1)
course_2 = "Python is my 'love'"
print(course_2)
course_3 = '''
Hi John
welcome to python world!
'''
print(course_3)
```

效果呈现：

![image-20200518100439122](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518100440.png)

获取 course_1 的第一个索引值：

```python
print(course_1[0])
```

获取 course_1 的最后一个索引值：

```python
print(course_1[-1])
```

那么获取倒数第二个索引值呢：

```python
print(course_1[-2])
```

返回索引为 0 - 2 的值：

```python
print(course_1[0:3])
```

返回索引 0 以及 0 之后的所有字符：

```python
print(course_1[0:])
```

返回索引小于 5 的所有字符：

```python
print(course_1[:5])
```

返回所有字符：

```python
print(course_1[:])
```

返回从第 2 位开始，不包括最后一位字符的字符串：

```python
print(course_1[1:-1])
```

### 7.格式化字符串

```python
first = 'WuGenQiang'
last = 'happy'
# 字符串拼接
message = first + ' [' + last + '] is a coder'
# 格式化字符串
msg = f'{first} [{last}] is a coder'
print(message)
print(msg)
```

### 8.字符串方法使用

（1）len() 函数：求字符串长度

```python
course = 'Python for Beginners'
# 字符串长度
print(len(course))
```

（2）upper() 函数：转换成大写字母

```python
# 转换成大写字母
print(course.upper())
```

（3）lower() 函数：转换成小写字母

```python
# 转换成小写字母
print(course.lower())
```

（4）find() 函数

```python
# 找字符返回第一个匹配的索引值
print(course.find('n'))
```

找不到返回 -1，并且区分大小写

（5）replace() 函数

```python
# 替换字符
print(course.replace('Beginners', 'Absolute Beginners'))
```

（6）in 使用：产生布尔值 False or True

```python
# 判断字符串是否在字符串里
print('Python' in course)
```

### 9.算术运算符

举例：

```python
print(10 / 3)
print(10 % 3)
print(10 * 3)
# 10 的 3 次方
print(10 ** 3)

x = 10
x = x + 3
x += 3
print(x)
```

思索下面 x 为多少：

```python
x = 10 + 3 * 2 ** 2
```

答案是 22，因为取幂运算符是优先的，所以先算 2 的 2 次方

* 取绝对值

```python
print(abs(-2.9))
```

### 10.引入数学模块

```python
import math
print(math.floor(2.9))
```

### 11.条件语句的使用

> 使用 if - elif - else

```python
is_hot = False
is_cold = True
if is_hot:
    print("It's a hot day")
elif is_cold:
    print("It's a cold day")
else:
    print("It's a lovely day")
print("Enjoy your day")
```

当条件多个并且是 "and" 的关系时，使用：

```python
has_high_income = True
has_good_credit = True
if has_good_credit and has_high_income:
    print("Eligible for loan")
```

若当条件多个并且是 "or" 的关系时，使用：

```python
has_high_income = False
has_good_credit = True
if has_good_credit or has_high_income:
    print("Eligible for loan")
```

如何使用 "not"，看下面：(not 相当于取反)

```python
has_good_credit = True
has_criminal_record = False
if has_good_credit and not has_criminal_record:
    print("Eligible for loan")
```

### 12.打印天气

> 使用比较运算符

```python
temperature = 30
if temperature > 30:
    print("It's a hot day")
else:
    print("It's a cold day")
```

### 13.打印名字是否符合要求

> 使用比较运算符

```python
name = "James"
if len(name) < 3:
    print("Name must be at least 3 character")
elif len(name) > 50:
    print("Name must be a maximum of 50 character")
else:
    print("Name looks good")
```

### 14.判断体重

```python
weight = int(input('weight: '))
unit = input('(L)bs or (K)g: ')
if unit.upper() == "L":
    converted = weight * 0.45
    print(f"You are {converted} kilos")
else:
    converted = weight / 0.45
    print(f"You are {converted} pounds")
```

### 15.打印 1 - 5

> 使用到 while 循环语句或者 for 循环语句

```python
i = 1
while i <= 5:
    print(i)
    i = i + 1
print("Done")
```

### 16.猜数（秘密号码）

```python
secret_number = 9
guess_count = 0
guess_limit = 3
while guess_count < guess_limit:
    guess = int(input('Guess: '))
    guess_count += 1
    if guess == secret_number:
        print('You won!')
        break
else:
    print('Sorry, you failed')
```



### 17.Car game

```python
command = ""
started = False

while True:
    command = input("> ").lower()
    if command == "start":
        if started:
            print("Car is already started!")
        else:
            started = True
            print("Car started...")
    elif command == "stop":
        if not started:
            print("Car is already stopped!")
        else:
            started = False
            print("Car stopped.")
    elif command == "help":
        print("""
        start - to start the car
        stop - to stop the car
        quit - to quit
        """)
    elif command == "quit":
        break
    else:
        print("Sorry, I don't understand that!")
```



## 六、参考资料

* [2020 最新 Python 教程 6 小时入门](https://www.bilibili.com/video/BV1h64y1M7UC)