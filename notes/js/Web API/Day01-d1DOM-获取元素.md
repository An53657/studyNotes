# Day01-d1DOM-获取元素

## 1.WebAPI基础认知
1. 作用和分类
   - ![作用和分类](../../../imgs/js/webAPI/Day01/01-WebAPI基础认知-作用和分类.png)
   - 作用：就是使用js去操作html和浏览器
   - 分类
     - DOM:文档对象模型
     - BOM:浏览器对象模型

2. 什么是DOM
   - DOM(Document Object Model)--文档对象模型是用来呈现以及与任意HTML或XML文档交互的API
   - 简单理解：DOM是浏览器提供的一套专门用来操作网页内容的功能
   - DOM的作用
     - 开发网页内容特效和实现用户交互

3. DOM树
   - ![DOM树](../../../imgs/js/webAPI/Day01/02-WebAPI基础认知-DOM树.png)
   - DOM树是什么
     - 将HTML文档以树状图结构直观的表现出来，我们称为文档树或DOM树
     - 描述网页内容关系的名词
     - 作用：文档树直观体现了标签与标签之间的关系

4. DOM对象(重要)  
   - ![DOM对象](../../../imgs/js/webAPI/Day01/03-WebAPI基础认知-DOM对象.png)
   - DOM对象：浏览器根据html标签生成的js对象
     - 所有标签属性都可以在这个对象上找到
     - 修改这个对象的属性会自动映射到标签身上
   - dom的核心思想
     - 把网页内容当作对象来处理
   - document对象
     - 是DOM里提供的一个对象
     - 所以它提供的属性和方法都是用来访问和操作网页内容的
     -网页里的所有内容都在document里
5. 总结
   - DOM树是什么
     - 将HTML文档以树状结构直观的表现出来，我们称为文档树或DOM树
     - 作用：文档树直观的体现了标签与标签之间的关系
   - DOM对象是怎样创建的
     - 浏览器根据HTML标签生成的js对象(DOM对象)
     - DOM的核心就是把内容当对象来处理
   - document是什么
     - 是DOM里提供的一个对象
     - 网页所有内容都在document里面
   

## 2.获取DOM对象
   - 目标:能查找/获取DOM元素
1. 根据CSS选择器来选择DOM(重点)
   - 选择匹配第一个元素
     - 语法
       ```javascript
        document.querySelector('css选择器')
       ```

     - 参数
       - 包括一个或多个有效的css选择器 字符串

     - 返回值
       - CSS选择器匹配第一个元素，一个HTMLElement对象
       - 如果没有匹配返回null

   - 选择匹配多个元素
     - 语法
       ```javascript
        document.querySelectorALL('css选择器')
       ``` 

     - 参数
       - 包含一个或多个有效的CCSS选择器
      
     - 返回值
       - CSS选择器匹配的NodeList对象集合
     
     - ```javascript
      document.querySelectorAll(`CSS选择器`)
      ```

     - 到底的是一个伪数组
       - 有长度有索引的数组
       - 没有pop() push()等数组方法
       - 得到数组元素要用for循环
       - 哪怕只有一个元素，通过quseryScelectAll()获取过来的也是一个伪数组，里面只有一个元素而已

     
      
   - 总结
     - 获取一个DOM元素推荐使用，能直接操作修改吗
       - querySelector()
       - 可以

     - 获取多个DOM元素推荐使用，能直接修改吗，如果不能怎么修改
       - querySelectorAll()
       - 不可以，只能通过遍历方式修改


2. 其他获取DOM元素的方法(了解)
   - ![获取DOM对象](../../../imgs/js/webAPI/Day01/04-WebAPI-获取DOM对象.png)

## 3.操作元素内容
1. 对象.innerText属性
   - 元素innerText属性
     - 将文本内容添加/更换任意标签位置
     - 显示纯文本，不解析标签

2. 对象.innerHTML
   - 将文本内容添加/跟新到任意标签里面
   - 会解析标签，多标签建议使用模板字符

3. 总结
   - 设置/修改DOM元素内容有两种方式
     - 元素.innerText属性
     - 元素.innerHTML属性

   - 三者的区别是什么
     - 元素.innerText属性，只识别文本，不能解析标签
     - 元素.innerHTML属性，能解析文本，能解析标签

## 4.操作元素属性
1. 操作元素常用属性
   - 还可以通过JS设置/修改标签元素属性 比如通过src更换图片
   - 最常见的属性比如herf，title，src等
   - 语法
     ```javascript
      对象.属性 = 值
     ```

2. 操作元素样式属性
   - 通过style属性操作CSS
     - 注意
       - 修改样式通过stayle属性引出
       - 如果属性有-连接符，需要转换为小驼峰命名法
       - 赋值的时候，需要的时候不要忘记加CSS单位
       
     - 语法
       ```javascript
        对象.style.样式属性 = 值
       ```


   - 操作类名(className)操作CSS
     - 如果修改样式比较多，可以通过借助CSS类名的形式
     - 注意
       - 由于class类是关键字，所以使用className
       - className是使用新值换旧值，如果需要添加一个类，需要保留之前的类名

     - 语法
       ```javascript
        //active是一个class类名
        元素.class = 'active'
       ```

     - 总结
       - 使用className有什么好处
         - 可以同时修改多个样式
       - 使用className有什么注意事项
         - 直接使用className赋值会覆盖以前的类名

   - 通过classList操作控制CSS
     - 为了解决className容易覆盖以前的类名，可以通过classList方式追加和删除
    
     - 语法
       ```javascript
        //追加一个类
        元素.classList.add('类名')

        //删除一个元素
        元素.classList.remove('类名')

        //切换一个元素
        元素.classList.toggle('类名 ')
       ```
     - 总结
       - classNamme和classList区别
         - classList修改大量样式方便
         - className修改少量样式方便
         - classList是追加和删除不影响以前类名

3. 操作表单元素属性

4. 自定义属性

## 5.定时器-间歇函数

