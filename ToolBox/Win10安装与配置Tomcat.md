# Tomcat安装与配置（Win10）

## 下载

Tomcat官网：https://tomcat.apache.org/

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191113175502.png)

Core: 64-bit Windows zip

## 解压

解压到电脑，要求路径非中文。例如 F:\Dev\apache-tomcat-9.0.27

## 配置环境变量

新增变量：

- 变量名：CATALINA_BASE
- 变量值：tomcat根目录，例如 F:\Dev\apache-tomcat-9.0.27



- 变量名：CATALINA_HOME
- 变量值：tomcat根目录，例如 F:\Dev\apache-tomcat-9.0.27

在Path环境变量中添加：

- %CATALINA_HOME%\lib
- %CATALINA_HOME%\bin

## 验证

打开命令行，输入startup启动tomcat。

等待日志输出完毕，服务器启动后，打开浏览器访问 localhost:8080，若成功打开Tomcat成功提示界面则配置完毕。