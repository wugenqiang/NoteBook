# 安装Anaconda

Step 1: 下载Miniconda

官网：https://www.anaconda.com/

Step 2: 安装Miniconda

```bash
bash Miniconda3-latest-Linux-x86_64.sh
```

如果默认情况不想进入base虚拟环境，请执行：

```
conda config --set auto_activate_base false
```

Step 3: 更改镜像源

https://blog.csdn.net/m0_37605642/article/details/119476679

或者

https://blog.csdn.net/weixin_45270001/article/details/124180823

打开终端，配置conda镜像源：

```
# 执行下面的指令，在home/username/ 路径下生成.condarc文件
conda config --set show_channel_urls yes 
# 修改.condarc 中的内容，使用下面的指令打开.condarc文件
sudo vim .condarc 
# 使用下面的指令创建新conda环境
conda create --name 环境名称 python==版本号
# 使用下面的指令查看所有的环境
conda info -e
# 使用下面的指令激活环境
conda activate 环境名称
# 更换pip源，第一条指令更新pip指令，第二条更新pip源
python -m pip install -i https://pypi.tuna.tsinghua.edu.cn/simple --upgrade pip
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple
```



./condarc内容：

```
channels:
  - defaults
show_channel_urls: true
default_channels:
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/main
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/r
  - https://mirrors.tuna.tsinghua.edu.cn/anaconda/pkgs/msys2
custom_channels:
  conda-forge: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  msys2: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  bioconda: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  menpo: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  pytorch: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  pytorch-lts: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
  simpleitk: https://mirrors.tuna.tsinghua.edu.cn/anaconda/cloud
```



很有效：

```
pip install packName -i http://pypi.douban.com/simple --trusted-host pypi.douban.com
```



头疼：

```
uWSGI==2.0.20
```

