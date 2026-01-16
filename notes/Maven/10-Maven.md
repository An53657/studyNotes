# Maven


## 1.Maven
1. Maven是什么
   - Maven 的本质是一共项目管理工具，将项目开发和管理过程抽象成一共项目对象
   (POM)
   
   - POM(Project Object Model)项目对象模型
   
     ![简介](..\04-imgs\01-Maven\01-Maven简介\01-Maven简介.png)


2. Maven的作用
   - 项目构建：提供标准的，跨平台的自动化项目构建方式
   - 依赖管理：方便快捷的管理项目依赖的资源(jar包)，避免资源间的版本冲突问题
   - 统一开发结构：提供标准的，统一的项目结构 

## 2.基础概念
   仓库
3. 仓库：用于存储各种资源，包括各种jar包
4. 仓库分类：

     - 本地仓库：自己电脑上存储的仓库，连接远程仓库获取资源
     - 远程仓库：非本机电脑上的仓库，为本地仓库获取资源
       - 中央仓库：Maven团队维护，存储所有资源的仓库
       - 私服：    部门/公司范围内存储资源的仓库，从中央1仓库获取资源

5. 私服的作用
      - 保存具有版权的资源，包括购买或自主研发的jar
        - 中央仓库的jar包都是开源的，不能存储具有版权的资源
        
      - 一定范围能共享资源，仅对内部开放，不对外共享
      
        ![仓库](..\04-imgs\01-Maven\02-基础概念\01-仓库.png)

6. 坐标
   - 什么是坐标？
     - Maven中的坐标用于描述仓库中资源的位置
   
   - Maven坐标主要组成
     - groupld:   定义当前Maven项目隶属于组织名称(通常是域名反写 )
     - artifactld:定义当前Maven项目名称(通常是模块名称)
     - version:   定义当前项目版本号
     packaging：  定义该项目的打包方式 

   - Maven坐标的作用
     使用唯一标识符，唯一性定位资源的位置，通过该标识符的识别与下载工作有机器完成

7. 本地仓库配置
   
8. 远程仓库配置

## 3.第一个Maven项目(手工制作)

9.  项目结构
   ![项目结构](..\04-imgs\01-Maven\03-第一个Maven项目(手动构建)\01-Maven项目结构.png)

11. Maven工程目录结构
    - 在src同级目录下创建pom.xml


12. Maven项目结构命令
   -  Maven构建命令使用Mvn开头，后面添加功能参数，可以一次性执行多个目录，使用空格分隔
   ```Maven
   mvn compile    编译
   mvn clean      清理
   mvn test       测试
   mvn package    打包
   mvninstall     安装到本地仓库 
   ```

13. 创建创建工程
    ![插件插件工程](..\04-imgs\01-Maven\04-第一个Maven项目(IDEA)\01-插件创建工程.png)
14. 第一个Maven项目(IDEA生成)
    - Maven环境配置
    - Maven项目创建
    - Maven命令执行
  
15. 原型创建java项目
    - 使用原型创建java项目4
    - 使用原型创建web项目
  
16. tomcat插件
    ```xml
    <!--构建 -->
    <build>
    <!-- 设置插件 -->
    <plugins>
    <!-- 具体插件配置 -->
      <plugin>
        <groupId>org.apache.tomcat.maven</groupId>
        <artifactId>tomcat7-maven-plugin</artifactId>
        <version>2.1</version>
      </plugin>
    </plugins>
    </build>
    ```

