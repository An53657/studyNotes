# Day11-d1移动web-平面转换-渐变

## 1.平面转换
1. 平面转换(transform)
    - 作用：为元素添加动态效果。一般与过度配合使用
    - 概念：改变盒子在平面内的形态(位移，旋转，缩放，倾向)

2. 平面转换-平移
   - transform:translast(X轴移动距离，X轴移动距离)
   - 取值
        - 像素单位
        - 百分比(参照盒子自身尺寸计算)
        - 正负均可

     - 技巧
          - translast()只写一个值，表示沿X轴移动
          - 单独设置X或Y轴移动距离：translastX()或translastY()

3. 小结
     - 给盒子添加向左，向上的位移效果，属性值取值为负
     - translast()只写一个值表示水平方向了     
     - 百分比取值参照盒子自身尺寸计算最终结果  

4. 平移实现居中效果
    - 方法一
    ```css
    position:absolute;
    left:50%;
    top:50%

    margin-left:-50%;
    margin-top:-50%;

    width:200px;
    hight:100px
    ```
5. 方法二：百分比参照盒子自身尺寸计算结果
   ```css
    position:absoulte;
    left:50%
    top:50%
    transform:traanslast(-50%,-50%)
   ```

6. 平面转换-旋转 
    - 属性：transform: rotate(旋转角度)；
        - 角度定位是deg
    - 技巧
      - 取值正负均可
      - 取值为正，顺时针
      - 取值为负，逆时针

7. 平面转换-改变转换原点
    - 默认情况下：转换原点是盒子中心点
    - 属性
        ```html
        transform-origin:水平原点位置 垂直原点位置；
        ```
    - 取值
      - 方位名词(left right bottom center)n  
      - 像素单位取值
      - 百分比
8. 多重转换技巧 先平移在旋转
   transform:translate() rotate()

9. 平面转换-缩放
   - 属性
     ```
     transform: scale(缩放倍数)
     transform: scale(x轴缩放倍数，y轴缩放倍数)
    
     ```
   - 技巧
     - 通常，只为scale()设置一个值，表示x轴和y轴等比缩放
     - 取值大于1表示放大，取值小于1表示缩小

10. 平面转换- 倾向
    - 属性
        ```
         transform:skew();

         ```
    
    - 取值
      - 角度数deg
   
## 2 .渐变
11. 线性渐变
    - 属性
    ```
    background-image: linear-gradient{
        渐变方向，
        颜色1 终点位置，
        颜色2 终点位置，
        .....
    };
    ```
    - 取值
      - 渐变方向 可选
        - to 方位名称
        - 角度度数
      终点位置：可选
         - 百分比


12. 径向渐变
    - 作用
    - 属性
      ```
      background-image: radial-gradient(
        半径 at 圆心位置,
        颜色1 终点位置，
        颜色2 终点位置
        .....
      ```

    - 取值
      - 半径可以是2条，则为椭圆
      - 圆心位置取值：像素单位数值/百分比/方位名词 