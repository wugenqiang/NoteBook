# Nginx

Step 1: 安装，nginx成功安装后输入公网ip或域名就能看到Welcome to Nginx的页面。

```
sudo apt install nginx
```

Step 2: 重新编写nginx默认配置文件。这里可以先备份一下default.bak文件。

```
sudo cp /etc/nginx/sites-enabled/default /etc/nginx/sites-enabled/default.bak
```

下面举一个例子：

```
sudo rm /etc/nginx/sites-enabled/default
sudo nano /etc/nginx/sites-enabled/example
------------example配置文件内容----------------
server{
    listen 80 default_server;
    server_name _;  # 服务器有域名的话下划线可以写成域名
    access_log /var/log/nginx/access.log;
    error_log /var/log/nginx/error.log;
 
    location / {
        proxy_pass http://127.0.0.1:8000;
        proxy_redirect off;
        proxy_set_header Host $host;
        proxy_set_header X-Real-IP $remote_addr;
        proxy_set_header X-Forwarded-For $proxy_add_x_forwarded_for;
        proxy_set_header X-Forwarded-Proto $scheme;
    }
 
    location /static{   #处理静态文件夹中的静态文件
        alias /home/moming/bluelogtry/bluelogtry/static/;
        expires 30d;   #设置缓存过期时间
    }
}
```

编写完配置文件后测试语法正确性。

```
sudo nginx -t
```

出现 

nginx: the configuration file /etc/nginx/nginx.conf syntax is ok
nginx: configuration file /etc/nginx/nginx.conf test is successful

就代表没问题了，然后重启nginx。
![](../../images/20220508-01-云服务器.png)

重启nginx

```
sudo service nginx restart
```

