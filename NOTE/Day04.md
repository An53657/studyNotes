# Day04

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
   - CSS特性 化简代码/定位问题，并解决问题
     - 继承性
     - 层叠性
     - 优先级