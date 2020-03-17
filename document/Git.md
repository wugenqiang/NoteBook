# Git 的使用

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

