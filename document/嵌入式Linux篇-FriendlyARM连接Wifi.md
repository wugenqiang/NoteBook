# 嵌入式Linux篇-FriendlyARM连接Wifi

## 查看Wifi设备

```shell
nmcli dev
```

## 开启Wifi设备

```shell
nmcli r wifi on
```

## 扫描附近Wifi热点

```shell
nmcli dev wifi
```

## 连接到指定Wifi热点

```shell
nmcli dev wifi connect "SSID" password "PASSWORD" ifname wlan0
```

## 查看IP地址

```shell
ifconfig
```

