# Day12-d1-移动web-空间转换-动画

## 1. 空间转换
1. 空间转换
   - 空间是从坐标轴角度定义X Y Z 三条坐标轴构成了一个立体空间 Z轴位置与视线方向相同
   - 空间转换也叫3D转换
   - 属性：transform

2. 空间转换-平移
   - 属性
     ```
     transform:translate3d(X, Y, Z,);
     transform:translateX();   
     transform:translateY();
     transform:translateZ();
     ```

   - 取值(正负均可)
     - 像素单位数值
     - 百分比(参照盒子自身尺寸计算结果)  

3. 空间转换-视距
   - 作用：指定了观察者与视距=0平面的距离，元素添加透视效果
   - 透视效果：近大远小，近实远虚
   - 属性(添加给父级 取值800-1200 )
     ```
     perspective:视距
     ```

4. 空间转换-旋转
   - transform:rotateZ(值);
   - transform:rotateX(值);
   - transform:rotateY(值);
   - 左手法制-根据旋转方向确定取值正负
     - 左手握住旋转轴，拇指指向正值方向，其他四个手指弯曲方向旋转正值方向、
   
    - 拓展 
      - rotate3d(x, y, z, 角度数)：用来设置自定义旋转轴的位置及旋转的角度
      - x y z 取值为0-1之间的数值

5. 立体呈现
   - 作用：设置元素的子元素是位于3D间还是平面中
   - 属性名：transform-style
   - 属性值：
     - flat：子级处于平面中
     - preserve-3d:子级处于3d空间中
     
    - 呈现立体图形的步骤
        - 父元素添加transform-style:preserve-3d
        - 子级定位
        - 调整盒子的位置(位移或旋转)

6. 3d立体导航步骤
   - 搭建立方体
   - 添加鼠标悬停效果
   ![3d导航](../../imgs/html-css/Day12/01-立体导航-搭建立方体01.png)
---
   ![3d导航](../../imgs/html-css/Day12/02-立体导航-搭建立方体02.png)


  7. 空间缩放
     - 属性
       ```
       transform: scale3d(x, y, z);
       transform: scaleX();
       transform: scaleY();
       transform: scaleZ();
       ```

## 2. 动画(animation)
8. 概念
   - 过度：实现两个状态间变化的规程
   - 动画：实现多个状态间的变化的过程，动画过程可控制(重复播放，最终画面，是否暂停)

9. 实现步骤
   ![动画-实现步骤](../../imgs/html-css/Day12/03-动画-实现步骤.png)
   - 定义动画
     - 第一种
       ```
       @keyframes 动画名称{
        from {}
        to {}
       }
       ```
---
     - 第二种
       ```
       @keyframes 动画名称{
        0% {}
    
        30% {}
    
        ......
    
        100% {}
    
        ....
       }
       ```

   - 使用动画
     ```
     animation: 动画名称 动画花费时长；
     ```
---
10. 动画-复合属性
    ```
     animation: 动画名称 动画时长 速度曲线 延迟曲线 重复次数 动画方向 执行完毕
    ```

    - 提示
      - 动画名称和动画时长是必须赋值的
      - 取值不分先后
      - 如果有两个时间值 第一个时间表示动画时长 第二个表示延迟时间

11. 差分写法

    | 属性 | 作用     |  取值  |
    | ---- | ---- | ---- |
    | animation-name | 动画名称 |      |
    | animation-duration | 动画时长 |      |
    | animation-delay | 延迟时间 |      |
    | animation-fill-mode | 动画执行完毕的状态 | foeards :最后一帧状态 backwards:第一帧状态 |
    | animation-timting-function | 速度曲线 | steps(数字)：逐帧动画 |
    | animation-iteration-count | 重复次数 | infinite为无限循环 |
    | animation-direction | 动画执行方向 | alternate为反向 |
    | animation-play-state | 暂停动画 | paused为暂停 通常配合:hover使用 |

    

12. ![差分动画](../../imgs/html-css/Day12/04-动画-差分动画.png)

13. 案例-走马灯效果
    - 无缝动画原理：复制开头动画到结尾位置(图片累加宽度=区域宽度)    

14. 案例-逐帧动画
    - 核心原理
      1. steps()逐帧动画
      2. css精灵图

    - 精灵动画制作步骤
      - 准备显示区域
        盒子尺寸与一张精灵小图相同
      
      - 定义动画
        移动背景图(移动距离=精灵图宽度)

      - 使用动画
        steps(N) N与精灵小图个数相同
