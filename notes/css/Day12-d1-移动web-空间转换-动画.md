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



## 2. 动画