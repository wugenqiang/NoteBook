# Ubuntu18.04.1安装配置FTP服务

> 如果使用SFTP，就不需要服务端额外配置服务。
>
> 但使用FTP的话，服务端就需要进行安装与配置FTP服务。

日常开发当然是怎么方便怎么来。两者效率相差不大，而且SFTP还更安全。

客户端连接工具推荐MobaXterm，功能很全。

或者使用浏览器，使用FTP协议访问服务器：`ftp://{IP}`

## 1. 安装FTP服务

```
apt-get install vsftpd ftp
```

## 2. 配置FTP服务

使用vim打开vsftpd.conf配置文件。

```
vim /etc/vsftpd.conf
```

输入/进入搜索模式，找到以下两个参数，取消注释让其生效。

```
write_enable=YES
utf8_filesystem=YES
```

## 3. 重启FTP服务

```
systemctl restart vsftpd
```

## 4. 验证FTP服务

服务端自身进行连接验证。

```
ftp localhost
```

输入用户名密码提示230 Login successful，进入ftp> 说明安装配置成功。