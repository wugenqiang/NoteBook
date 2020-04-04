# Git 的使用

## 前言

本人在学习计算机专业知识的过程中，深知学习笔记的重要性，所以整理了相关学习笔记，为了在需要的时候方便查看，目前正在逐渐完善和补充中，如果本学习笔记有幸被您光顾和使用，在使用中出现任何疑问或者有更好的见解的话，可以右下角 OPEN CHAT 我，也可以右上角 邮我，当然还可以加入我的讨论组，如果觉得本书对你有帮助，可以打赏我，以鼓励我更好的创作，下面附赞助二维码，再次谢谢您的大力支持！

<div ><img src="https://wugenqiang.gitee.io/cs-notes/images/pay/wechat-pay.png" width="200" height="200" /></div>

> 如果觉得文章有帮助，不妨请我喝杯 Coffee，祝福好心人年年高升！

## Git 提交到 GitHub 基本操作

* （1）git add 文件名称/.
  * "." 代表全部
* （2）git commit -m  '本次修改注释'
  * 提交到版本库
* （3）git push -u origin master 
  * 推送到远程仓库

## 指定不上传的文件夹

1.文件夹内右键git bash，输 touch .gitignore，注意中间有空格。 

2.编辑器打开生成的 .gitignore 文件，加入:

```
.idea
/*以及其他你想要忽略的文件或文件夹*/
```

3.保存。

4.以后再add到暂存区的时候就会忽略你配置的文件或文件夹了

> 忽略具体的文件或文件夹：

```
/target/  // 忽略这个target 目录
log/*     // 忽略log下的所有文件
css/*.css // 忽略css目录下的.css文件
```

## 撤销提交

* 已暂存 未提交

```
git reset
git checkout .
```

