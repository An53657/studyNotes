# Day06-d4CSS标准流-浮动-FLex布局

## 1. 标准流
1. 概念
   - 标准流也叫文档流，指的是标签在页面中默认的排序规则，例如块元素独占一整行，行内元素可以一行显示多个。

## 2. 浮动
2. 浮动
   - 作用：让块原元素水平排列
   - 属性名：float
   - 属性值
     - left：左对齐
     -right：右边的

3. 浮动后的盒子有什么特定
   - 顶对齐
   - 具备行内块特点
   - 脱标

4. 清除浮动
   - 场景：浮动元素会脱标，如果父级没有高度，子级无法撑开父级高度(可能导致页面布局错乱)
   - 解决方法：清除浮动(清除浮带来的影响)
     - 额外标签：在父级元素内容最后添加一个块级元素，设置CSS属性clear:both
     - 单伪元素
       ```html
        .clearfix::after{
            content:"";
            display:block;
            clear:both;
        }
       ```

     - 双伪元素法(推荐)
      ```html
      .clearfix:before,
      .clearfix:after{
        content: "";
        display:table;
      }

      .clearfix:after{
        clear:both;
      }
      ```

     - overflow :父元素添加CSS属性 overflow:hidden

## 3. FLex布局
5. 概念
   - FLex布局也叫弹性布局，是浏览器提倡的布局模型，非常适合结构化布局，提供了强大的空间发布和对齐能力
   - FLex模型不会产生浮动布局中脱标现象，布局网页更简单。更灵活

6. Flex组成
   - 设置方式：给父元素设置 display：FLex，子元素可以自动挤压和拉伸
   - 组成部分
     - 弹性容器
     - 弹性盒子
     - 主轴：默认在水平方向
     - 侧轴/交轴：默认在垂直方向

     

7. FLex
   ```
   描述                         属性
   创建FLex容器                display：flex
   主轴对齐方式                justify-content
   侧轴对齐方式                alian-items
   某个弹性盒子设置对齐方式     alian-self
   修改主轴方向                flex-direction
   弹性伸缩比                  flex
   弹性盒子换行                flex-wrap
   行对齐方式                  align-content

   ```

8. 主轴对齐
   - 属性名
     ```
     属性值             效果
     flex-start         默认值，弹性盒子从起点开始依次排列
     flex-end           弹性盒子从终点开始依次排列
     center             弹性盒子沿主轴居中排列
     space-between      弹性盒子沿主轴均匀排列，空白间距均匀分在弹性盒子之间
     space-around       弹性盒子沿主轴方向均匀排列，空白间距均匀分在弹性盒子两侧
     space-evenly       弹性盒子沿主轴方向均匀排列，弹性盒子与容器之间的距离相等
     ```
    
9. 侧轴对齐方式
   - 属性名
     - align-items  当前弹性容器内所有弹性盒子的侧轴对齐方式 (给弹性容器设置)
     - align-self   单独控制某个弹性盒子的侧轴对齐方式(给弹性盒子设置)
       ```
       属性值     效果
       stretch    弹性盒子沿着侧周线被拉伸至铺满容器(弹性盒子没有设置侧轴方向尺寸侧默认拉伸)
       center     弹性盒子沿着侧轴居中排列
       flex-start 弹性盒子从起点开始依次排列
       flex-end   弹性盒子从终点开始依次排列   
       ```