# 评论系统 Valine 的使用

注明：以下方案是在 Valine 1.4.9 版本下完成，对于其他版本应该会根据实际情况修改参数，使用 F12 查看参数修改即可使用！（说明于 2020 - 04 - 25）

强烈推荐大佬们直接去看 [cungudafa](https://blog.csdn.net/cungudafa/article/details/105548858) 对于 Valine 评论系统的优化，实在是棒，本人博客：[EnjoyToShare](https://wugenqiang.github.io/) 的评论系统也是根据这位大佬的文章阐述修改而来，在此对她表示感谢！

## 1 Valine 的介绍

一款快速、简洁且高效的无后端评论系统。

[Valine](https://valine.js.org/) 诞生于 2017 年 8 月 7 日，是一款基于 [LeanCloud](https://www.leancloud.cn/) 的快速、简洁且高效的无后端评论系统。

理论上支持但不限于静态博客，目前已有 Hexo、Jekyll、Typecho、Hugo、Ghost 等博客程序在使用 [Valine](https://valine.js.org/)。

> Valine 特性

* 快速
* 安全
* Emoji 😉
* 无后端实现
* MarkDown 全语法支持
* 轻量易用(~15kb gzipped)
* 文章阅读量统计 v1.2.0+

## 2 Valine 的使用

1 注册 [LeanCloud](https://leancloud.cn/)

2 创建 Valine 应用，名称任意，例如 Valine-Admin

3 进入对应的应用，点击 `设置 -> 应用 Keys`，获取 `AppID` 和 `AppKey` 

4 在 Hexo 博客主题配置文件 `next/_config.yml` 中进行配置，大家也可根据自己来设置该评论设置。

```html
valine:
  enable: true # 设置为true，默认为false
  appid:  # 将应用key的App ID设置在这里
  appkey: # 将应用key的App Key设置在这里
  notify: false# 邮箱通知 , https://github.com/xCss/Valine/wiki，默认为false
  verify: false# 验证码 默认为false
  placeholder: Just go go ^_^ # 初始化评论显示，根据自己修改，这里默认，
  avatar: monsterid # 头像风格，默认为mm，可进入网址：https://valine.js.org/visitor.html查看头像设置，这里有许多头像风格，进行设置
  guest_info: nick,mail,link # 自定义评论标题
  pageSize: 10 # 分页大小，10页就自动分页
  visitor: true # 是否允许游客评论 ，进入官网查看设置：https://valine.js.org/visitor.html
```

了解更多 Valine 配置参数信息请参考：[Valine 官方文档](https://valine.js.org/)

## 3 Valine 的配置

1 查看评论

点击 `存储 -> 结构化数据`，选择 `创建 Class`，名称 `Comment`，其他保持默认，以后就可在此 Class 内查看

> 注：选择 `Valine` 评论系统是因为支持国内网络，不需要连接外网（翻墙）就可以进行显示评论系统，而且很好管理，页面简单

2 文章阅读量统计

点击 `存储 -> 结构化数据`，选择`创建 Class`，名称 `Counter`，其他保持默认，以后就可在此 Class 内查看

## 4 Valine 的优化

### 4.1 去除 Valine 的 Powered By

我喜欢简洁一点，所以想去掉这个提示。查看 Elements 可以看到这个 div，那么我只要移除这个 div 下的所有子节点，就可以去掉这个 Powered By 了。



![image-20200424152853285](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424152854.png)



但是怎么改呢？

使用 `F12`，按 `ctrl + shift + c`，鼠标放到 Powered By 的地方，点击一下，看到如下图：



![image-20200424193355880](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424193358.png)

这个 div 里的就是要修改的，打开 `themes/next/source/css/_custom/custom.styl` 文件，添加以下内容：

```css
// 隐藏 valine 的 powered by
.vcopy.txt-right {
  display: none;
}
```

效果：

![image-20200424193931176](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424193932.png)

### 4.2 邮件通知功能

#### 4.2.1 原邮箱模板通知功能

登录 [leadcloud](https://leancloud.cn/dashboard/login.html) 后台，在应用的`设置->邮件模板->邮件主题`（修改主题名称和内容，保存）

修改邮件主题：`你在{{appname}}的评论收到了新的评论`

![image-20200424183457064](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424183458.png)

内容如下：（链接为你的博客主页链接）

```
<p>Hi, {{username}}</p>
<p>你在 {{appname}} 的评论收到了新的回复，请点击查看：</p>
<p>
<a href="https://cungudafa.gitee.io" style="display: inline-block; padding: 10px 20px; border-radius: 4px; background-color: #3090e4; color: #fff; text-decoration: none;">马上查看</a></p>
```

点击 “保存” 按钮

 并且修改主题配置文件：改成 true

![image-20200424184935074](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424184936.png)邮件回复功能

登录 [leadcloud](https://leancloud.cn/dashboard/login.html) 后台，在应用的`设置->邮件模板->邮件主题`（修改主题名称和内容，保存）

修改邮件主题：`你在{{appname}}的评论收到了新的评论`

![image-20200424183457064](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424183458.png)

内容如下：（链接为你的博客主页链接）

```
<p>Hi, {{username}}</p>
<p>你在 {{appname}} 的评论收到了新的回复，请点击查看：</p>
<p>
<a href="https://cungudafa.gitee.io" style="display: inline-block; padding: 10px 20px; border-radius: 4px; background-color: #3090e4; color: #fff; text-decoration: none;">马上查看</a></p>
```

点击 “保存” 按钮

 并且修改主题配置文件：改成 true

![image-20200424184935074](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424184936.png)

不是很 nice！下面给出一个加强 plus 版

#### 4.2.2 Valine-Admin 通知功能

这里会使用到 Valine Admin，Valine Admin 项目是一个对 [Valine](https://valine.js.org/) 评论系统的拓展应用，可增强 Valine 的邮件通知功能。基于 Leancloud 的云引擎与云函数，主要实现评论邮件通知、评论管理、自定义邮件通知模板等功能，而且还可以提供邮件 `通知站长` 和 `@ 通知` 的功能。

（1）设置云引擎

* 需要确保 Valine 的基础功能是正常的，参考 [Valine 官方文档](https://valine.js.org/)

* 进入 [Leancloud](https://leancloud.cn/dashboard/applist.html#/apps) 对应的 Valine 应用中。

* 点击 `云引擎 -> 设置` 填写代码库：`https://github.com/wugenqiang/Valine-Admin`，保存

![image-20200424160156609](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424160158.png)

* 设置`自定义环境变量`，需要设置云引擎的环境变量以提供必要的信息，变量参数参考下面的`配置项`

![image-20200424162617782](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424162618.png)

配置项

|变量 | 示例 | 说明|
|---|---|---|
|SITE_NAME |HONGWEI’S Blog|	[必填] 网站名称|
|SITE_URL	|https://wugenqiang.github.io	|[必填] 网站地址，最后不要加 /|
|SMTP_SERVICE	|QQ	|[必填] 邮件服务提供商，支持 QQ、163、126、Gmail 以及 更多。 — 如这里没有你使用的邮件提供商，请查看自定义邮件服务器|
|SMTP_USER|	xxxx@qq.com|	[必填] SMTP登录用户，一般为邮箱地址|
|SMTP_PASS|	xxxx|	[必填] SMTP登录密码，一般为授权码，而不是邮箱的登陆密码，请自行查询对应邮件服务商的获取方式|
|SENDER_NAME|	HONGWEI’S Blog Valine 评论提醒|	[可选] 发件人|
|ADMIN_URL|	https://xxx.leanapp.cn/	|[建议] Web主机二级域名，用于自动唤醒|
|TO_EMAIL|	xxxxx@gmail.com	|[可选] 指定站长收信邮箱，默认值为SITE_USER。用于 SMTP 发件人与站长收件人不一致的情况下使用。|
|TEMPLATE_NAME |	rainbow |	[可选] 通知邮件的模板（default和rainbow），参考高级功能 |



* 点击 `云引擎 -> 部署`，选择 `Git 源码部署`，分支或版本号输入 `master`，下载最新依赖（可选），部署

![image-20200424191414775](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424191415.png)

（2）评论后台管理

* 点击 `云引擎 -> 设置`，在`Web主机域名`位置点击`申请`，获取二级域名，现在的二级域名不支持自定义，如果想好记请参考高级功能

![image-20200424162804234](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424162805.png)

* 设置后台管理登录信息，点击 存储 -> 结构化数据，选择 _ User  ->  添加行，只需要填写 password、username、email 这三个字段即可, 使用 email 作为账号登陆、password 作为账号密码、username 任意即可。（为了安全考虑，此 email 必须为配置中的 SMTP_USER 或 TO_EMAIL， 否则不允许登录）_

![image-20200424163010234](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424163011.png)

输入 https://kilqxscmpyri.leanapp.cn/ 登陆测试：输入你自己的二级域名

![image-20200424163216542](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424163217.png)

此后，可以通过 `https://二级域名.leanapp.cn/` 管理评论

![image-20200424163353928](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424163354.png)

（3）定时任务接收

> 防止云引擎休眠

免费版的 LeanCloud 容器，是有强制性休眠策略的，不能 24 小时运行：

- 每天必须休眠 6 个小时
- 30 分钟内没有外部请求，则休眠
- 休眠后如果有新的外部请求实例则马上启动（但激活时此次发送邮件会失败）。

分析了一下上方的策略，如果不想付费的话，最佳使用方案就设置定时器，目前基于 LeanCloud 自带定时器实现了两种云函数定时任务：

- 自动唤醒，定时访问 Web APP 二级域名防止云引擎休眠（推荐）
- 定时检查，每天定时检查 24 小时内漏发的邮件通知

> 配置

* 首先需要添加环境变量，点击 `云引擎 -> 设置`，配置`自定义环境变量`，变量名`ADMIN_URL`，变量值 `Web 主机域名，即二级域名地址`，添加后重启容器环境变量才会生效

* 配置定时任务，击 `云引擎 -> 定时任务`
  * 配置自动唤醒（推荐），创建定时任务，名称任意，生产环境选择 self-wake 云函数，Cron 表达式填入 0 */20 7-23 * * ?，表示每天  7 - 23 点每 20 分钟访问一次，这样可以保持每天的绝大多数时间邮件服务是正常的。
  * ![image-20200424164154408](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424164155.png)
  * 配置定时检查，创建定时任务，名称任意，生产环境选择 resend-mails 云函数，Cron 表达式填入 0 0 8 * * ?，表示每天早 8 点检查过去 24 小时内漏发的通知邮件并补发
  * ![image-20200424164343847](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424164345.png)

显示这样表明 OK

![image-20200424164656692](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424164657.png)



效果图：

![image-20200424191357751](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424191359.png)

### 4.3 实现评论显示 QQ 邮箱头像

1 获取接口

一个是 QQ 头像的，一个是 Gravatar 国内源，它们的调用方式如下：

* QQ头像： http://q1.qlogo.cn/g?b=qq&nk=QQ号&s=100 
* Gravatar头像： http://cdn.v2ex.com/gravatar/md5加密后的邮箱?s=100

以上就是两个头像接口的信息，值得注意的是 Gravatar 后面的 s 分辨率参数可以随意定义，而 QQ 不行，QQ 只有几个有限的分辨率，比如 100, 200, 640，其它的数字会报 400 错误，所以 QQ 的 s 参数更像是一种清晰度，宽高还是通过 css 定义比较好。

2 步骤实现：

- 获取邮箱判断是否为 qq 邮箱
- 提取 qq 号
- 将 valine 中的头像地址改为上述接口地址

3 F12 查看源码–发现 valine 中显示头像的相关代码是：（关键标签：`vimg`）

![image-20200424174604675](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424174606.png)

再以`ctrl+F`快速查找（关键词：`vimg`），不负众望，在 [Valine.min.js](https://unpkg.com/valine/dist/Valine.min.js) 中找到

![image-20200424174742603](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424174743.png)

替换掉 src 即可，好了，思路清晰，下面开始实现：

#### 4.3.1 下载 Valine.min.js

引入 [Valine.min.js](https://unpkg.com/valine/dist/Valine.min.js) 到本地`themes/next/source/js/src/Valine.min.js`
修改引入本地的 Valine

在 themes/next/layout/_partials/footer.swig 中引入 `<script src="./js/src/Valine.min.js"></script>`

![image-20200424180312422](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424180313.png)

#### 4.3.2 增加 QQ 头像判别

注意你的 valine 的版本号，我这里是 v1.4.9

打开 Valine.min.js，`ctrl+F` 快速查找关键词：

```
(j.cdn+(0,s.default)(t.get("mail"))+j.params)
```

稍加换行如图所示：(换行按分号换行)

```js
//var qq_img = m.cdn + a(e.get("mail")) + m.params;
var qq_img = E.cdn+(0,s.default)(t.get("mail"))+E.params;
if (t.get("mail").indexOf("@qq.com") >= 0) {
	var prefix = t.get("mail").replace(/@.*/, "");//前缀
	var pattern = /^\d+$/g;  //正则表达式
	var result = prefix.match(pattern);//match 是匹配的意思
	if (result !== null) {
		qq_img = "//q1.qlogo.cn/g?b=qq&nk=" + prefix + "&s=100";
	}
}
```

流程：

* 默认还是 gravator 头像接口
* 判断是否是 qq 邮箱，提取前缀 prefix
* qq 头像接口是 qq 号，如正则筛选剔除–重命名了带英文的 qq 邮箱
* 拼接头像地址 
* 加入 src 显示！

测试使用：

![image-20200424182739812](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200424182741.png)



### 4.4 设置邮箱审核规则

在 themes/next/layout/_partials/footer.swig 中引入：

```js
<script>
    //   自定义邮箱审核规则
    document.body.addEventListener('click', function(e) {
        if (e.target.classList.contains('vsubmit')) {
            const email = document.querySelector('input[type=email]');
            const nick = document.querySelector('input[name=nick]');
            const reg = /^[A-Za-z0-9\u4e00-\u9fa5]+@[a-zA-Z0-9_-]+(\.[a-zA-Z0-9_-]+)+$/;
            if (!email.value || !nick.value || !reg.test(email.value)) {
                const str = `<div class="valert text-center"><div class="vtext">请填写正确的昵称和邮箱！</div></div>`;
                const vmark = document.querySelector('.vmark');
                vmark.innerHTML = str;
                vmark.style.display = 'block';
                setTimeout(function() {
                    vmark.style.display = 'none';
                    vmark.innerHTML = '';
                }, 2500);
            }
        }
    })
</script>
```

效果如下：

![image-20200425085106285](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425085135.png)

### 4.5 点击回复直接评论

在 themes/next/layout/_partials/footer.swig 中引入：

```js
<script>
    // 点击回复直接评论,官方版本点击回复时都是跳回到页面上方的评论框进行回复，评论框是固定不动的
    // 参考https://immmmm.com/valine-diy,用到jQuery
    $(document).ready(function(){
        //$('.vemoji-btn').text('😀');
        $("#vcomments").on('click', 'span.vat',function(){
            $(this).parent('div.vmeta').next("div.vcontent").after($("div.vwrap"));
            $('textarea#veditor').focus();
        })
    })
</script>
```

效果如下：

![image-20200425085300007](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425085301.png)

### 4.6 实现评论自定义背景

在 themes/next/layout/_partials/footer.swig 中引入：

```css
<!-- 评论框美化 -->
<style>
    #comments .veditor{
        min-height: 10rem;
        background-image: url(https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425091751.png);
        background-size: contain;
        background-repeat: no-repeat;
        background-position: right;
        background-color: rgba(255,255,255,0);
        resize: none;}
</style>
```



效果如下：

![image-20200425091909658](https://gitee.com/wugenqiang/PictureBed/raw/master/CS-Notes/20200425091911.png)



