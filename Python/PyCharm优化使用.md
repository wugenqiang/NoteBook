# PyCharm 优化使用

## 设置 Python 路径（解释器设置）

1、打开设置对话框

点击File --> settings，弹出设置对话框

2、设置 Python 路径（解释器设置）

点击 Project --> Project Interpreter，在右侧 Project Interpreter 下拉，选择 python 路径（若没有，选择 show all），实现 pycharm的 python 路径设置。

![image-20200517235214785](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517235215.png)

然后如下图操作即可

![image-20200517235401232](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517235402.png)

设置成功显示下图

![image-20200517235457258](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200517235458.png)

## 编码设置

Python 的编码问题由来已久，为了避免一步一坑， Pycharm 提供了方便直接的解决方案
在 IDE Encoding、Project Encoding、Property Files 三处都使用 UTF-8 编码，同时在文件头添加

```python
#-*- coding: utf-8 -*
```

![image-20200518000023055](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518000024.png)

## 快捷键风格

对于常用的快捷键，可以设置为自己熟悉的风格，我选的是 Eclipse。

File --> Setting --> Keymap --> Keymaps --> XXX --> Apply

![image-20200518000651606](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518000652.png)

## 改变字体大小

1、修改代码栏字体

通过 File --> Setting --> Editor --> Font 调节

2、修改菜单栏列表框字体

通过 setting>>> 在搜索框搜 Appearance，勾选 Override default fonts by(not recommended)

3、鼠标改变字体

浏览器的时候我们习惯于 Ctrl + 鼠标滚轮改变字体大小，很多编辑工具也提供，那么 PyCharm 中支持吗？也是支持的，只是默认不开启，可以设置

File --> Setting --> Editor --> General

![image-20200518001247655](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518001248.png)

## 文件模板

设置路径：

File --> Settings --> Editor --> File and Code Templates --> Python Scripts

输入信息：

```python
#!/usr/bin/env python3
# -*- coding: utf-8 -*-

"""
@Time        : ${DATE}
@Author      : ${USER}
@File        : ${NAME}
@Description : 
"""
```

说明：

在 windows 上，第一行有没有都不会造成影响（ Windows 更具扩展名来判断文件类型），Linux 上执行文件时是 ./test.py 的形式，所以需要加上解释器的路径信息，告知用何种方式执行这个文件。

这种是为了防止用户并不是将 python 装在默认的 /usr/bin 路径里，当系统看到这行代码时，会到 env 设置里查找 python 的安装路径，再调用对应路径下的解释器程序完成操作。

第二行中，指定编码形式为 utf-8，让解释器以这种编码形式读取源代码。因为 Python2 默认使用的是 ASCII，所以并不支持中文，使用中文会报错。

而在 python3 已经默认使用了 utf-8 的编码形式，所以第二行对 python3 来说是忽略的，有没有都一样。



如图：

![image-20200518084010759](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518084011.png)

测试：

![image-20200518084104834](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518084105.png)

## 设置提示函数及其参数和使用

File --> Settings --> Editor --> Code Completion

![image-20200518104823559](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518104825.png)

鼠标放到函数名或者按住 ctrl 即可查看

## 设置自动提示功能

File --> Settings --> Editor --> Code Completion

![image-20200518110552692](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200518110553.png)

## 打出表情符号

按住 `win + 。` 键

效果图：

![image-20200520161932850](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200520161934.png)