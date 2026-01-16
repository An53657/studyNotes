# git-分布式版本控制系统

## 2.1.版本控制的方式

 



 

## 2.2.git工作流程图

 

## 3.1git基本配置

   设置用户信息

```
git config --global user.name "姓名"
git config --global user.email "邮箱"
```

查看配置

```
git config --global user.name
git config --global user.email
```

3.2.基础命令

1.查看修改状态

```
git status
```

2.添加工作区到暂存区

```
git add.
```

3.提交到暂存区到本地仓库

```
git commit -m "注释"
```

4.查看提交日志

```
git log
```

3.3版本回退

作用：版本切换

```
git reset  --hard  commit ID
commit ID 可以用 git log 查看
```

 如何查看已经删除的记录

```
git reflog
```

3.4添加文件到忽略表

在工作目录建.gitignore文件

3.5、分支

使用分支意味这可以把工作从开发主线分离出来进行修改等，从了不影响主线开发

3.5.1查看本地分支

```
git branch
```

3.5.2创建本地分支

```
git branch 分支名
```

3.5.3切换分支(checkout)

```
git checkout 分支名
```

 也可以切换不存在的分支(创建并切换)

```
git checkout -b 分支名
```

3.5.6合并分支(merag)

​	一个分支上的提交可以合并到另一个分支

```
git merge 分支名称
```

3.5.7删除分支

​	不能删除当前分支，可以删除分支

```
git branch -d b1 删除分支时，需要做各种检查
git branch -D b1 不做任何检查，直接删除 
```

3.5.8解决分支

3.6.1添加远程仓库

```
git remote  add <远端路径> <仓库路径>
远端名称：默认是origin 取决于远端服务器设置
仓库名称：出远端服务器获取此URL
eg:  git remote  add origin https://github.com/An53657/command.git
```

3.6.2查看远程仓库

```
git remote
```

3.6.3推送到远程仓库

```
git push [-f] [-set-upstream] [远程名称] [本地分支名[:远端分支名]]
```

​	如果远程分名和本地分支名相同，则可以只写本地分支名

```
git pushorigin master
```

​	-f  表示强制覆盖

--set-upstream推送到远端的同时并建立起远端分支的关联关系

```
git push  --set-upstream origin master
```

​	如果当前分支已经和远端分支关联，则可以省略分支名和远端名

```
git push 将master分支推送到已经关联的远端分支
```

3.6.5远程仓库克隆

```
git clone <仓库路径> <本地目录>
```

3.6.6从远程仓库中抓取和拉取

​	抓取命令数将仓库里的更新都抓取到本地，不会进行合并

```
 git  fetch [remote name] [branch name ]
```

​	拉取命令就是将远端仓库的修改拉到本地并自动合并

```
git pull [remote name] [branch name ]
```



[B站IT黑马git](https://www.bilibili.com/video/BV1MU4y1Y7h5/?spm_id_from=333.1387.favlist.content.click&vd_source=6c942b16cbc2fc956585136ac4ffc82b)
