# electron安装踩坑记录

[electron官网](https://electronjs.org/)

[electron官方文档](https://electronjs.org/docs)

## 配置镜像

找到C:\Users\{用户名}\.npmrc，添加自定义镜像

`electron_mirror="https://npm.taobao.org/mirrors/electron/"`

## 安装electron

安装最新版：`npm install -g electron`（安装失败，提示一个zip文件没有权限）

安装指定版本：`npm install -g electron@6.0.0`（安装成功）

可以添加--verbose参数显示下载进度。

## electron脚手架

安装electron脚手架：`npm install -g electron-forge`

创建项目：`electron-forge init myDemo`

启动项目：`npm start`

## 参考

> [Electron](https://www.jianshu.com/p/9a12d3b06394)
>
> [Electron安装失败](https://blog.csdn.net/mocoe/article/details/86751925)

