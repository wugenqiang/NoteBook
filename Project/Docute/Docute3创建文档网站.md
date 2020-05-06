# Docute 3 创建文档网站

## 1 Docute 介绍

[Docute](https://docute.org/) 本质上就是一个 JavaScript 文件，它可以获取 Markdown 文件并将它们呈现为单页面应用。

它完全由运行时驱动，因此并不涉及服务端组件，这就意味着没有构建过程。你只需创建一个 HTML 文件和一堆 Markdown 文档，你的网站就差不多完成了！

目前 Docute 已经更新到第 4 版啦，而且很不错，如果想使用它，可以直接去看 [Docute 4](https://docute.org/)，如果以后有时间或者有机会再更最新的 Docute 的使用，不过官网已经很详细了，相信你也能看的出来，由于我起步于 [Docute 3](https://v3.docute.org/#/home)，有感情了，所以会在这一版本上做大量的文档使用说明以及优化！以我学习《算法与数据结构》做一份文档举例，所有优化内容都基于现在的需要！

那么现在你会问，docute 是如何工作的呢？

简而言之：URL 是 API。

访问你的 URL 时，会获取并呈现相应的 markdown 文件：

```
/         => /README.md
/foo      => /foo.md
/foo/     => /foo/README.md
/foo/bar  => /foo/bar.md
```

## 2 快速开始

### 2.1 手动创建文件

在本地新建一个文件夹，比如： algorithm-data-structure/docs 新建文件

```bash
.
├── .nojekyll
├── index.html
└── README.md
```

目录结构解释：

* `index.html`  # 入口文件
* `README.md`   # 会做为主页内容渲染，我写入了 Hello
* `.nojekyll`   # 用于阻止 GitHub Pages 会忽略掉下划线开头的文件，就直接为空文件就好

`index.html` 写入：

```html
<!DOCTYPE html>
<html>
<head>
  <meta charset="utf-8" />
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1, user-scalable=0" />
  <title>EnjoyToShare - Notes</title>
  <!-- docute 的 CSS -->
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/docute@3/dist/docute.css">
</head>
<body>
  <div id="app"></div>
  <!-- 加载 docute 的 js 库 -->
  <script src="https://cdn.jsdelivr.net/npm/docute@3/dist/docute.js"></script>
    <!-- 你也可以把包含 $config 配置的脚本放到单独的文件里 -->
  <!-- 比如 config.js -->
  <script>
    docute.init({
      // 配置...
    })
  </script>
</body>
</html>
```



然后你可以使用以下命令将此文件夹作为计算机上的静态网站展示：

- Node.js: `npm i -g serve && serve .`
- Python: `python -m SimpleHTTPServer`
- Golang: `caddy`
- ... 或任何静态 web 服务器

效果如下：

![image-20200425153801251](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425153802.png)

### 2.2 自动创建文件

当然这一步也可以不用做，依旧可以使用 `npm i -g serve && serve .` 启动服务器，不过我为了使用方便启动，所以还是使用了这一步。

1 第一步：使用 docute-cli 初始化环境

* 方式一：用 npm 安装:

```bash
npm i -g docute-cli
```

* 方式二：用 Yarn 安装

```bash
yarn global add docute-cli
```

如图：

![image-20200425160445065](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425160446.png)

2 第二步：使用 docute init 生成 docs，文件里有以下三个文件，就是手动创建的那三个哟

![image-20200425170021257](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425170022.png)

然后就可以使用 docute docs 启动服务啦！

![image-20200425160538847](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425160540.png)

效果如下：

![image-20200425171005193](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425171007.png)



## 3 自定义定制

### 3.1 配置文件

执行 `docute init` 后你的文档目录会有一个 `config.js` 配置文件:

```js
docute.init({
  // 配置...
})
```

不妨把它拿出来，单独创建一个文件，叫 `config.js` ，然后写入：

```js
docute.init({
  // 配置...
})
```



然后在 index.html 引入：

```js
<script src="./config.js"></script>
```

### 3.2 首页

文档目录里的 `README.md` 文件会渲染为文档首页，但有时你可能会想使用其它文件。比如你将 `./docs` 目录里的文件作为 github pages 使用的时候你可能想直接使用项目根目录里的 `README.md`，你可以通过配置指向该文件：

```js
docute.init({
  // 项目根目录里的 README.md
  home: 'https://github.com/wugenqiang/algorithm-data-structure/blob/master/README.md'
})
```

### 3.3 Landing 页面

你可以开启 `landing` 选项来启用 Landing 页面:

```js
docute.init({
  // true 将会默认使用 `landing.html`，也可以写成 landing: 'landing.html',
  landing: true,
  // 也可以用自定义页面
  landing: '_my-landing.html',
  // 当然 markdown 文件也可以
  landing: 'landing.md'
})
```

如果你开启了这个功能，Landing 页面的路由将是 `/`，而文档的首页将改为用 `/home` 访问。

> 你不能在动态添加的页面里使用 `script` 标签，因为动态添加的内容 JS 不会被浏览器执行。

### 3.4 侧边栏

想默认隐藏侧边栏，可以在 `config.js` 中将其设置为 `false`:

```js
docute.init({
  sidebar: false
})
```

或者只隐藏某个页面的侧边栏:

```js
---
sidebar: false
---
用 front-matter 隐藏这个页面的侧边栏
```

左下角也会有个按钮用于切换侧边栏，你也可以隐藏它:

```js
docute.init({
  disableSidebarToggle: true
})
```

#### 3.4.1 目录表

侧边栏的目录表 (table of contents) 是从你的 markdown 文件解析来的，我们获取 markdown 里的 h2 ~ h5 标题来构成这个目录。

默认只会显示 h2 到 h4 的标题，其它标题只有在你页面滚动到相应区域才会显示，不过你可以更改最深显示的标题层级:

```js
docute.init({
  // 显示 h2 到 h4 的标题
  tocVisibleDepth: 3
})
```

要彻底隐藏目录表把 `toc` 设置为 `false` 即可。

#### 3.4.2 自定义目录

侧边栏的导航是根据 markdown 文件中的标题自动提取出的

如何自定义侧边栏呢？

```js
docute.init({
  toc: `
- [Install](/install)
- [Guide](/guide)
  - [How to do A](/guide/how-to-do-a)
  - [How to do B](/guide/how-to-do-b)
`
})
```

一定要注意对齐哦，不然是不会被渲染的，也可以单独写文件

```js
docute.init({
  toc: './toc.md'
})
```

然后新建 toc.md 文件，写入目录信息，例如：

```js
- [Install](/install)
- [Guide](/guide)
  - [How to do A](/guide/how-to-do-a)
  - [How to do B](/guide/how-to-do-b)
```

效果图：

![image-20200425185329839](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425185331.png)

### 3.5 导航栏

当你有多个页面的时候你很可能需要一个导航栏方便用户浏览，你可以通过配置文件添加导航栏:

```js
docute.init({
  nav: [
    // 首页
    {title: '首页', path: '/'},
    // 中文文档
    {title: '博客', path: 'https://wugenqiang.github.io/'}
  ]
})
```

`path` 是可以指向一个外部链接的，如上，它就像一个普通的超链接一样工作。

除此之外你也可以用 `source` 来指定一个自定义的 markdown 文件而不是默认的 `路径加.md` 这种形式，比如 `source: 'https://foo.com/bar.md'`

#### 3.5.1 图标

图标设置一：Icon short-hand

```js
docute.init({
  // slug for your github repo
  repo: 'wugenqiang/algorithm-data-structure',
  // twitter username
  twitter: 'enjoytoshare',
  // the link to source file of current page
  'edit-link': 'https://github.com/wugenqiang/algorithm-data-structure/blob/master/docs/'
})
```

效果如下：

![image-20200425180558617](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425180559.png)

图标设置二：Custom Icons

```js
docute.init({
  icons: [{
    icon: 'github',
    label: 'Contribute on GitHub',
    link: 'https://github.com/owner/repo'
  }]
})
```

显示和 Icon short-hand 一样

#### 3.5.2 下拉菜单

显示一个下拉菜单以容纳多个页面:

```js
docute.init({
  nav: [
    {title: '其他语言', type: 'dropdown', items: [
      {title: '中文', path: '/language/chinese'},
      {title: '日语', path: '/language/japanese'}
    ]}
  ]
})
```

### 3.6 代码高亮

```js
<!-- 代码块样式优化-->
<script src="//unpkg.com/prismjs/components/prism-c.js"></script>
<script src="//unpkg.com/prismjs/components/prism-cpp.js"></script>
<script src="//unpkg.com/prismjs/components/prism-css.js"></script>
<script src="//unpkg.com/prismjs/components/prism-docker.js"></script>
<script src="//unpkg.com/prismjs/components/prism-java.js"></script>
<script src="//unpkg.com/prismjs/components/prism-javascript.js"></script>
<script src="//unpkg.com/prismjs/components/prism-json.js"></script>
<script src="//unpkg.com/prismjs/components/prism-latex.js"></script>
<script src="//unpkg.com/prismjs/components/prism-sql.js"></script>
<script src="//unpkg.com/prismjs/components/prism-markdown.js"></script>
<script src="//unpkg.com/prismjs/components/prism-bash.min.js"></script>
<script src="//unpkg.com/prismjs/components/prism-php.min.js"></script>
<script src="//unpkg.com/prismjs/components/prism-scala.min.js"></script>
<script src="//unpkg.com/prismjs/components/prism-nginx.min.js"></script>
<script src="//unpkg.com/prismjs/components/prism-json.min.js"></script>  
<script src="//unpkg.com/prismjs/components/prism-python.js"></script>
```

举例：

```python
def fib(n):
 a,b = 1,1
 for i in range(n-1):
  a,b = b,a+b
 return a
print fib(5)
```

效果：

![image-20200425182052212](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425182053.png)



## 4 使用 GitHub Pages 

### 4.1 设置自动上传 GitHub

建立 deploy.sh 文件，写入：

```
echo '--------upload files start--------'
# 进入生成的构建文件夹
# cd ./

# git init

git add .

git status

git commit -m 'auto update https://github.com/wugenqiang/algorithm-data-structure.git'

echo '--------commit successfully--------'

git push -u https://github.com/wugenqiang/algorithm-data-structure.git master

echo '--------push to GitHub successfully--------'
```

修改你自己的 GitHub 仓库地址，记得将你的文件夹使用 git init 进行初始化，才能上传至 GitHub 中，使用一键自动上传功能要保证 GitHub 中已经存在该仓库，所以记得去 GitHub 中建立和获取链接。

使用 ./deploy.sh 或者 bash deploy.sh 命令上传即可。

上传效果图：

![image-20200425113314267](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425113315.png)

GitHub 中效果图：

![image-20200425113129726](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425113131.png)

### 4.2 开启 GitHub Pages

点击 Settings：

![image-20200425113522175](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425113523.png)

找到 GitHub Pages

![image-20200425113704070](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425113705.png)

如果是在 docs 下面建立文档网站，就如图红框选择；若在主目录下建立，选择第一个

成功建立，通过这个地址就可访问你的文档网站：

![image-20200425113901746](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425113903.png)

比如：[https://wugenqiang.github.io/algorithm-data-structure](https://wugenqiang.github.io/algorithm-data-structure) 



到这里，就初步完成文档网站建立啦，如何继续优化，以后需要再写，现在就是开始写文章咯！

## 5 功能优化

注：后续更新，请参考：[Docute3创建文档网站](https://wugenqiang.github.io/NoteBook/#/Project/Docute/Docute3创建文档网站)

## 6 效果展示

* [算法与数据结构学习笔记](https://wugenqiang.github.io/algorithm-data-structure)



> 偶然之间看到大佬的说辞，我知道我需要更加努力了！（ 写于 2020 - 04 - 25 ）

![image-20200425135925441](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425135927.png)



