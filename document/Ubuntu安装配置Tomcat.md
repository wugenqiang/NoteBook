# Ubuntu 安装配置Tomcat

## 下载

官网：https://tomcat.apache.org/download-80.cgi#8.5.47

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191029155953.png)

## 上传

FTP上传压缩包

## 解压

`tar -xvf apache-tomcat-8.5.47.tar.gz`

## 配置

`vim /etc/profile`

配置环境变量

```properties
## Tomcat
CATALINA_HOME=/opt/apache-tomcat-8.5.47
CATALINE_BASE=/opt/apache-tomcat-8.5.47
TOMCAT_HOME=/opt/apache-tomcat-8.5.47
export CATALINA_HOME CATALINE_BASE TOMCAT_HOME
```

