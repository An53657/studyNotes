# Day01-d1基础语法

## 1.1 javascript是介绍
1. javascript是什么
   - 是一个运行在客户端(浏览器)的编程语言，实现人机交互效果。

2. 作用(做什么)
   - 网页特效(监听用户的一些行为让网页做出对应的反馈)
   
   - 表单验证(针对表单数据的合法性进行判断)
   
   - 数据交互(获取后台数据，渲染前端)

   - 服务的编程(node.js)
   
     ![]()
   
3. javascript的组成(有什么)
   - ECMAScript
     - 规定了基础语法
       - 比如：变量，分支语句，循环语句，对象等
   
    - Web APIs
      - DOM: 操作文档，比如页面元素进行移动，大小，添加，删除等
      - BOM：操作浏览器，比如页面弹窗，检测窗口宽度，存储数据到浏览器等

4. 总结
   - javascript是什么
     - javascript是一种运行在客户端(浏览器)的编程语言
    
     - javascript组成是什么
       - ECMAScript(基础语法)，webAPIs(DOM,BOM)

5. js书写位置
   - 内部js
        在直接写在html文件里，用script标签包住
        规范：script标签写在</body>上面
        拓展：alert('内容')页面弹出警告对话框

         - 注意事项
           如果将<script>放在html文件的底部附近的原因是浏览器会按照代码中的顺序加载html
           如果先加载的js期望修改其下方的html，那么他可能由于html还没加载尔失效
           因此，将js代码放在html页面底部附近通常是最好的 

           ```javascript
            <script>
                alert('内容')
            </script>
            </body>
           ```

   - 外部js
        代码放在以js为结尾的文件里
        语法：通过script标签引到html页面中
           
           - 注意事项
             script标签中间无需写代码，否则会被忽略
             外部介绍会使代码更加有序，易于复用，且没有脚本的混合，html也更加易
             读，这是个好习惯

             ```javascript
               <body>
                <!-- 通过scr引入外部的js文件 -->
                <script>scr="my.js"</script>
               </body>     
            ```

    - 内联系js 
        代码写在标签内部
             语法：
             注意：了解即可，vue框架会用到这种

        ```javascript
        <body>
        <button> onclick="alert"("内容")>内容</button>
        </body>
        ```

6. 总结
   - js书写的三种位置
     内部
     外部
     行内

     - 注意事项
       书写位置尽量写到文档末尾</body>前面
       外部js标签不要写代码，否则会被忽略

        


