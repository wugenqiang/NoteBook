# Docute 4 创建文档网站

## 1 Docute 介绍

[Docute](https://docute.org/) 本质上就是一个 JavaScript 文件，它可以获取 Markdown 文件并将它们呈现为单页面应用。

它完全由运行时驱动，因此并不涉及服务端组件，这就意味着没有构建过程。你只需创建一个 HTML 文件和一堆 Markdown 文档，你的网站就差不多完成了！

目前 Docute 已经更新到第 4 版啦，而且很不错，如果想更加深入的使用它，可以直接去看 [Docute 4](https://docute.org/)。

## 2 创建文件

在本地新建一个文件夹，比如： demo-v4-demo/docs 新建文件

```bash
.
├── .nojekyll
├── index.html
└── README.md
```

目录结构解释：

* `index.html`  # 入口文件
* `README.md`   # 会做为主页内容渲染，我写入了 Docute v4.x
* `.nojekyll`   # 用于阻止 GitHub Pages 会忽略掉下划线开头的文件，就直接为空文件就好

`index.html` 写入：

```html
<!DOCTYPE html>
<html>
  <head>
    <meta charset="utf-8" />
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <link rel="icon" href="https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425141925.ico">
    <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=0" />
    <title>EnjoyToShare - Notes</title>
    <meta name="description" content="Effortlessly documentation done right! Writing docs without build process.">
    <link rel="stylesheet" href="https://unpkg.com/docute@4/dist/docute.css">
  </head>
  <body>
    <div id="docute"></div>
    <script src="https://unpkg.com/docute@4/dist/docute.js"></script>
    <script>
      new Docute({
        target: '#docute'
      })
    </script>
  </body>
</html>
```

然后，您可以使用以下方法将此文件夹作为计算机上的静态网站：

- Node.js： `npm i -g serve && serve .`
- 蟒蛇： `python -m SimpleHTTPServer`
- Golang： `caddy`
- ... 或任何静态 Web 服务器

当然可以参照 docute 3 使用 docute-cli 初始化环境，部署环境可以使用 docute docs 指令，具体参考文档：[使用 docute-cli 初始化环境](https://wugenqiang.github.io/docute-demo/docute-v3-demo/docs/#/home?id=_2-2-自动创建文件)

我这里使用的是 docute docs 指令，效果如下：

![image-20200426110043486](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200426110051.png)

## 3 自定义定制

### 3.1 导航栏

导航栏用于网站级别的导航。它通常包含一个指向您的主页的链接和一个指向您项目的存储库的链接。但是，您可以在此处添加任何内容。

```js
new Docute({
        title: 'Docute',
        nav: [
            {
                title: 'Home',
                link: '/'
            },
            {
                title: 'GitHub',
                link: 'https://github.com/wugenqiang/'
            },
            // A dropdown menu
            {
                title: 'Community',
                children: [
                    {
                        title: 'Spectrum',
                        link: 'https://spectrum.chat/your-community'
                    },
                    {
                        title: 'Discord',
                        link: 'https://discord.app/your-discord-server'
                    }
                ]
            }
        ]
    })
```

该`title`选项默认为``HTML 中tag 的值，因此它是完全可选的。

查看该网站的导航栏，以查看其外观。

效果图：

![image-20200426110656727](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200426110658.png)

### 3.2 侧边栏

侧边栏主要用于页面之间的导航。

```html
new Docute({
  sidebar: [
    // A sidebar item, with child links
    {
      title: 'Guide',
      children: [
        {
          title: 'Getting Started',
          link: '/guide/getting-started'
        },
        {
          title: 'Installation',
          link: '/guide/installation'
        }
      ]
    },
    // An external link
    {
      title: 'GitHub',
      link: 'https://github.com/wugenqiang/docute-demo/tree/master/docute-v4-demo'
    }
  ]
})
```

效果图：

![image-20200426111200518](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200426111201.png)

### 3.3 布局

看官网有三种选择，我觉得这种好：

```html
new Docute({
  layout: 'narrow'
})
```





## 4 功能优化

如果以后有机会的话，会继续更新，目前依旧坚持着 docute 3 版本哈哈

## 5 效果展示

* [docute-v4-demo](https://wugenqiang.github.io/docute-demo/docute-v4-demo/docs/#/)

![image-20200426114305587](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200426114306.png)