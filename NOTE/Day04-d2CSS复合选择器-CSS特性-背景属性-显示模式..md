# Day04-d2CSS复合选择器-CSS特性-背景属性-显示模式.
## 1. 复合选择器
1. 定义
   - 由两个或多个基础选择器，通过不同的方式组合而成

2. 作用
   - 更准确，更高效的选择目标·
   ```css
   <span>span 标签</span>

   <div>
     <span>文字颜色是绿色</span>
   </div>
   ```

3. 后代选择器
   - 后代选择器
     选择某元素的后代元素
   - 选择器的写法
     父级选择器 子级选择器{CSS属性} 父子选择器用逗号隔开
     ```css
     <style>
     div span {
        color : red
     }
     </style>

     <span>span 标签 </span>
     <div>
     <span>这是span的儿子</span>
     </div>
     ```

4. 子代选择器
   - 子代选择器：选中某元素的子代元素(最近的子级)
   - 选择器写法：父级选择器>子级选择器{CSS属性} 父级选择器之间用逗号隔开
   ```css
   <div
   <span>这是一个span标签</span>
   <p>
   <span>这是div里面的p标签</span>
   </p>
   <div>

   ```

5. 并集选择器
   - 并集选择器：选中多组标签设置相同样式
   - 选择器写法：选择器1，选择器2...选择器N{CSS属性} 选择器之间用，隔开
   ```css
   <style>
    div,
    p,
    span {
        color:red;
    }
   </style>

   <div>div标签</div>
   <p>p标签</p>
   <span>span标签</span>
   ```   

6. 交集选择器
   - 交集选择器：选中同时满足多个条件的元素
   ```css
   <p  class="box">p 标签 使用了类选择器的box</p>
   <p>p 标签</p>
   <div class="box">div 标签 使用了类选择器</div> 
   ```  

   - 选择器写法：选择器1选择器2{CSS属性} 选择器之间连写 没有任何符号
   
7. 伪类选择器
   - 伪类表示元素的状态 选中元素的某个状态设置样式
   - 鼠标悬停状态       选择器：hover{CSS属性}
   ```css
   <style>
      a:hover {
         color:red;
      }

      .box:hover {
         color:green;
      }
   <style>
   <a href="#">a 标签</a>
   <div class="box">div标签 </div>
   ```

8. 伪类-超链接 (拓展)
   - 超链接一共有四个状态
   ```css
   选择器     作用
   :link     访问前
   :visited  访问后
   :hover    鼠标悬停
   :active   点击时激活
   提示如果要给超链接设置四个状态 需要按LVHA的顺序书写
   ```
## 2. CSS特性
9.   - CSS特性 化简代码/定位问题，并解决问题
     - 继承性
     - 层叠性
     - 优先级

10. 继承性
    - 继承性：子级默认继承父级的文字扩展属性

11. 层叠性
    - 相同的属性会覆盖：后面的CSS属性覆盖前面的CSS属性
    - 不同的属性会叠加：不同的CSS都生效

12. 优先级
    - 优先级 也叫权重 当一共标签使用了多种选择器时，基于不同种的类型的选择器的匹配规则

    规则：选择器优先级高的样式生效
    格式：通配符选择器 < 标签选择器 < 类选择器 < id选择器 < 行内样式 < !impotant
    (选中标签选择器的范围越大，优先级越低 )
   
   - 叠加计算规则
     - 叠加计算，如果是复合选择器，则需要权重叠加计算
     - 公式：(每一级不存在进位) (行内样式，id选择器，类选择器个数，标签选择器个数)
     - 规则
          - 从左向右，依次比较个数，同一级个数优先级高，如果个数相同，则向后比较
          - ！important权重最高
          - 继承权重最低

## 2. Emment写法
13. Emmet写法
    - Emmet写法：代码简写方式，输入缩写vs code会自动生成对应的代码
      - html
        ```html
        说明            标签结构                         Emmet
        类选择器        <div class-="box"></div>        标签名.类名
        id选择器        <div id="box"></div>            标签名.id名  
        同级标签        <div></div><p></p>              div+p
        父子标签        <div><p></p></div>              div>p
        多个相同标签    <span></span><span><span>      span*3
        有内容的标签    <div>内容</div>                div{内容}
        ``` 
      
      - CSS:大多数简写方式为属性单词的首字母

14. 背景属性
    ```html
    描述          属性
    背景色        background-color
    背景图        background-image
    背景平铺方式   background-repeat
    背景位置       background-position
    背景图缩放     background-size
    背景图固定     background-attachment
    背景复合属性   background
    ```

15. 背景图 
    - 在网页中，使用背景图实现装饰性的图片效果
    - 属性名，  background-image (bji)
    - 属性值，  url(背景图 URL)

    ```html
    <div>
      width: 400px;
      heigt: 400px;
      
       background-image: url;
    </div>
    ```

16. 背景平铺方式
    - 属性名 background-rpeate (bgr)

    ```html
    属性值      效果
    no-repeat   不平铺  
    repeat      平铺默认效果
    repeat-x     水平方向平铺
    repeat-y     c垂直方向平铺
    ```

17. 背景图位置
    - 属性名：background-position (bjp)
    - 属性值: 水平方向位置 垂直方向位置
      - 关键字
            ```html
            关键字   位置
            left     左侧
            right    右侧
            center   居中
            top      顶部
            botton   底部
            ```

      - 坐标 (数字 + px 正负都可以)
           - 水平 正数向右 负数向左
           - 垂直 正数向下 负数向上

      - 提示
        - 关键字取值方式写法，可以颠倒顺序
        - 可以只写一共关键字，另一个方向默认为具中，数字只写一共值表示水平方向，垂直方式为居中

18. 背景图缩放
    - 作用 设置背景图大小
    - 属性名 background-size (bjz)
    - 常用属性值
    - 关键字
          - cover 等比例缩放背景图片完全覆盖背景区，可能背景图片部分看不见
          - contain 等比例缩放背景图以完全装入背景区，可能背景图部分为空
    - 百分比 根据盒子尺寸计算图片大小
    - 数字 + 单位 (例如 px) 

19. 背景图固定
    - 作用 背景不会随着元素的内容滚动
    - 属性名 background-attachment (bga)
    - 属性值 fixed
   
20. 背景复合属性
    - 属性名：background(bg)
    - 属性值：背景色 背景图 背景平铺方式 背景位置/背景缩放 背景固定 (空格隔开各个属性值，不区分顺序)

## 5. 显示模式
21. 显示模模式 标签(元素)的形式方式

22. 显示模式的作用 布局网页时候，根据标签的显示模式选择合适的标签的摆放内容 

23. 显示模式
    - 块级
         - 独占一行
         - 宽度默认是父级的100%
         - 添加宽高属性生效

    - 行内元素
         - 一行可以显示多个
         - 设置宽高属性不生效
         - 宽高尺寸由内容撑开

    - 行内块元素
         - 一行可以显示多个
         - 设置宽高属性生效
         - 宽高尺寸也可以由内容撑开

24. 总结
       - 块级：独占一行，宽高属性生效，默认宽度是父级的100%
       - 行内：一行共多个，宽高属性不生效，宽高由内容撑开
       - 行内块： 一行共多个，宽高默认由内容撑开

25. 转换显示模型
    - 属性名 display
    ```html
    属性值        效果
    block         块级
    inline-block  行内块
    inlin         行内
    ```
   