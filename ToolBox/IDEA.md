# IDEA 的使用

## IDEA maven 配置

> maven 如今是 idea 当中必不可少的工具了，这里主要说明一下如何进行maven 配置。虽然 idea 有一些默认的 maven 配置，但是如果想要好用，最好还是自己配置一个 maven。

idea maven配置的方法和步骤如下：

* （1）官方下载一个 maven：

下载地址：http://maven.apache.org/download.html

找到 Binary zip archive => apache-maven-3.6.3-bin.zip，然后点击 apache-maven-3.6.3-bin.zip 进行下载，也可以直接点击下面的地址进行下载：

[apache-maven-3.6.3-bin.zip](https://mirror.bit.edu.cn/apache/maven/maven-3/3.6.3/binaries/apache-maven-3.6.3-bin.zip)

* （2）将下载的文件解压到自己的安装目录，比如：

D:\developer_tools\maven\apache-maven-3.6.3

![image-20200319112720427](../images/image-20200319112720427.png)

* （3）配置maven：

用编辑器打开文件 D:\developer_tools\maven\apache-maven-3.6.3\conf\settings.xml，并对文件里面的内容进行修改：

在 settings 的节点下增加镜像配置：

```xml
<mirrors>
    <mirror>
      <id>alimaven</id>
      <name>aliyun maven</name>      
      <url>http://maven.aliyun.com/nexus/content/groups/public/</url>
      <mirrorOf>central</mirrorOf>
    </mirror>
    <mirror>
       <id>repo2</id>
       <name>repo2 maven</name>      
       <url>http://repo2.maven.org/maven2</url>
       <mirrorOf>central</mirrorOf>
     </mirror>
  </mirrors>
```

* （4）修改 idea 自带maven：

打开 idea 界面的 setting 配置，配置路径如下：

File --> Settings --> Build, Execution, Deployment --> Build Tools --> Maven

将 Maven home directory 修改为 D:\developer_tools\maven\apache-maven-3.6.3，User settings file 修改为 D:\developer_tools\maven\apache-maven-3.6.3\conf\settings.xml，并将 User settings file 后面的Override进行勾选（否则不生效），然后点击Apply或OK，保存一下。

> 注：local repository 想改就改哈，就是镜像存的位置，如果要改 local repository，记得回 setting.xml 里添加：

```xml
<!--配置本地仓库路径-->
<localRepository>D:\developer_tools\maven\my_maven_local_repository</localRepository>
```

![image-20200319113540704](../images/image-20200319113540704.png)

到这里 maven 配置成功

