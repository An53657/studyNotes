# Day03

## 1. CSS定义
1. CSS定义
   - 层叠样式(Cascading Style Sheets, 缩写CSS)，是一种样式表语言，用来描述HTML文档的呈现(美化内容)。
   书写位置title标签下方添加style双标签，style标签里面书写CSS代码
   ```html
    <title>CSS初体验</title>
    <style>
        <!-- 选择器{} -->
        p {
            <!-- CSS属性 -->
            color:red;
        }
    </style>
    <p>体验 CSS</p>
   ```

2. CSS书写在什么位置
   - title标签下方

3. 哪个标签可以书写CSS代码
   - style标签

4. CSS书写规则是什么
   - 选择器{属性名:属性值}

## 2. CSS引入方式
5. 引入方式
   - 内部样式表：学习使用
     - CSS代码写在style标签里面
   
   - 外部样式表：开发使用
     - CSS代码单独写在CSS文件中 (.css)
     - 在html使用link标签引入
     ```HTML
     <link rel="stylesheet" href="./myCSS">
     ```

   - 行能样式：配合JavaScript使用
     - CSS写在标签的style的属性值里
     
     ```html
     <div>sytle="color:red;"这是div标签</div>
     ```

6. 实际开发工作中，常用那种引入方式
   - 外部样式表 .css文件

7. 在HTML文件，使用哪个标签可以引入外部样式表
   - linl标签
   '''html
    <link rel="stylesheet" href="./mycss">
   ```

## 3. 选择器
8. 选择器的作用
   - 查找标签 查找样式

9. 基础选择器
   - 标签选择器
     - 使用标签名作为选择器 -> 选中同名标签设置相同样式
     ```html
     <style>
      p {
         color:red;
      }
     </style>
     ```


   - 类选择器
     - 作用 查找标签 差异化设置标签的显示效果
       步骤
          - 定义选择器 -> .类名
          - 使用类名选择器 - > 标签添加 class="类名"
          
      - 注意
        - 类名自定义，不要用纯数字或中文，尽量用英文命名
        - 一个选择器可以供多个标签使用
        - 一个标签可以使用多个类名 类名之间用空格隔开

      - 开发习惯 类名见面知意 多个单词可以用-隔开

      ```html
      <style>
           <!-- 定义类选择器  -->
         . red {
            color:red;
         }
      </style>

      <!-- 使用类选择器 -->
      <div class="red">这是一个div标签</div>
      ```


   - id选择器
     - 作用 查找标签差异化设置标签的显示效果
     - 场景 id选择器一般配合JS使用很少用来设置CSS样式
     - 书写步骤
       - 定义id选择器 -> #id名
       - 使用id选择器 -> 标签添加 id= "id名"
       - 同一个id名选择器在一个页面只能使用一次
       
       '''html
       <style>
          <!-- 定义id选择器 -->
          #red{
            color:red
          }
       </style>

       <!-- 使用id选择器 -->
       <div id="red">这是div标签</div>
       ```

   - 通配符选择器
     - 作用 查找页面所有标签，设置相同样式
     - 通配符选择器：* 不需要调用 浏览器自动查找页面所有标签 设置相同样式
     
     ```html
     * {
      color : red;
     }
     ```

10. 属性
    ```html
    属性名       作用
    width       宽带
    height      高度
    background- 背景色
    ```

## 4. 文字控制属性
11. 文字属性
    ```
    描述          属性      
    字体大小      font-size
    字体粗细      font-weight
    字体倾向      font-style
    行高          line-height
    字体族        font-family
    字体复合属性   font
    文本缩进       text-indent
    文本对齐       text-align
    修饰线         test-decoration
    颜色           coulor
    ```

12. 字体大小
    - 属性名 font-size
    - 属性值 文字尺寸
    ```css
    p{
      font-size
    }
    ```

13. 字体粗细
    - 属性名 font-weight
    - 属性值
      - 数字 开发使用
      正常  400
      加粗  700
        
     - 关键字
      正常  norml
      加粗  bold

14. 字体样式 (是否倾向)
    - 作用 清除文字默认的倾向效果
    - 属性名 font-style
      - 正常 (不倾向) normal
      - 倾向         italic

15. 行高
    - 作用   设置多行文本间距
    - 属性名  line-height
    - 属性值  
           - 数字 + px
           - 数字 (当前标签font-size属性值的倍数)
           ```cs
           line-heigth:30px;

           <!-- 当前标签字体的大小为16px -->
           line-heigth:2;
           ```

           - 行高测量行高：从一行文字的最顶端(最低端)量到下一行文字最顶端(最低端)

16. 如何书写line-height属性值
    数字 + px

17. 测量行高的方法是什么
    - 从一行的文字的最顶(最低)测量到下一行文字的最顶(最低)

18. 行高-垂直居中
    - 垂直居中技巧 行高属性值等于盒子的高度属性值

19. 字体族
    -  属性名 font-family
    - 属性值  字体名

    ```css
    font-family:字体名；
    ```

20. font复合属性
    - 使用场景
      设置网页文字公共样式使用，网页开发初期
     - 复合属性：属性简写方式 一个属性对应多个值的写法 各个属性值之间用空格隔开
     - font     是否倾向 是否加粗 字号/行高 字体(必须按顺序写)
     ```css
      div{
         font: italic 700 30px/2 楷体
      }
     ```
      - 注意 字号和字体必须写 否则font属性不生效

21. 文本缩进
    - 属性名：text-indent
    - 属性值：
            - 数字 + px
            - 数字 + em (推荐 1em = 当前标签字号大小)
    ```css
    p{
      text-undent: 2em;
    }
    ```  

22. 文本对齐
    - 作用   控制内容水平线对齐
    - 属性名  text-align
    - 属性值  
    ```css
    属性值   效果
    left     左对齐
    center   居中对齐
    right    右对齐   

    text-align:center;
    ```
    
23. 文本修饰线
    - 属性名 text-decoration
    - 属性值 
    ```css
    属性值          效果
    nore            无
    underline       下划线
    line-through    删除线
    overline        上划线
    ```

24. color文字颜色
    - 属性名 color
    - 属性值 
   ```css
   颜色表示方式    属性值         说明                                    使用场景
   颜色关键字      颜色英文单词    red，blue...                           学习测试
   rgb表示        rgb(r,g,b)     r,g,b表示红录蓝三原色 取值 0~255         了解
   rgba表示       rgba(r,g,b,a)  a表示透明的，取值0~1                     开发使用，实现透明的
   十六进制表示法  #RRGGBB        #000000,#ffcc00 简写 #000 #fc0    开发使用(从设计稿复制)
   ``` 

## 5. 调试工具
  25.  - 作用 检查 调试代码 帮助程序员发现代码问题。解决问题
       - 怎么用
          - 打开调式工具
                      - 浏览器窗口内任意位置/选中标签->鼠标点击->检查
                      - F12
       - 使用调试工具

26. 调试工具细节
    - 如果是错误的属性，有黄色感叹号
    - CSS属性前面有多选框，如果勾选，这个属性生效 反之