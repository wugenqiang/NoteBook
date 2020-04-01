# 利用SRS速建RTMP直播服务器

## RTMP协议

RTMP协议是一种应用层协议，用来解决多媒体传输流的多路复用和分包的问题。
协议底层依靠TCP来保证信息传输的可靠性。
协议详细介绍：https://www.jianshu.com/p/d511d59b185c

实现RTMP流媒体服务器的方案有很多，比如nginx-rtmp、srs（simple rtmp server）。

## SRS（Simple RTMP Server）

SRS是一个国人编写的开源的RTMP/HLS流媒体服务器。

[Github - SRS](https://github.com/ossrs/srs)

### Usage

Step1：get SRS

```
git clone https://github.com/ossrs/srs &&
cd srs/trunk
```

Step2：build SRS, **Requires Centos6.x/Ubuntu12 32/64bits**

```
./configure && make
```

Step3：start SRS

```
./objs/srs -c conf/srs.conf
或者
./objs/srs -c conf/realtime.conf
```

Step4：

OBS推流地址：rtmp://154.8.212.69/live

密钥：livestream

访问URL：`rtmp://154.8.212.69/live/livestream`

## SRS与nginx-rtmp性能比较

https://blog.csdn.net/caoshangpa/article/details/79972297

## Web前端获取推流

在搭建rtmp服务器后，在Web平台前端利用Video.js实现推流。
https://blog.csdn.net/jx950915/article/details/84971907