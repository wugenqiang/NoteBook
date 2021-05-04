# Hexo - Butterfly 博客搭建指南

## 1 Hexo 框架搭建

### 1.1 Hexo 环境部署

Hexo 是一个基于 Node.js 快速、简洁且高效的博客框架，可以将 Markdown 文件快速的生成静态网页，托管在 GitHub Pages 上。

1.搭建所需软件

- 各个软件官网：
  - git：[http://git-scm.com/](http://git-scm.com/)
  - node.js：[http://nodejs.org/](http://nodejs.org/)

2.部署安装 git 和 node.js

（1）安装 git，输入：`git --version 出现版本号即成功`

![image-20200714111221978](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111230.png)

（2）安装 node.js，`打开 Git Bash，输入：`npm -v 出现版本号即成功

![image-20200714111416774](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111418.png)

3.安装 Hexo 框架

输入命令：

```
npm install -g hexo-cli
```

![image-20200714111914331](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714111915.png)

检查是否安装 [Hexo](https://hexo.io/zh-cn/) 完成,查询是否成功，显示`hexo-cli`版本就说明成功了

输入命令：

```
hexo -v
```

![image-20200714112108073](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714112109.png)

### 1.2 Hexo 项目创建

* 第一步：现在假设我要创建一个名为 `Hexo-Butterfly-Plus` 的项目，项目目录就放在：e:/work/ 目录下，所以我们在 e:/work/ 目录下创建一个 `Hexo-Butterfly-Plus` 目录。现在这个项目的全路径是：e:/work/Hexo-Butterfly-Plus，因为我在之前建好了，在这里就不再重新建啦 🔒

* 第二步：打开 Git Bash，进入该目录：cd e:/work/Hexo-Butterfly-Plus，然后执行：hexo init，这个时间也会比较长，也有可能要等几分钟，有显示 WARN 也不用管

  ![image-20200714113209533](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113210.png)

* 最后执行：npm install，有显示 WARN 也不用管

  ![image-20200714113344407](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113346.png)

* 安装完成之后，e:/work/Hexo-Butterfly-Plus 目录结构是这样的：

  ![image-20200714113418616](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113419.png)

### 1.3 Hexo 本地测试

- 现在我们启动 hexo 本地服务，看下默认的博客是怎样的，命令：`hexo server 或者输入 hexo s`

  ![image-20200714113803823](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113809.png)

- 现在用浏览器访问：[http://127.0.0.1:4000/](http://127.0.0.1:4000/)，效果如下图

  ![image-20200714113930603](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714113932.png)

- 如果要停止 hexo 服务：在 Git Bash 下按 `Ctrl + C` 即可

## 2 Butterfly 主题安装与使用

`hexo-theme-butterfly` 是 [JerryC](https://github.com/jerryc127/hexo-theme-butterfly) 大佬得力之作，也是我觉得最适合写阅读论文感悟总结的主题之一。

### 2.1 主题安装

在你的博客根目录输入命令：

```
git clone -b master https://github.com/jerryc127/hexo-theme-butterfly.git themes/butterfly
```

![image-20200714115054973](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714115056.png)

### 2.2 使用主题

修改站点配置文件 _config.yml，把主题改为 butterfly

```yaml
theme: butterfly
```

!> 如果你没有 pug 以及 stylus 的渲染器，请下载安装： `npm install hexo-renderer-pug hexo-renderer-stylus --save` or `yarn add hexo-renderer-pug hexo-renderer-stylus`

命令行输入 hexo s，到浏览器查看效果：

![image-20200714122432343](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714122600.png)

## 3 Butterfly 主题页面

### 3.1 Front-matter

Front-matter 是档案最上方以 --- 分隔的区域，用于指定个别档案的变数。

> 如果标注可选的参数，可根据自己需要添加，不用全部都写在 markdown 里

#### 3.1.1 Page Front-matter

```
---
title:
date:
updated:
type:
comments:
description:
keywords:
top_img:
mathjax:
katex:
aside:
aplayer：
highlight_shrink：
---
```

说明：

| 写法             | 释义                                                         |
| ---------------- | ------------------------------------------------------------ |
| title            | 【必需】页面标题                                             |
| date             | 【必需】页面创建日期                                         |
| type             | 【必需】标签、分类和友情链接三个页面需要配置                 |
| updated          | 【可选】页面更新日期                                         |
| description      | 【可选】页面描述                                             |
| keywords         | 【可选】页面关键字                                           |
| comments         | 【可选】显示页面评论模块(默认 true)                          |
| top_img          | 【可选】页面顶部图片                                         |
| mathjax          | 【可选】显示 mathjax (当设置 mathjax 的 per_page: false 时，才需要配置，默认 false) |
| katex            | 【可选】显示 katex (当设置 katex 的 per_page: false 时，才需要配置，默认 false) |
| aside            | 【可选】显示侧边栏 (默认 true)                               |
| aplayer          | 【可选】在需要的页面加载 aplayer 的 js 和 css，请参考文章下面的`音乐`配置 |
| highlight_shrink | 【可选】配置代码框是否展开(true/false)(默认为设置中highlight_shrink的配置) |



#### 3.1.2 Post Front-matter

```
---
title:
date:
updated:
tags:
categories:
keywords:
description:
top_img:
comments：
cover:  
toc:  
toc_number:
auto_open:
copyright:
mathjax:
katex:
aplayer：
highlight_shrink：
---
```

说明：

| 写法             | 释义                                                         |
| ---------------- | ------------------------------------------------------------ |
| title            | 【必需】文章标题                                             |
| date             | 【必需】文章创建日期                                         |
| updated          | 【可选】文章更新日期                                         |
| tags             | 【可选】文章标签                                             |
| categories       | 【可选】文章分类                                             |
| keywords         | 【可选】文章关键字                                           |
| description      | 【可选】文章描述                                             |
| top_img          | 【可选】文章顶部图片                                         |
| cover            | 【可选】文章缩略图(如果没有设置 top_img，文章页顶部将显示缩略图，可设为 false/图片地址/留空 |
| comments         | 【可选】显示文章评论模块(默认 true)                          |
| toc              | 【可选】显示文章 TOC (默认为设置中 toc 的 enable 配置)       |
| toc_number       | 【可选】显示 toc_number (默认为设置中 toc 的 number 配置)    |
| auto_open        | 【可选】是否自动打开 TOC (默认为设置中 toc 的 auto_open 配置) |
| copyright        | 【可选】显示文章版权模块 (默认为设置中 post_copyright 的 enable 配置) |
| mathjax          | 【可选】显示 mathjax (当设置 mathjax 的 per_page: false 时，才需要配置，默认 false ) |
| katex            | 【可选】显示 katex (当设置 katex 的 per_page: false 时，才需要配置，默认 false) |
| aplayer          | 【可选】在需要的页面加载 aplayer 的 js 和 css，请参考文章下面的`音乐`配置 |
| highlight_shrink | 【可选】配置代码框是否展开 (true/false) (默认为设置中 highlight_shrink 的配置) |

### 3.2 标签页

1. 前往你的 Hexo 博客的根目录
2. 输入 hexo new page tags
3. 你会找到 source/tags/index.md 这个文件
4. 修改这个文件：

```
---
title: 标签
date: 2020-07-14 00:00:00
type: "tags"
---
```

### 3.3 分类页

1. 前往你的 Hexo 博客的根目录
2. 输入 hexo new page categories
3. 你会找到 source/categories/index.md 这个文件
4. 修改这个文件：

```
---
title: 分类
date: 2020-07-14 00:00:00
type: "categories"
---
```



### 3.4 友情链接

为你的博客创建一个友情链接！

#### 3.4.1 创建友情链接页面

1. 前往你的 Hexo 博客的根目录
2. 输入 hexo new page link
3. 你会找到 source/link/index.md 这个文件
4. 修改这个文件：

```
---
title: 友情链接
date: 2020-07-14 00:00:00
type: "link"
---
```

#### 3.4.2 友情链接添加

在 Hexo 博客目录中的 source/_data，创建一个文件 link.yml

```yaml
- class_name: 友情链接
  class_desc: 那些人，那些事
  link_list:
    - name: JerryC
      link: https://jerryc.me/
      avatar: https://jerryc.me/image/avatar.png
      descr: 今日事,今日毕
    - name: Hexo
      link: https://hexo.io/zh-tw/
      avatar: https://d33wubrfki0l68.cloudfront.net/6657ba50e702d84afb32fe846bed54fba1a77add/827ae/logo.svg
      descr: 快速、简单且强大的网誌框架

- class_name: 网站
  class_desc: 值得推荐的网站
  link_list:
    - name: Youtube
      link: https://www.youtube.com/
      avatar: https://i.loli.net/2020/05/14/9ZkGg8v3azHJfM1.png
      descr: 视频网站
    - name: Weibo
      link: https://www.weibo.com/
      avatar: https://i.loli.net/2020/05/14/TLJBum386vcnI1P.png
      descr: 中国最大社交分享平台
    - name: Twitter
      link: https://twitter.com/
      avatar: https://i.loli.net/2020/05/14/5VyHPQqR6LWF39a.png
      descr: 社交分享平台
```

class_name 和 class_desc 支持 html 格式书写，如不需要，也可以留空。

🍡 效果图：

![image-20200714145300955](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714145302.png)

#### 3.4.3 友情链接界面设置	

友情链接界面可以由用户自己自定义，只需要在友情链接的 md 档设置就行，以普通的 Markdown 格式书写。
	

### 3.5 音乐

音乐界面使用了插件 [hexo-tag-aplayer](https://github.com/MoePlayer/hexo-tag-aplayer)。
使用方法请参考插件的文档。

音乐页面只是普通的 page 页，按普通页面操作生成就行。

> 以下内容可供选择配置

插件会在每一个文件都插入 js 和 css，为了避免这一情况，目前版本内置了 aplayer 需要的 css 和 js。

首先在 Hexo 根目录 _config 里配置 asset_inject 为 false

```yaml
aplayer:
  asset_inject: false
```

然后在你需要使用 aplayer 的页面 Front-matter 添加

```yaml
aplayer: true
```

这样只会在需要 aplayer 的页面插入 js 和 css。

### 3.6 电影

电影界面使用了插件 [hexo-douban](https://github.com/mythsman/hexo-douban)。
使用方法请参考插件的文档。

注意：hexo-douban 会主动生成页面，所以不需要自己创建。对应网页的 top_img 可以在 butterfly.yml 修改。

### 3.7 404 页面

主题内置了一个简单的 404 页面，可在设置中开启

```yaml
# A simple 404 page
error_404:
  enable: true
  subtitle: 'Page Not Found'
  background: https://i.loli.net/2020/05/19/aKOcLiyPl2JQdFD.png
```

效果图：

![image-20200714151810817](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714151811.png)

> 本地预览时，访问出错的网站是不会跳到 404页面的。
>
> 如需本地预览，请访问 http://localhost:4000/404.html
>

## 4 Butterfly 主题配置

> 注意：下面如果不特别声明，都是修改的主题配置文件 _config.yml，当然，如果你设置了 butterfly.yml，就在这个文件里修改即可，不用再修改主题配置文件 _config.yml。

### 4.1 语言

修改站点配置文件 _config.yml

默认语言是 en

主题支持三种语言

* default(en)
* zh-CN (简体中文)
* zh-TW (繁体中文)

### 4.2 网站资料

修改网站各种资料，例如标题、副标题和邮箱等个人资料，请修改博客根目录的 _config.yml

```yaml
# Site
title: 
subtitle: ''
description: ''
keywords:
author: 
language: zh-CN
timezone: ''
```

### 4.3 导航菜单

在主题配置文件 _config.yml 中修改：

```yaml
menu:
  Home: / || fas fa-home
  Archives: /archives/ || fas fa-archive
  Tags: /tags/ || fas fa-tags
  Categories: /categories/ || fas fa-folder-open
  List||fas fa-list:
    - Music || /music/ || fas fa-music
    - Movie || /movies/ || fas fa-video
  Link: /link/ || fas fa-link
  About: /about/ || fas fa-heart
```

必须是 `/xxx/`，后面`||`分开，然后写图标名。

注意： 导航的文字可自行更改

例如：

```yaml
menu:
  首页: / || fa fa-home
  时间轴: /archives/ || fa fa-archive
  标签: /tags/ || fa fa-tags
  分类: /categories/ || fa fa-folder-open
  清单||fa fa-heartbeat:
    - 音乐 || /music/ || fa fa-music
    - 电影 || /movies/ || fa fa-film
  友链: /link/ || fa fa-link
  关于: /about/ || fa fa-heart
```

效果图：

![image-20200714160805829](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714160808.png)

### 4.4 代码

> 代码块中的所有功能只适用于 Hexo 默认的 highlight 渲染
>
> 如果使用第三方的渲染器，不一定会有效
>

#### 4.4.1 代码高亮主题

1. 默认主题

Butterfly 支持 6 种代码高亮样式：default、darker、pale night、light、ocean、mac

配置主题文件 _config.yml

```yaml
highlight_theme: mac
```

2. 自定义主题

请参考官方文档：[https://demo.jerryc.me/posts/4aa8abbe/](https://demo.jerryc.me/posts/4aa8abbe/)

#### 4.4.2 代码复制

主题支持代码复制功能

配置主题文件 _config.yml

```yaml
highlight_copy: true
```

#### 4.4.3 代码框展开/关闭

在默认情况下，代码框自动展开，可设置是否所有代码框都关闭状态，点击 > 可展开代码

* true 全部代码框不展开，需点击 > 打开
* false 代码狂展开，有 > 点击按钮
* none 不显示 > 按钮

配置主题文件 _config.yml

```yaml
highlight_shrink: true #代码框不展开，需点击 '>' 打开
```

#### 4.4.4 代码换行

在默认情况下，hexo-highlight 在编译的时候不会实现代码自动换行。如果你不希望在代码块的区域里有横向滚动条的话，那么你可以考虑开启这个功能。

配置主题文件 _config.yml

```yaml
code_word_wrap: true
```

然后找到你站点的 Hexo 配置文件_config.yml，将 line_number 改成 false:

```yaml
highlight:
  enable: true
  line_number: false
  auto_detect: false
  tab_replace:
```

### 4.5 社交图标

Butterfly 支持 [font-awesome v5](https://fontawesome.com/icons) 图标.

书写格式 `图标名：url || 描述性文字`

```yaml
social:
  fab fa-github: https://github.com/wugenqiang || Github
  fas fa-envelope: mailto:18360861937@163.com || Email
  fa fa-rss: /atom.xml || RSS 链接
```

效果图：

![image-20200714163845748](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714163847.png)



### 4.6 主页文章节选(自动节选和文章页 description)

因为主题 UI 的关係，主页文章节选只支持自动节选和文章页 description。

在 butterfly 里，有三种可供选择

* description 只显示 description
* both 优先选择 description，如果没有配置 description，则显示自动节选的内容
* auto_excerpt 只显示自动节选

```yaml
index_post_content:
  method: 3
  length: 500 # if you set method to 2 or 3, the length need to config
```

description 在 front-matter 里添加

### 4.7 顶部图

顶部图有 2 种配置：具体 url 和（留空，true 和 false，三个效果一样）

#### 4.7.1 page 页

（1）当具体 url 时
主页的顶部图可以设置 index_img

archives页的顶部图可以设置 archive_img

其他 page 页的顶部图可以在各自的 md 页面设置 front-matter 中的 top_img

> 页面如果没有设置各自的 top_img，则会显示 default_top_img 图片

（2）当顶部图留空，true 和 false
主页会显示纯颜色的顶部图

其他 page 的顶部图没有设置时，也会显示纯颜色的顶部图

#### 4.7.2 post 页

post 页的顶部图会优先显示各自 front-matter 中的 top_img，如果没有设置，则会缩略图（即各自 front-matter 中的 cover )，如果没有则会显示显示 default_top_img 图片

### 4.8 文章置顶

要为文章置顶，你需要安装插件([hexo-generator-index-pin-top](https://github.com/netcan/hexo-generator-index-pin-top) 或者 [hexo-generator-indexed](https://github.com/hexo-next/hexo-generator-indexed))

如果使用 `hexo-generator-index-pin-top`，需要先卸载掉 hexo-generator-index，然后在文章的 front-matter 区域里添加 top: true 属性来把这篇文章置顶

如果使用 `hexo-generator-indexed`, 需要先卸载掉 hexo-generator-index，然后在文章的 front-matter 区域里添加 sticky: 1 属性来把这篇文章置顶。数值越大，置顶的优先级越大

效果如图：

![image-20200714182058187](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714182059.png)

### 4.9 文章封面

文章的 markdown 文档上,在 Front-matter 添加 cover，并填上要显示的图片地址。
如果不配置 cover，可以设置显示默认的 cover。

如果不想在首页显示 cover，可以设置为 false。

```yaml
cover:
  # 是否显示文章封面
  index_enable: true
  aside_enable: true
  archives_enable: true
  # 封面显示的位置
  # 三个值可配置 left , right , both
  position: both
  # 当没有设置cover时，默认的封面显示
  default_cover:
```

当配置多张图片时,会随机选择一张作为 cover。此时写法应为

```yaml
default_cover:
  - https://cdn.jsdelivr.net/gh/jerryc127/CDN@latest/cover/default_bg.png
  - https://cdn.jsdelivr.net/gh/jerryc127/CDN@latest/cover/default_bg2.png
  - https://cdn.jsdelivr.net/gh/jerryc127/CDN@latest/cover/default_bg3.png
```



### 4.10 文章页相关配置

#### 4.10.1 文章 meta 显示


这个选项是用来显示文章的相关信息的。

```yaml
post_meta:
  page:
    date_type: created # created or updated or both 主页文章日期是创建日或者更新日或都显示
    categories: true # true or false 主页是否显示分类
    tags: false # true or false 主页是否显示标签
  post:
    date_type: both # created or updated or both 文章页日期是创建日或者更新日或都显示
    categories: true # true or false 文章页是否显示分类
    tags: true # true or false 文章页是否显示标签
```

效果图：

![image-20200714183311960](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714183313.png)

在文章顶部的资料，

date_type: 可设置文章日期显示创建日期(created)或者更新日期(updated)或者两种都显示(both)

categories 是否显示分类

![image-20200714183355826](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714183357.png)

tags 是否显示标签

![image-20200714183949208](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714183950.png)

#### 4.10.2 文章版权

为你的博客文章展示文章版权和许可协议。

```yaml
post_copyright:
  enable: true
  decode: false
  license: CC BY-NC-SA 4.0
  license_url: https://creativecommons.org/licenses/by-nc-sa/4.0/
```

由于 Hexo 4.1 开始，默认对网址进行解码，以至于如果是中文网址，会被解码，可设置 decode: true 来显示中文网址。

如果有文章（例如：转载文章）不需要显示版权，可以在文章 Front-matter 单独设置

```yaml
copyright: false
```

版权显示截图：

![image-20200714191403363](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714191404.png)

#### 4.10.3 文章打赏

在你每篇文章的结尾，可以添加打赏按钮。相关二维码可以自行配置。

对于没有提供二维码的，可配置一张软件的 icon 图片，然后在 link 上添加相应的打赏链接。用户点击图片就会跳转到链接去。

link 可以不写，会默认为图片的链接。

```yaml
reward:
  enable: true
  QR_code:
    - img: /image/wechat.jpg
      link:
      text: 微信
    - img: /image/alipay.jpg
      link:
      text: 支付宝
```

效果图：

![image-20200714191814580](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714191815.png)

#### 4.10.4 TOC

在文章页，会有一个目录，用于显示 TOC。

enable: 是否显示 TOC
number: 是否显示章节数
auto_open: 可选择进入文章页面时，是否自动打开 sidebar 显示 TOC

```yaml
toc:
  enable: true
  number: true
  auto_open: true # auto open the sidebar
```

* 为特定的文章配置 TOC

在你的文章 md 文件的头部，加入 toc_number、toc 和 auto_open，并配置 true 或者 fals e即可。

主题会优先判断文章 Markdown 的 Front-matter 是否有配置，如有，则以 Front-matter 的配置为准。否则，以主题配置文件中配置为准。

#### 4.10.5 相关文章

相关文章推荐的原理是根据文章 tags 的比重来推荐

```yaml
related_post:
  enable: true
  limit: 6 # 显示推荐文章数目
  date_type: created # or created or updated 文章日期显示创建日或者更新日
```

#### 4.10.6 文章锚点

开启文章锚点后，当你在文章页进行滚动时，文章链接会根据标题 ID 进行替换
(注意: 每替换一次，会留下一个历史记录。所以如果一篇文章有很多锚点的话，网页的历史记录会很多。)

```yaml
# anchor
# when you scroll in post , the url will update according to header id.
anchor: ture
```

### 4.11 头像

```yaml
avatar:
  img: /img/avatar.png
  effect: true # 头像会一直转圈
```

效果图：

![](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714194616.gif)

### 4.12 图片描述

可开启图片 Figcaption 描述文字显示

```yaml
photofigcaption: true
```

### 4.13 Footer 设置

#### 4.13.1 博客年份

since 是一个来展示你站点起始时间的选项。它位于页面的最底部。

```yaml
since: 2019
```

效果图：

![image-20200714195844816](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714195846.png)

#### 4.13.2 页脚自定义文本

footer_custom_text 是一个给你用来在页脚自定义文本的选项。通常你可以在这里写声明文本等。支持 HTML。

```yaml
footer_custom_text: Hi, welcome to my <a href="https://wugenqiang.github.io/">blog</a>!
```

#### 4.13.3 ICP

对于部分有备案的域名，可以在 ICP 配置显示。

```yaml
ICP:
  enable: true
  url: http://www.beian.miit.gov.cn/state/outPortal/loginPortal.action
  text: 粤ICP备xxxx
  icon: /img/icp.png
```

### 4.14 右下角按钮

#### 4.14.1 简繁转换

简体繁体互换

右下角会有简繁转换按钮。

```yaml
translate:
  enable: true
  # 默认按钮显示文字(网站是简体，应设置为'default: 繁')
  default: 简
  #网站默认语言，1: 繁体中文, 2: 简体中文
  defaultEncoding: 1
  #延迟时间,若不在前, 要设定延迟翻译时间, 如100表示100ms,默认为0
  translateDelay: 0
  #当文字是简体时，按钮显示的文字
  msgToTraditionalChinese: "繁"
  #当文字是繁体时，按钮显示的文字
  msgToSimplifiedChinese: "简"
```

#### 4.14.2 夜间模式

右下角会有夜间模式按钮

```yaml
# dark mode
darkmode:
  enable: true
  # dark mode和 light mode切换按钮
  button: true
  autoChangeMode: false
```

#### 4.14.3 阅读模式

阅读模式下会去掉除文章外的内容，避免干扰阅读。

只会出现在文章页面，右下角会有阅读模式按钮。

```yaml
readmode: true
```

### 4.15 侧边栏设置

#### 4.15.1 侧边排版

可自行决定哪个项目需要显示，可决定位置，也可以设置不显示侧边栏。

```yaml
aside:
  enable: true
  mobile: true # 手机页面（ 显示宽度 < 768px ）是否显示 aside 内容
  position: right # left or right
  card_author:
    enable: true
    description:
  card_announcement:
    enable: true
    content: This is my Blog
  card_recent_post:
    enable: true
    limit: 5 # if set 0 will show all
  card_categories:
    enable: true
    limit: 8 # if set 0 will show all
    expand: none # none/true/false
  card_tags:
    enable: true
    limit: 40 # if set 0 will show all
    color: false
  card_archives:
    enable: true
    type: monthly # yearly or monthly
    format: MMMM YYYY # eg: YYYY年MM月
    order: -1 # Sort of order. 1, asc for ascending; -1, desc for descending
    limit: 8 # if set 0 will show all
  card_webinfo: true
```

#### 4.15.2 访问人数 busuanzi (UV 和 PV)

访问 busuanzi 的[官方网站](http://busuanzi.ibruce.info/)查看更多的介绍。

```yaml
busuanzi:
  site_uv: true
  site_pv: true
  page_pv: true
```

#### 4.15.3 运行时间

网页已运行时间

```yaml
runtimeshow:
  enable: true
  publish_date: 2020/7/12 00:00:00
  ##网页开通时间
  #格式: 月/日/年 时间
  #也可以写成 年/月/日 时间
```

效果图：

![image-20200714201855716](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714201857.png)

## 5 Butterfly 主题魔解功能

### 5.1 Valine 评论

遵循 [Valine](https://github.com/xCss/Valine)的指示去配置你的 [LeanCloud](https://console.leancloud.app/) 应用。以及查看相应的配置说明。

然后配置主题配置文件：

```yaml
valine:
  enable: true # if you want use valine,please set this value is true
  appId:  # leancloud application app id
  appKey:  # leancloud application app key
  pageSize: 10 # comment list page size
  avatar: monsterid # gravatar style https://valine.js.org/#/avatar
  lang: en # i18n: zh-CN/zh-TW/en/ja
  placeholder: 记得留下你的昵称和邮箱....可以快速收到回复 # valine comment input placeholder(like: Please leave your footprints )
  guest_info: nick,mail,link #valine comment header info (nick/mail/link)
  recordIP: false # Record reviewer IP
  serverURLs: # This configuration is suitable for domestic custom domain name users, overseas version will be automatically detected (no need to manually fill in)
  bg: /image/comment_bg.png # valine background
  emojiCDN: # emoji CDN
  enableQQ: false # enable the Nickname box to automatically get QQ Nickname and QQ Avatar
  requiredFields: nick,mail # required fields (nick/mail)
  count: true # dispaly comment count in top_img
```

Valine 于 v1.4.5 开始支持自定义表情，如果你需要自行配置，请在 emojiCDN 配置表情 CDN。

同时在 Hexo 工作目录下的 source/_data/ 创建一个 json 文件 valine.json，等同于 Valine 需要配置的 emojiMaps，valine.json 配置方式可参考如下

```yaml
{ 
"tv_doge": "6ea59c827c414b4a2955fe79e0f6fd3dcd515e24.png",
"tv_亲亲": "a8111ad55953ef5e3be3327ef94eb4a39d535d06.png",
"tv_偷笑": "bb690d4107620f1c15cff29509db529a73aee261.png",
"tv_再见": "180129b8ea851044ce71caf55cc8ce44bd4a4fc8.png",
"tv_冷漠": "b9cbc755c2b3ee43be07ca13de84e5b699a3f101.png",
"tv_发怒": "34ba3cd204d5b05fec70ce08fa9fa0dd612409ff.png",
"tv_发财": "34db290afd2963723c6eb3c4560667db7253a21a.png",
"tv_可爱": "9e55fd9b500ac4b96613539f1ce2f9499e314ed9.png",
"tv_吐血": "09dd16a7aa59b77baa1155d47484409624470c77.png",
"tv_呆": "fe1179ebaa191569b0d31cecafe7a2cd1c951c9d.png",
"tv_呕吐": "9f996894a39e282ccf5e66856af49483f81870f3.png",
"tv_困": "241ee304e44c0af029adceb294399391e4737ef2.png",
"tv_坏笑": "1f0b87f731a671079842116e0991c91c2c88645a.png",
"tv_大佬": "093c1e2c490161aca397afc45573c877cdead616.png",
"tv_大哭": "23269aeb35f99daee28dda129676f6e9ea87934f.png",
"tv_委屈": "d04dba7b5465779e9755d2ab6f0a897b9b33bb77.png",
"tv_害羞": "a37683fb5642fa3ddfc7f4e5525fd13e42a2bdb1.png",
"tv_尴尬": "7cfa62dafc59798a3d3fb262d421eeeff166cfa4.png",
"tv_微笑": "70dc5c7b56f93eb61bddba11e28fb1d18fddcd4c.png",
"tv_思考": "90cf159733e558137ed20aa04d09964436f618a1.png",
"tv_惊吓": "0d15c7e2ee58e935adc6a7193ee042388adc22af.png"
}
```

### 5.2 搜索系统

* 安装 [hexo-generator-search](https://github.com/PaicHyperionDev/hexo-generator-search)。根据它的文档去做相应配置。注意格式只支持 xml。
* 配置主题文件

```yaml
local_search:
  enable: true
  labels:
    input_placeholder: Search for Posts
    hits_empty: "We didn't find any results for the search: ${query}" # if there are no result
```

效果：

![image-20200714220504185](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714220505.png)

### 5.3 Adsense 广告

（1）主题已集成谷歌广告（自动广告）

```yaml
google_adsense:
  enable: true
  js: https://pagead2.googlesyndication.com/pagead/js/adsbygoogle.js
  client: # 填入个人识别码
  enable_page_level_ads: true
```

（2）手动插入广告

主题预留了三个位置可供插入广告，分别为主页文章(每三篇文章出现广告)/aside公告之后/文章页打赏之后。
把 html 代码填写到对应的位置

```yaml
ad:
  index:
  aside:
  post:
```

例如：

```yaml
index: <ins class="adsbygoogle"
     style="display:block"
     data-ad-client="ca-pub-1890271224952559"
     data-ad-slot="2794965055"
     data-ad-format="auto"
     data-full-width-responsive="true"></ins>
<script>
     (adsbygoogle = window.adsbygoogle || []).push({});
</script>
```

### 5.4 美化/特效

#### 5.4.1 自定义主题色

可以修改大部分 UI 颜色

> 颜色值必须被双引号包裹，就像"#000"而不是 #000。否则将会在构建的时候报错！

```yaml
theme_color:
  enable: true
  main: "#49B1F5"
  paginator: "#00c4b6"
  button_hover: "#FF7242"
  text_selection: "#00c4b6"
  link_color: "#99a9bf"
  meta_color: "#858585"
  hr_color: "#A4D8FA"
  code_foreground: "#F47466"
  code_background: "rgba(27, 31, 35, .05)"
  toc_color: "#00c4b6"
  blockquote_padding_color: "#49b1f5"
  blockquote_background_color: "#49b1f5"
```

#### 5.4.2 footer 背景

footer 的背景会与 top_img 的一致, 当设置 false 时，将与主题色一致。

```yaml
# footer是否显示图片背景(与top_img一致)
footer_bg: true
```

#### 5.4.3 美化页面显示

会改变 ol、ul、h1-h5 的样式

field 配置生效的区域

* post 只在文章页生效
* site 在全站生效

```yaml
# 美化页面显示
beautify:
  enable: true
  field: site # site/post
  title-prefix-icon: '\f0c1'
  title-prefix-icon-color: "#F47466"
```

效果图：

![image-20200714224209048](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714224210.png)

- 美化页面展示，修改标题前图标为闪电 `title-prefix-icon:'\f0e7'`，颜色为黄色 `title-prefix-icon-color: "#ffb821"`

* 主页调用金山词霸的每日一句打字效果，需注意的是：自定义副标题 sub 的时候，符号必须用 ASCII 码表示，常用的逗号为 `&#44;` 句号为 `&#46;` 双引号为 `&#34;` 英文缩写符号为 `&#39;`
* 打开中英文之间添加空格 `pangu: true`

#### 5.4.4 自定义字体

（1）全局字体

可自行设置字体的 font-family
如不需要配置，请留空

```yaml
# Global font settings
# Don't modify the following settings unless you know how they work (非必要不要修改)
font:
  font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", "Helvetica Neue", Lato, Roboto, "PingFang SC", "Microsoft JhengHei", "Microsoft YaHei", sans-serif
  code-font: consolas, Menlo, "PingFang SC", "Microsoft JhengHei", "Microsoft YaHei", sans-serif
```

（2）Blog 标题字体

可自行设置字体的 font-family
如不需要配置，请留空。
如不需要使用网络字体，只需要把 font_link 留空就行

```yaml
# Font settings for the site title and site subtitle
# 左上角网站名字 主页居中网站名字
blog_title_font:
  font_link: https://fonts.googleapis.com/css?family=Titillium+Web&display=swap
  font-family: Titillium Web, 'PingFang SC', 'Hiragino Sans GB', 'Microsoft JhengHei', 'Microsoft YaHei', sans-serif
```

（3）网站副标题

可设置主页中显示的网站副标题或者喜欢的座右铭。

```yaml
# 主页subtitle
subtitle:
  enable: true
  # 打字效果
  effect: true
  # 循环或者只打字一次
  loop: false
  # source调用第三方服务
  # source: false 关闭调用
  # source: 1  调用搏天api的随机语录（简体） https://api.btstu.cn/
  # source: 2  调用一言网的一句话（简体） https://hitokoto.cn/
  # source: 3  调用一句网（简体） http://yijuzhan.com/
  # source: 4  调用今日诗词（简体） https://www.jinrishici.com/
  # subtitle 会先显示 source , 再显示 sub 的内容
  source: false
  # 如果有英文逗号' , ',请使用转义字元 &#44;
  # 如果有英文双引号' " ',请使用转义字元 &quot;
  # 开头不允许转义字元，如需要，请把整个句子用双引号包住
  # 例如 ”&quotNever put off till tomorrow what you can do today&quot"
  # 如果关闭打字效果，subtitle只会显示sub的第一行文字
  sub:
    - 今日事&#44;今日毕
    - Never put off till tomorrow what you can do today
```

#### 5.4.5 页面加载动画 preloader

当进入网页时，因为加载速度的问题，可能会导致 top_img 图片出现断层显示，或者网页加载不全而出现等待时间，开启 preloader 后，会显示加载动画，等页面加载完，加载动画会消失。

```yaml
# 加载动画 Loading Animation
preloader: true
```

### 5.5 字数统计

要为 Butterfly 配上字数统计特性, 你需要如下几个步骤:

打开 hexo 工作目录

输入命令：npm install hexo-wordcount --save 

然后在主题配置文件中写入：

```yaml
wordcount:
  enable: true
  post_wordcount: true
  min2read: true
  total_wordcount: true
```

效果图：

![image-20200714225613483](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200714225614.png)

### 5.6 图片大图查看模式

#### 5.6.1 fancybox

```yaml
# fancybox http://fancyapps.com/fancybox/3/
fancybox: true
```

#### 5.6.2 medium_zoom

```yaml
medium_zoom: true
```

### 5.7 Snackbar 弹窗

```yaml
# Snackbar 弹窗
# https://github.com/polonel/SnackBar
# position 弹窗位置
# 可选 top-left / top-center / top-right / bottom-left / bottom-center / bottom-right
snackbar:
  enable: true
  position: bottom-left
  bg_light: '#49b1f5' #light mode时弹窗背景
  bg_dark: '#2d3035' #dark mode时弹窗背景

```

### 5.8 自定义样式

#### 5.8.1 引用外部字体和鼠标样式

（1）引用格式

```css
@font-face { font-family:MyFont;
src: url(https:xxx)}
body{font-family:MyFont!important;}
```

（2）引用方法

将引用代码添加到 `themes\Butterfly\source\css\_third-partynormalize.min.css` 末尾即可，鼠标样式亦是如此。

### 5.9 如何在页脚养鱼

参考博主：[木槿](https://xiabor.com/714f.html)

效果就在页脚，是不是很想要？这里简述 butterfly 主题的引入方法，其他主题类似，实在不行建议更换 butterfly 主题

* 先将扒来的 code 转为 pug

  ![htmltopug](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715110304.png)

  写进 `\themes\butterfly\layout\includes\footer.pug` 末尾

  ```html
  #jsi-flying-fish-container.container
  script(src='js/fish.js')
  style.
  
  @media only screen and (max-width: 767px){
  #sidebar_search_box input[type=text]{width:calc(100% - 24px)}
  }
  ```

  ![image-20200715114200023](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715114201.png)

* 然后在主题配置文件中找到 `inject` 引入 js: https://cdn.jsdelivr.net/gh/xiabo2/CDN@latest/fish.js

  ```js
  - <script src="https://cdn.jsdelivr.net/gh/xiabo2/CDN@latest/fish.js"></script>
  ```

  ![image-20200715113007109](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715113008.png)

* 引入之后效果如下，页脚太高，`themes\butterfly\source\css\_layout\footer.styl` 调整下 css 即可 (补充：调整页脚阴影透明度为 0.1)

  ```
  #footer-wrap
  position: absolute
  padding: 1.2rem 1rem 1.4rem
  color: $light-grey
  text-align: center
  left: 0
  right: 0
  top:0
  bottom: 0
  
  #footer
    if hexo-config('footer_bg') != false
      &:before
      position: absolute
      width: 100%
      height: 100%
      background-color: alpha($dark-black, .1)
      content: ''
  ```

* 效果图：

![](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715114541.gif)



## 6 部署到 GitHub

这里默认已经注册过了 GitHub 账户并且已经创建了相关仓库，比如我的：[https://github.com/wugenqiang/PaperSummary](https://github.com/wugenqiang/PaperSummary)

### 6.1 上传文件到 GitHub

* 配置 `_config.yml` 中的 repo 信息：

```yaml
deploy:
  type: git
  repo:  https://github.com/wugenqiang/PaperSummary.git #你的仓库地址
  branch: master
```

直接通过 hexo 来发布到 GitHub，需要安装以下插件：

```yaml
npm install hexo-deployer-git --save
```

安装成功后，执行以下命令：

```yaml
hexo clean
hexo g -d
```

刷新 github 对应的 repository 页面，即可看到提交的内容：

![image-20200715101206051](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715101413.png)

### 6.2 配置静态站点

点击 Settings，进入 GitHub Pages 配置：

![image-20200715101406287](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715101407.png)

## 7 效果展示

* [https://wugenqiang.github.io/PaperSummary/](https://wugenqiang.github.io/PaperSummary/)

![效果展示](https://gitee.com/wugenqiang/PictureBed/raw/master/images01/20200715102235.png)

