# 														Docker

## 			一.快速入门

- ### 部署MySQL

  镜像容器

  利用Docker安装应用时，Docker会自动搜索并下载应用*镜像(ing)*,镜像不仅包括镜像本身，还包括应用应用运行所需要的环境，配置，系统函数库.Docker还会在运行时创建一个隔离环境，称为*容器(container)*

  镜像仓库:存储和管理镜像的平台，Docker官方维护了一个公共仓库：[Docker官方仓库](https://hub.docker.com/)

- ### 命令解读

  ```dockerfile
  docker run -d |
  --name mysql l
  -p 3306:3306
  -e TZ=Asia/Shanghai
  -e MYSQL_ROOT_PASSWORD=123
  mysql
  ```

  ```dockerfile
  dockerr run    : 创建并运行容器， -d是让容器在后台运行
  --name mysql   : 给容器请个名字，必须唯一
  -p 3306:3306   ：设置端口映射
  -e KEY=VALUE   : 设置环境变量
  mysql          : 指定运行的镜像的名字
  ```

  - 镜像命令规范

    镜像名称一般分为两部分组成：[repoisitory]:[tag]

    ​	其中repoisitory就是镜像名

    ​	tag是镜像版本

    ​	如果没有写版本。那么会默认下载最新版
  
    ## 二.Docke基础

- ###     常见命令

  1.镜像拉取

  ```dockerfile
  docker pull [OPTIONS] NAME[:TAG|@DIGEST]
  
  • docker pull：拉取镜像的命令。
  
  • [OPTIONS]：可选参数，用于配置拉取过程，如认证信息等。
  
  • NAME[:TAG|@DIGEST]：要拉取的镜像名称、标签或摘要。
  ```

  2.查看所有镜像

  ```dockerfile
  docker images [OPTIONS] [REPOSITORY[:TAG]]
  
  • docker images：列出镜像的命令。
  
  • [OPTIONS]：可选参数，用于配置输出结果的格式等。
  
  • [REPOSITORY[:TAG]]：可选的镜像名称和标签，用于过滤输出结果。
  ```

  3.运行容器

  ```dockerfile
  docker run [OPTIONS] IMAGE [COMMAND] [ARG...]
  
  • docker run：运行容器的命令。
  
  • [OPTIONS]：可选参数，用于配置容器的各种选项，如端口映射、容器名称等。
  
  • IMAGE：要运行的镜像名称或ID。
  
  • [COMMAND] [ARG...]：可选的命令和参数，用于在容器内执行特定的命令。
  ```

  4.列出运行中的容器

  ```
  docker ps [OPTIONS]
  
  • docker ps：列出容器的命令。
  
  • [OPTIONS]：可选参数，用于配置输出结果的格式和过滤条件。
  ```

  5.获取容器或镜像的详细信息

  ```dockerfile
  docker inspect [OPTIONS] NAME|ID [NAME|ID...]
  
  • docker inspect：获取详细信息的命令。
  
  • [OPTIONS]：可选参数，用于配置输出结果的格式等。
  
  • NAME|ID [NAME|ID...]：要获取信息的容器或镜像的名称或ID。
  ```

  

  5.停止运行中的容器

  ```dockerfile
  docker stop [OPTIONS] CONTAINER [CONTAINER...]
  
  • docker stop：停止容器的命令。
  
  • [OPTIONS]：可选参数，用于配置停止过程，如超时时间等。
  
  • CONTAINER [CONTAINER...]：要停止的容器名称或ID。
  ```

  6.启动已停止的容器

  ```dockerfile
  docker start [OPTIONS] CONTAINER [CONTAINER...]
  
  • docker start：启动容器的命令。
  
  • [OPTIONS]：可选参数，用于配置启动过程，如守护模式等。
  
  • CONTAINER [CONTAINER...]：要启动的容器名称或ID。
  ```

  7.重启正在运行的容器

  ```dockerfile
  docker restart [OPTIONS] CONTAINER [CONTAINER...]
  
  • docker restart：重启容器的命令。
  
  • [OPTIONS]：可选参数，用于配置重启过程，如超时时间等。
  
  • CONTAINER [CONTAINER...]：要重启的容器名称或ID。
  ```

  8.终止正在运行的容器

  ```dockerfile
  docker kill [OPTIONS] CONTAINER [CONTAINER...]
  
  • docker kill：终止容器的命令。
  
  • [OPTIONS]：可选参数，用于配置终止过程，如信号等。
  
  • CONTAINER [CONTAINER...]：要终止的容器名称或ID。
  ```

  9.删除已停止的容器

  ```dockerfile
  docker rm [OPTIONS] CONTAINER [CONTAINER...]   docker rmi [OPTIONS] IMAGE [IMAGE...]
  
  • docker rm：删除容器的命令。
  
  • docker rmi：删除镜像的命令。
  
  • [OPTIONS]：可选参数，用于配置删除过程，如强制删除等。
  
  • CONTAINER [CONTAINER...]：要删除的容器名称或ID。
  
  • IMAGE [IMAGE...]：要删除的镜像名称或ID。
  ```

  11.在运行中的容器里执命令

  ```dockerfile
  docker exec [OPTIONS] CONTAINER COMMAND [ARG...]
  
  • docker exec：在容器内执行命令的命令。
  
  • [OPTIONS]：可选参数，用于配置执行过程，如进入交互模式等。
  
  • CONTAINER：要执行命令的容器名称或ID。
  
  • COMMAND [ARG...]：要在容器内执行的命令及其参数。
  ```

  12.查看容器内的日志输出

  ```dockerfile
  docker logs [OPTIONS] CONTAINER
  
  • docker logs：查看容器日志的命令。
  
  • [OPTIONS]：可选参数，用于配置输出结果，如时间戳等。
  
  • CONTAINER：要查看日志的容器名称或ID。
  ```

  

  

  [Docker官方文档](https://docs.docker.com/)

- ### 数据卷

  数据卷(volume) 是一个虚拟的目录是*容器内目录*和*宿主机目录*之间映射的桥梁

  查看数据卷的方法

  ```dockerfile
  • docker volume ls：列出所有的Docker卷。
  
  • docker volume create：创建一个新的Docker卷。
  
  • docker volume inspect：获取Docker卷的详细信息。
  
  • docker volume rm：删除指定的Docker卷。
  
  • docker volume prune：清除指定的Docker卷。
  
  ```

  · 挂载本地

  

- ### 自定义镜像

    镜像结构：

  ​     入口(Entypoint):镜像运行入口，一般是程序启动的脚本和参数

  ​     层(Layer)          :添加安装包，依赖，配置等，每次操作都形成新的一层

  ​      基础镜像(Baselmage):应用依赖的系统库函数库，环境，配置，文件等

  

  DockerFiles就是一个文本文件，其中包括一个个指令(Instruction),用指令来说明要执行说明操作来构建镜像。

  | 指令       | 说明                                         | 示例                                                         |
  | ---------- | -------------------------------------------- | ------------------------------------------------------------ |
  | FPOM       | 指定镜像                                     | FPOM centos : 6                                              |
  | ENV        | 设置环境变量，可在后面指令使用               | ENV key value                                                |
  | COPY       | 拷贝本地文件到镜像的指定目录                 | COPY ./jre11.tar.gz /temp                                    |
  | RUN        | 执行linux的shell命令，一般是安装过程的命令   | RUN tar - zxvf /tep/jre11.tar.gz && EXPORTS path=/tep/jer11:$patj |
  | EXPOSE     | 指定容器运行时监听的端口，是给镜像使用者看的 | EXPOSE 8080                                                  |
  | ENTRYPOINT | 镜像中应用的启动命令，容器运行时调用         | ENTRYPOINT java -jar xx.jar                                  |

  具体内容查看官方文档

  [官方文档](https://docs.docker.com/reference/dockerfile/)

  

  用命令构建镜像

  ```dockerfile
  docker build -t myImage:1.0 .
  -t:是给镜像起名，格式依然是repoiistory:tag的格式，不指定tag时，默认latest
  . :是指定Dockerfiles所在目录，如果就在当前目录，则指定为" . "
  ```

  总结：

  镜像结构是怎样的

  ​     镜像中包括了应用程序所需要的运行环境，函数库，配置，以及应用本身等各种文件，这些文         件分层打包而成。

  Dockerfiles是做什么的

  ​      Docker就是利用固定的指令来描述镜像的结构和构建过程，怎样Docker可以依次来构建镜像

  构建镜像命令是什么

  ​	

  ```
  docker build -t 镜像名 Dockerfile目录
  ```

- ### 容器网络

   加入自定义网络的容器才可以通过容器名互相访问，网络命令如下

  | 命令                      | 说明                       | 文档地址 |
  | ------------------------- | -------------------------- | -------- |
  | docker network create     | 创建一个网络               |          |
  | docker network ls         | 查看所有网络               |          |
  | docker network rm         | 删除指定网络               |          |
  | docker network prune      | 删除未使用的网络           |          |
  | docker network connect    | 使指定容器连接加入某个网络 |          |
  | docker network disconnect | 使指定容器连接离开某个网络 |          |
  | docker network inspect    | 查看网络详细信息           |          |

  

## 三.项目部署

- ### 部属前端
- ### 部署后端
- ### Docker Compose





[B站IT黑马Docker](https://www.bilibili.com/video/BV1HP4118797/?spm_id_from=333.1387.favlist.content.click&vd_source=6c942b16cbc2fc956585136ac4ffc82b) 



