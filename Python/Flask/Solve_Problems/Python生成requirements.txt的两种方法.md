# Python生成requirements.txt的两种方法

## 方法一：导出当前环境的依赖包

> 使用`pipreqs`
>
> `--encoding=utf8`为使用utf8编码，避免编码报错
> `--force` 强制执行覆盖生成目录下的requirements.txt

```python
# 安装
python3 -m pip install pipreqs
# 在当前目录生成
pipreqs . --encoding=utf8 --force
```

执行以上命令，会生成requirements.txt，内容格式如下：

![](https://gitee.com/wugenqiang/images/raw/master/image/1645508733044.png)



## 方法二：导出全部环境使用的依赖包

> 使用`freeze`

```python
python3 -m pip freeze > requirements.txt
```



## requirements.txt使用方式

在当前环境，导入依赖包

```python
# 利用 pip 安装依赖（- i 表示指定清华源，默认源下载过慢）
python3 -m pip install -r requirements.txt -i https://pypi.tuna.tsinghua.edu.cn/simple/
```



⚠️注意：

- 导出都需要在当前项目的根目录执行；
- 执行结束会自动在根目录生成requirements.txt

