# Git推送至GitHub和下载至本地

# 1 创建一个空目录，并初始化

```shell
git init
```



## 2 将远程版本库中代码与本地版本库中代码进行合并。

```shell
git pull https://github.com/wugenqiang/NoteBook.git
```



## 3 将本地文件更新Github中文件库

```shell
git add .
git commit -m 'update:更新文件'
```

将本地版本库代码上传至远程版本库。

```shell
git push -u https://github.com/wugenqiang/NoteBook.git master
```

OK。



# Git进阶：分支管理

> 参考：廖雪峰Git教程：https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000/0013743862006503a1c5bf5a783434581661a3cc2084efa000
>
> https://www.jianshu.com/p/92305d949c0e

![](https://gitee.com/wugenqiang/images/raw/master/image/1632103207035.png)

## 1.创建分支

创建一个分支，名为dev

```
git branch dev
```

## 2.切换分支

切换到dev分支

```
git checkout dev
```

## 3.创建并切换分支

创建并切换到dev分支，即上面两条命令可合成一条。

```
git checkout -b dev
```

## 4.查看当前分支

```
git branch
```

## 5.合并分支到当前分支

合并dev分支到当前分支

```
git merge dev
```

## 6.删除分支

删除dev分支

```
git branch -d dev
```

