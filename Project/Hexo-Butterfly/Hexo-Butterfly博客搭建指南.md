# Hexo - Butterfly 博客搭建指南

## Hexo 框架搭建

### Hexo 环境部署

Hexo 是一个基于 Node.js 快速、简洁且高效的博客框架，可以将 Markdown 文件快速的生成静态网页，托管在 GitHub Pages 上。

1.搭建所需软件

- 各个软件官网：
  - git：[http://git-scm.com/](http://git-scm.com/)
  - node.js：[http://nodejs.org/](http://nodejs.org/)

2.部署安装 git 和 node.js

（1）安装 git，输入：`git --version 出现版本号即成功`

![image-20200714111221978](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111230.png)

（2）安装 node.js，`打开 Git Bash，输入：`npm -v 出现版本号即成功

![image-20200714111416774](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111418.png)

3.安装 Hexo 框架

输入命令：

```
npm install -g hexo-cli
```

![image-20200714111914331](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111915.png)

检查是否安装 [Hexo](https://hexo.io/zh-cn/) 完成,查询是否成功，显示`hexo-cli`版本就说明成功了

输入命令：

```
hexo -v
```

![image-20200714112108073](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714112109.png)

### Hexo 项目创建

* 第一步：现在假设我要创建一个名为 `Hexo-Butterfly-Plus` 的项目，项目目录就放在：e:/work/ 目录下，所以我们在 e:/work/ 目录下创建一个 `Hexo-Butterfly-Plus` 目录。现在这个项目的全路径是：e:/work/Hexo-Butterfly-Plus，因为我在之前建好了，在这里就不再重新建啦 🔒

* 第二步：打开 Git Bash，进入该目录：cd e:/work/Hexo-Butterfly-Plus，然后执行：hexo init，这个时间也会比较长，也有可能要等几分钟，有显示 WARN 也不用管

  ![image-20200714113209533](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113210.png)

* 最后执行：npm install，有显示 WARN 也不用管

  ![image-20200714113344407](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113346.png)

* 安装完成之后，e:/work/Hexo-Butterfly-Plus 目录结构是这样的：

  ![image-20200714113418616](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113419.png)

### Hexo 本地测试

- 现在我们启动 hexo 本地服务，看下默认的博客是怎样的，命令：`hexo server 或者输入 hexo s`

  ![image-20200714113803823](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113809.png)

- 现在用浏览器访问：[http://127.0.0.1:4000/](http://127.0.0.1:4000/)，效果如下图

  ![image-20200714113930603](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113932.png)

- 如果要停止 hexo 服务：在 Git Bash 下按 `Ctrl + C` 即可

## Butterfly 主题使用

`hexo-theme-butterfly` 是 [Jerry](https://github.com/jerryc127/hexo-theme-butterfly) 大佬得力之作，也是我觉得最适合写阅读论文感悟总结的主题之一。

### 主题安装

在你的博客根目录输入命令：

```
git clone -b master https://github.com/jerryc127/hexo-theme-butterfly.git themes/butterfly
```

![image-20200714115054973](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714115056.png)

### 应用主题

修改站点配置文件 _config.yml，把主题改为 butterfly

```yaml
theme: butterfly
```





## 