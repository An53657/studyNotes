#  **MySQL学习笔记**

##      一. MySQL基础篇

  1. ### MySQL概述

     1.  数据库相关概念

        | 名称           | 全称                                                         | 简称                            |
        | -------------- | ------------------------------------------------------------ | ------------------------------- |
        | 数据库         | 存储数据的仓库，数据库是有组织的存储                         | DataBase(DB)                    |
        | 数据库管理系统 | 操作和管理数据库的大型软件                                   | DataBase ManagemebtSystem(DBMS) |
        | SQL            | 操作关系型数据库编程语言，定义了一套操作关系型数据库统一标准 | Strucured Query Language(SQL)   |

        2. ### MySQL
     
           · 版本
     
           ​	MySQL官方提供了两种不同的版本:
     
           ​		· 社区版  (MySQL Community Sever)
     
           ​		   免费，MySQL不支持任何技术支持
     
           ​		
     
            		 · 商业版 (MySQL Enterprise Edition)
     
           ​		   收费，可以适用30天，官方提供技术支持  
     
           · 下载
     
           [MySQL](https://www.mysql.com/cn/downloads/)
     
           <img src="C:\Users\kelly\Downloads\MySQL下载.png" alt="MySQL下载" style="zoom:25%;" />
           
           3. ### 启动与停止
           
           ​	· 启动
           
           ​		`net start mysql80`
           
            	· 停止
           
           ​	   `
           
           ```sql
           net stop mysql80
           ```
           
           `
           
           ​	· 客户连接方式
           
           ​		方式一:MySQL提供的客户端命令行工具
           
           ​			![方式一](C:\Users\kelly\Pictures\方式一.png)
           
           ​		方式二:系统自带的命令行工具执行命令
           
           ​			`
           
           ```sql
           mysql [-h 127.0.0.1] [-P 3306] -u root -p
           ```
           
           ​			 mysql - h:连接的是哪个ip
           
           ​			 -P:连接的是哪个端口
           
           ​			 -u:指定以root用户登录
           
           ​			 -p:指定密码
           
            4.  #### 数据模型
           
                · 关系型数据库(RDBMS)
           
                概念:建立在关系型模型基础上，由多张相互连接的二维表组成的数据库
           
                特点:
           
                - 使用表存储数据，格式统一，便于维护
                - 使用SQL语言操作，标准统一，使用方便
           
                
           
           ​			
           
           
     
       2.  ###  SQL语句
     
            1.  #### SQL通用语法
     
                	1. SQL语句可以当行或多行书写，以分号结尾
           		
                	2. SQL语句可以使用空格/缩进来增强语句可读性
           		
                	3. MySQL数据库SQL语句不区分大小写，关键字建议使用大写
           		
                	4. 注释:
           		
                	​	· 当行注释: --注释内容 或 # 注释内容(MySQL特有)
           		
                	​	· 多行注释: /*注释内容*/
     
            2.  #### SQL分类
     
                ​	
     
                | 分类 | 全称                       | 说明                                                   |
                | ---- | -------------------------- | ------------------------------------------------------ |
                | DDL  | Data Definition Language   | 数据定义语言，用来定义数据库对象(数据库，表，字段)     |
                | DML  | Data Manipulation Language | 数据库操作语言，用来对数据库中的数据进行增删改         |
                | DQL  | Data Query Language        | 数据库查询语言，用来查询数据库中表的记录               |
                | DCL  | Data Control Language      | 数据库控制语言，用来创建数据库用户，控制数据库访问权限 |
     
                
     
            3.  #### DDL
     
                一.数据库查询
     
                (1 ).查询所有数据库
     
                ```sql
                SHOW DATABASES;
                ```
     
                  查询当前数据库
     
                ```sql
                SELECT DATABASE();
                ```
     
                (2 ).创建
     
                ```sql
                CREATE DATABASE [IF NOT EXISTS 数据库名] [DEFAULT CHARSET 字符集] [COLLATE 排序规则];
                ```
     
                (3 ).删除
     
                ```sql
                DROP DATABASE [IF EXISTS] 数据库名;
                ```
     
                (4 ).使用
     
                ```sql
                USE 数据库名;
                ```
     
                二.表操作-查询
     
                (1 ).查询当前数据库所有表
     
                ```sql
                SHOW TABLES;
                ```
     
                (2 ). 查询结构
     
                ```sql
                DESC 表名;
                ```
     
                (3 ).查询指定表的建表语句
     
                ```sql
                SHOW CREATE 表名;
                ```
     
                
     
            4.  #### DML
     
            5.  #### DQL
     
            6.  #### DCL

###  3.函数

### 4.约束

### 5.多表查询

### 6.事务

 

 

​	[B站IT黑马mySQL](https://www.bilibili.com/video/BV1Kr4y1i7ru/?spm_id_from=333.1007.top_right_bar_window_custom_collection.content.click&vd_source=6c942b16cbc2fc956585136ac4ffc82b)