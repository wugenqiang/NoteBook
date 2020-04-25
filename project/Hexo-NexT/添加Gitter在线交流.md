# 添加 Gitter 在线交流

## Gitter 的介绍

Gitter 的功能特色

* 免费无限制：用户可以自由免费地创建、搜素、加入社区、聊天室。支持单独私人聊天、markdown 编辑、媒体文件发送等功能。
* 简单便捷：支持 Github 项目库关联创建社区，一键即可加入聊天讨论，仅在一个浏览器页面中即可查看和订阅多个聊天室。
* 对外开放：所有社区支持对外分享并可被搜索到，一个链接即可访问参与聊天讨论，用户头像显示其 GitHub 账号的相关信息。

Gitter 注册

* Gitter 国际站：https://gitter.im

## 集成代码

```js
  <!--使用 Gitter 实现一个 IM 即时通讯聊天室功能-->
  <script>
    ((window.gitter = {}).chat = {}).options = {
      room: 'enjoytoshare/community'
    };
  </script>
  <script src="https://sidecar.gitter.im/dist/sidecar.v1.js" async defer></script>
```

集成很简单，把上面的代码拷贝到 html 页面里就可以了。

## 实现步骤

下面就来实现一下：

步骤一：在 themes/next/layout/_third-party 目录下面新建 gitter.swig 文件，文件内容就是上面的集成代码。

步骤二：修改 themes/next/layout/_layout.swig文件，在第三方功能显示区域添加 gitter，添加如下代码：

```js
{% include '_third-party/gitter.swig' %}
```

![image-20200424195850415](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424195852.png)

完工，测试一下：

## 测试结果

打开 [EnjoyToShare Blog](https://wugenqiang.github.io/) 查看，右下角已经出现表明完成啦，嘿嘿嘿！

![image-20200424201537864](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424201540.png)

