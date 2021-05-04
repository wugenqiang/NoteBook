# Typora+PicGo+Gitee实现图片上传功能

## 前言

> 使用举例：

![](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420192754.gif)

好了，功能是不是很满意？节省了很多时间是不是，很 nice！下面来具体实现：

## 建立 Gitee 图床

> 注册 gitee 账号并创建一个仓库当图床

（1）注册或登陆 Gitee

Gitee 官网网址：https://gitee.com/

注册账号在这里就不说明了啊，注册好账号之后登陆 Gitee

（2）新建仓库当图床

![image-20200420194749470](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420194750.png)

然后改图片中的三处：

![image-20200420195037189](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420195038.png)

因为我已经建立了 PictureBed 这个仓库，所以提示已经存在。

## 生成私人令牌

点击设置里的私人令牌，点击生成私人令牌

![image-20200420195308681](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420195310.png)

![image-20200420195358945](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420195400.png)

提交即可，复制令牌，可以写在 text 文本中，稍后在 Gitee 图床配置中会用到！

!> 注：令牌只会显示一次，如果不复制的话，就只能重新修改令牌，步骤：修改 --> 重新生成令牌

## 安装 PicGo

这是一款图片上传的工具，目前支持微博图床，七牛图床，腾讯云，又拍云，GitHub，Gitee等图床，在这里，我们使用 Gitee 作为图床。

> 下载 PicGo

下载链接：https://github.com/Molunerfinn/picgo/releases

选个自己喜欢的版本，点击进入，找到后缀 `.exe` 的，点击后自动下载。或者直接使用最新版。

![image-20200420193736920](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420193738.png)

## PicGo 配置 Gitee 图床

（1）下载 Gitee 插件

注：若没有安装 node.js ，则会安装不了插件。因为插件下载需要使用到 node.js 的 npm！

> 安装 node.js

node.js 官网下载链接：https://nodejs.org/zh-cn/

安装好之后，打开 PicGo 软件，点击插件设置，搜索 gitee，选择第一个即可，右边的插件也可以，配置过程也差不多

![image-20200420204736134](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420204737.png)

（2）配置 Gitee 图床

首先在 PicGo 设置中选择 Gitee 图床

![image-20200420204908684](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420204910.png)

然后在图床设置中进行配置 Gitee 图床

![image-20200420205320933](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420205322.png)

点击确定，就可以使用了，如果只想上传图片，到这一步就可以了，不过我还是推荐你继续往下看，因为真的很提高开发效率！

## Typora 配置 Gitee 图床

使用这一步，首先要下载安装 Typora，官网地址：https://www.typora.io/ 直接安装即可，操作简单。

安装好 Typora 之后，打开进入 Typora，点击上方目录：文件 --> 偏好设置  -->  图像 --> 配置图床

![image-20200420210514149](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420210515.png)

关键一步：

当点击验证图片上传选项时，会提示你使用下面网址上传，记住它！比如我的是 http://127.0.0.1:36677/upload，要保证这里的地址和 PicGo 中的上传地址一致，所以要去 PicGo 中去验证，不一样就将 PicGo 中的地址改成这里的就可以了。

![image-20200420210648822](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420210650.png)

到 PicGo 中去验证：

点击 PicGo 设置 --> 设置 Sever，若和 Typora 中图片上传地址不一样，改成 Typora 中的监听端口即可，然后确认。

![image-20200420211120698](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200420211122.png)

> 测试使用

去前言部分看效果，测试嘛，你试试就知道啦！