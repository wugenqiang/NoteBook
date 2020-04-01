# IDEA篇-非Maven项目打War包与部署

## 打War包

### 打开Project Structure

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191215164405.png)

### 打包方式：Archive

设置打包方式为Archive。

> - web application exploded，这个是以文件夹形式（War Exploded）发布项目，选择这个，发布项目时就会自动生成文件夹在指定的output directory, 
> - web application archive，就是war包形式，每次都会重新打包全部的,将项目打成一个war包在指定位置；

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191215164839.png)

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191215165354.png)

## 部署

找到服务器tomcat根目录下的webapps

将项目war包放入webapps目录下。

不用重启tomcat，等待tomcat自动重新加载war包内容。