---

    ```xml
    <project xmlns="http://maven.apache.org/POM/4.0.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"
  xsi:schemaLocation="http://maven.apache.org/POM/4.0.0 http://maven.apache.org/maven-v4_0_0.xsd">
<!--  指定一个POM的模型版本-->
  <modelVersion>4.0.0</modelVersion>
<!--  组织-->
  <groupId>org.example</groupId>
<!--  项目ID-->
  <artifactId>untitled1</artifactId>
<!--  打包方式 web工程为war  java工程打包为jar-->
  <packaging>war</packaging>
<!--  版本号-->
  <version>1.0-SNAPSHOT</version>
<!--  设置工程的所有依赖-->
  <dependencies>
<!--    具体依赖-->
    <dependency>
      <groupId>junit</groupId>
      <artifactId>junit</artifactId>
      <version>3.8.1</version>
      <scope>test</scope>
    </dependency>
  </dependencies>

  <build>
    <plugins>
      <plugin>
        <groupId>org.apache.tomcat.maven</groupId>
        <artifactId>tomcat7-maven-plugin</artifactId>
        <version>2.1</version>
      </plugin>
    </plugins>
  </build>
</project>
    ```
    - tomcat7插件安装
    - 运行web项目
    ```

## 4. 依赖管理

17. 依赖配置·
    - 依赖指当前项目所需的jar包，一共项目可以设置多个依赖
    - 格式：
     ![依赖配置](..\04-imgs\01-Maven\05-依赖管理\01-依赖配置.png)


18. 依赖传递
    - 依赖具有传递性
      - 直接依赖：在当前项目中通过依赖配置建立依赖关系
      - 间接依赖：被依赖的资源的资源如果依赖其他资源，当前项目间接依赖其他资源
        ![依赖的转递性](..\04-imgs\01-Maven\05-依赖管理\02-依赖的转递习性.png)
    
    - 依赖转递冲突
      - 路径优先：当依赖中出现相同资源时，层叠越深，优先级越低，反之。
      - 声明优先：当前资源在相同层级依赖时，配置顺序靠前的覆盖配置顺序靠后的
      - 特殊优先：当同级配置了相同资源的不同版本，后配置的覆盖先配置的
      ![依赖的转递性](..\04-imgs\01-Maven\05-依赖管理\03-依赖传递冲突问题.png)

19. 可选依赖(不透明)
    - 可选依赖指对隐藏当前所依赖的资源
    ![依赖的转递性](..\04-imgs\01-Maven\05-依赖管理\04-可选依赖.png)

20. 排除依赖(不需要)
    - 排除依赖指的是主动断开依赖资源，被排除的资源无需指定版本-不需要
    ![依赖的转递性](..\04-imgs\01-Maven\05-依赖管理\05-抛出资源.png)

21. 依赖范围
    - 依赖的jar默认情况下可以在任何地方使用，可以通过scope标签标签设定其作用范围
    - 作用范围
      - 主程序范围有效(main文件范围内)
      - 测试程序范围内有效(test文件范围内)
      - 是否参与打包(package指令范围内)
         ![依范围](..\04-imgs\01-Maven\05-依赖管理\06-依赖范围.png)

22. 依赖范围传递性
    - 带有依赖范围的资源在进行传递时，作用范围将受到限制
     ![依范围传递性](..\04-imgs\01-Maven\05-依赖管理\07-依赖范围传递性.png)

## 5.声明周期与插件
23. 构建生命周期
    - Maven对项目构建的声明周期划分为3套
      - clear：  清理工作
      - default：核心工作 例如编译，测试，打包，部署等
      - site：   产生报告，发布站点等
      
      - clear生命周期
        - pre-clear   执行一些需要在clear之前完成的工作
        - clear       移除所有上一次构建生成的文件
        - post-clear  执行一些需要在clear之后立刻完成的工作

      - default构建生命周期
       ![依范围传递性](..\04-imgs\01-Maven\06-声明周期与插件\01-default构建生命周期.png)

      - site构建生命周期、
        - pre- site     执行一些需要在生成站点文档之前完成的工作
        - site          生成项目的站点文档
        - post-site     执行一些需要在生成站点文档之后完成的工作，并且为部署做准备
        - site-deploy   将生成的站点文档部署到特定的服务器上
24. 插件
    - 插件与生命周期内的阶段绑定，在执行到对应的生命周期时执行对应的插件功能
    - 默认maven在各个生命周期上绑定有预设的功能
    - 通过插件可以自定义其他功能