# IDEA 的使用

## IDEA 更新使用

### IDEA 2019.3.3

> 官网下载之后，采用[激活方式](/ToolBox/IDEA?id=idea-201934)才能激活！百度云链接下载直接激活！推荐使用百度云链接下载，集成了很多好用的插件和功能！

* 下载一：[官网下载 https://www.jetbrains.com/idea/](https://www.jetbrains.com/idea/)

* 下载二：百度云链接：https://pan.baidu.com/s/1z_Z1wigY0Yt3xfTIg_Idhg 
  提取码：4clm

* 汉化包链接：https://pan.baidu.com/s/1KMkgzFPdxcd_Kinv65yZmg 
  提取码：pldz 

### IDEA 2019.3.4

> IDEA 2019.3.3 和 IDEA 2019.3.4 激活方式如下：

* 下载 jetbrainsCrack.jar 

下载链接：https://pan.baidu.com/s/1ADriYJLu1S5BLR1XSMMbSg 
提取码：kpjy

* 将 jetbrainsCrack.jar 放入 bin 目录下

![image-20200319202304437](../images/image-20200319202304437.png)

* 启动 IDEA，点击 Configure --> Edit Custom VM Options，将下面命令复制到文件中，然后重新启动 IDEA

```
-javaagent:..\..\bin\JetbrainsCrack.jar
```

![image-20200319203202234](../images/image-20200319203202234.png)

* 点击 IDEA 菜单 Configure --> Manage License --> License Server，在 License Server 中输入 http://jetbrains-license-server 到 License Server Address 中，然后先点击 Discover Server，等待后点击下面 Actuvate 即可，接着退出重启 IDEA

```
http://jetbrains-license-server
```

![image-20200319204247679](../images/image-20200319204247679.png)

* 重新进入 IDEA 菜单 Configure --> Manage License，此时会发现 IDEA 已经给我们生成了服务器地址：

```
http://fls.jetbrains-agent.com
```

![image-20200319204839884](../images/image-20200319204839884.png)

完美撒花！

!> 不过，可能会提醒下面信息：

![image-20200323100018728](../images/image-20200323100018728.png)

解决方案：

下载文件 important.txt 放在与 JetbrainsCrack.jar 同目录 bin 下：

百度云下载链接：https://pan.baidu.com/s/1beei7a6wVFSWDrPIQeQCLA 
提取码：7ybo 

![image-20200323101805421](../images/image-20200323101805421.png)

重新打开 IDEA 刚刚提示信息就没啦，完美撒花！

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

## IDEA 注释模板设置

### 设置类注释

file --> settings --> Editor --> File and Code Templates --> Includes

![image-20200319155303619](../images/image-20200319155303619.png)

```
/**
  * @ProjectName: ${PROJECT_NAME}
  * @ClassName: ${NAME}
  * @Description: TODO(一句话描述该类的功能)
  * @Author: ${USER}
  * @Date: ${DATE} ${TIME}
  * @version v1.0
  */
```

### 设置方法注释

file --> settings --> Editor --> Live Templates

![](../images/b9054bdf67dc0c8f873390d40c03ff5a598.jpg)

```
/**
 * @Title: $enclosing_method$
 * @Description: TODO(这里用一句话描述这个方法的作用)
 * @param @param $tags$
 * @return @return $return_type$
 * @author $user$
 * @throws
 * @date $date$ $time$
 */
```









