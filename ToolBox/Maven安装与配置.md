# Maven安装与配置

## 前提

确保JDK已安装且配置了环境变量。

## 下载

打开Maven官网：https://maven.apache.org/download.cgi

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191113172043.png)

## 解压

解压到电脑，路径要求非中文。例如 F:\Dev\apache-maven-3.6.2

## 配置环境变量

新增变量：

- 变量名：M2_HOME
- 变量值：maven根目录，例如 F:\Dev\apache-maven-3.6.2

在Path环境变量中添加：

- 内容：%M2_HOME%\bin

## 验证

打开命令行，运行mvn -v，若正常输出maven版本信息，则环境变量配置成功。

## 配置仓库

在maven根目录新建文件夹RepMaven，作为本地仓库。

打开F:\Dev\apache-maven-3.6.2\conf\settings.xml，找到\<localRepository>，将注释删除，配置路径。

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com/markdown/20191113174619.png)

## 配置国内镜像

还是settings.xml，找到mirrors标签，在该标签内添加镜像仓库。

```xml
<mirror>
    <id>alimaven</id>
    <name>aliyun maven</name>
    <url>http://maven.aliyun.com/nexus/content/groups/public/</url>
    <mirrorOf>central</mirrorOf>        
</mirror>
```

