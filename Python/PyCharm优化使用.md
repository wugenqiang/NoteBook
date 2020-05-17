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