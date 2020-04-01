# Ubuntu🐧搭建 [JavaWeb+MySQL] 项目环境

## MySQL环境搭建

### 1. 安装MySQL

```
sudo apt-get install mysql-server
```

### 2. 配置MySQL

配置MySQL的目的，一是为了能够远程访问数据库，二是为了让服务器上的项目能成功连接数据库。

#### 开放3306端口

查看3306端口是否对外开放

```
$ netstat -an | grep 3306
tcp    0   0 127.0.0.1:3306      0.0.0.0:*         LISTEN
```

从上面可以看出，mysql的3306端口只是监听本地连接127.0.0.1。我们做下修改，使其对外其他地址开放。

打开/etc/mysql/mysql.conf.d/mysqld.cnf（或者是/etc/mysql/my.cnf）文件

```
$ vim /etc/mysql/mysql.conf.d/mysqld.cnf
```

找到bind-address = 127.0.0.1这一行，注释掉。

#### 授权用户远程访问

为了让访问mysql的客户端的用户有访问权限，我们可以通过如下方式为用户进行授权：
首先进入mysql（如果用root用户登录，此时直接输入mysql是可以直接不用密码就能进入的，后面会讲如何设置，使root用户也需要输入密码才能访问mysql，至于原因，也会在后面讲）

```
$ mysql
```

#### 重启mysql服务，使配置生效

```
$ /etc/init.d/mysql restart
```

#### 配置root权限

还是进入mysql命令行
配置权限：

```
mysql > use mysql;
mysql > grant all privileges on *.* to "root"@"%" identified by "密码";
mysql > grant all privileges on *.* to "root"@"localhost" identified by "密码";
mysql > flush privileges;
```

#### 修改root用户的plugin属性⭐

（如果不设置这一步，虽然能远程访问数据库，但是本地项目启动不起来，报create connection error错误）

```
mysql > update mysql.user set authentication_string=PASSWORD('密码'), plugin='mysql_native_password' where user='root';
mysql > flush privileges;
```

这是配置后的用户：

```
mysql > select user, host, plugin from user;
```

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com//markdown20191210205742.png)

## 项目端口开放

### 控制台开放项目使用的端口

进入腾讯云/阿里云控制台，管理安全组
添加一个规则：

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com//markdown20191210205909.png)

0.0.0.0/0表示任意IP可访问
TCP:60004表示开放的端口为TCP:60004
开放60004端口是由于我项目启动的端口为60004
在项目配置文件中设置（SpringBoot项目）：
application-release.properties:

```yaml
server.port=60004
server.servlet.context-path=/carManager
#数据库配置 关于无法解析驱动问题的解决方案：设置mysql的准确依赖版本
spring.datasource.driverClassName=com.mysql.jdbc.Driver
spring.datasource.url=jdbc:mysql://localhost:3306/carmanager?useUnicode=true&characterEncoding=UTF-8&useSSL=false
spring.datasource.username=root
spring.datasource.password=yan5675609123
#连接池
spring.datasource.type=com.alibaba.druid.pool.DruidDataSource
```

## 项目打包

idea中使用maven打包项目

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com//markdown20191210210238.png)

打包的JAR包放在项目根目录下的target文件夹下

carmanager-0.0.1-SNAPSHOT.jar

## 项目部署

在服务器根目录新建一个目录

```
$ mkdir /carmanager
```

设置该目录的访问权限，使FTP上传文件的时候有权限访问

```
$ chmod 0757 /carmanager
```

通过FTP上传JAR包到服务器上

运行项目，配置环境更改为release版本下的环境：

```
nohup java -jar carmanager-0.0.1-SNAPSHOT.jar --spring.profiles.active=release &
```

## 重新部署的流程

更新项目后要重新部署新的版本，流程如下：

1. ps -aux | grep carmanager 查看进程PID

2. kill -9 PID 结束旧进程

3. nohup java -jar carmanager-0.0.1-SNAPSHOT.jar --spring.profiles.active=release & 以release版本重新部署

