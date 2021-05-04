# Ubuntu搭建WordPress博客

Date: 2018/8/28

## 1. 安装Nginx

```
apt-get update
apt-get install nginx
```

使用浏览器访问当前IP，显示Welcome to nginx即为成功

## 2. 安装MySQL

```
apt-get install mysql-server
```

## 3. 安装PHP7

```
apt-get install php-fpm php-mysql
```

## 4. 配置Nginx使用PHP7

修改Nginx的配置文件来使用PHP processor来处理动态内容。
修改Nginx的配置文件：

```
vim /etc/nginx/sites-available/default
```

增加index.php

```
# Add index.php to the list if you are using PHP
index index.php index.html index.htm index.nginx-debian.html;
```

写入当前IP

```
server_name 10.0.2.15;
```

```
# pass the PHP scripts to FastCGI server listening on 127.0.0.1:9000
#
location ~\.php$ {
	include snippets/fastcgi-php.conf;
#
#	# With php7.0-cgi alone:
#	fastcgi pass 127.0.0.1:9000;
#	# With php7.0-fpm;
	fastcgi_pass unix:/run/php/php7.0-fpm.sock;
}

# deny access to .htaccess files, if Apache's document root
# concurs with nginx's one
#
location ~/\.ht {
	deny all;
}
```

重启Nginx启动新配置文件：

```
/etc/init.d/nginx restart
```

## 5. 验证PHP与Nginx集成是否成功

添加一个info.php:  (这里的 /var/www/html/ 对应配置文件中root的路径)

```
vim /var/www/html/info.php
```

内容为：

```
<?php phpinfo(); ?>
```

访问   IP地址/info.php   出现页面即为成功

## 6. 下载WordPress

```
wget http://wordpress.org/latest.tar.gz
```

解压

```
tar -xzvf latest.tar.gz
```

注意：在虚拟机上下载和解压时，有可能都存放在Desktop里，此时需要将解压后的wordpress文件夹移动到root目录下即可。

## 7. 创建WordPress需要的数据库和用户

使用第二部分创建MySQL时设置的root密码登录MySQL：

```
mysql -u root -p
```

创建数据库：

```
CREATE DATABASE wordpress;
```

创建用户：

```
CREATE USER wordpress@localhost;
```

设置密码：

```
SET PASSWORD FOR wordpress@localhost=PASSWORD("your password");
```

配置权限：

```
GRANT ALL PRIVILEGES ON wordpress.* TO wordpress@localhost IDENTIFIED BY 'your password';
```

刷新权限配置：

```
FLUSH PRIVILEGES;
```

退出MySQL：

```
QUIT;
```

## 8. 配置Wordpress

重命名示例文件wp-config（**此处的路径/root/wordpress对应你自己的存放路径**）

```
mv /root/wordpress/wp-config-sample.php /root/wordpress/wp-config.php
```

修改配置文件内容： 
修改的内容包括DB_NAME，DB_USER，DB_PASSWORD以及下面的唯一key，其中前三个是在第二步自己设置的内容，唯一key可以直接去它提供的网站上拷贝，修改后的文件如下所示： 

![](https://keyon-photo-1256901694.cos.ap-beijing.myqcloud.com//markdown20191210212627.png)

## 9. 配置Nginx

将wordpress里面的内容拷贝到Nginx对应root路径下（在第二部分搭建Nginx+MySQL+PHP7环境有修改过这个文件）：

```
cp -r /root/wordpress/* /var/www/html
```

修改权限：

```
chown -R www-data:www-data /var/www/html
```

重启Nginx：

```
/etc/init.d/nginx restart
```

## 10. 安装Wordpress

全部搞定后，访问你的ip或者是域名，进入安装界面
以后登录后台只需访问ip+wp-admin 即可。