# Ubuntu开机自启动脚本配置

以开机自启动一个SpringBoot Web项目为例。

## 1. 创建sh脚本

```
vim start.sh
```

## 2. 脚本内容

```sh
#! /bin/sh
### BEGIN INIT INFO
# Provides:        start.sh
# Required-start: $local_fs $remote_fs $network $syslog
# Required-Stop: $local_fs $remote_fs $network $syslog
# Default-Start:   2 3 4 5
# Default-Stop:         0 1 6
# Short-Description:
# Description:
### END INIT INFO

# 执行内容（根据个人需求修改）
cd /carmanager
nohup java -jar carmanager-0.0.1-SNAPSHOT.jar --spring.profiles.active=release &
```

## 3. 设置权限

```
sudo chmod 755 start.sh
```

## 4. 移动脚本文件至启动目录

```
sudo mv start.sh /etc/init.d
```

## 5. 更新脚本执行优先级

```
cd /etc/init.d
sudo update-rc.d start.sh defaults 90
```

OK。