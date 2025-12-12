# Day05-d5-基础-对象

## 对象
1. 什么是对象
   - 对象(Object)：js的一种数据类型
   - 用来描述一个事务

   - 总结
     - 对象是什么
       - 对象是一种数据类型
       - 无序的数据的集合
     - 对象有什么特点
       - 无序的数据集合
       - 可以详细描写某个事物

2. 对象使用
   - 掌握对象语法用它保存多个数据
   - 声明语法
     ```javascript
        let 的姓名 = {}
     ```
   - 例如
     ```javascript
        let person = {}
     ```

    - 对象有属性方法组成
      - 属性:信息叫特征(名词)
      - 方法:功能叫行为(动词)
      - 例如
        ```javascript
        let 对象名 = {
            属性名：属性值
            方法名:函数
        }
        
   - 属性
     - 数据描述性的信息称属性，
     - 注意
       - 属性都是成对出现，包括属性名和值，他们之间用英文的:隔开
       - 多个属性之间用英文的,隔开
       - 属性就是依附在对象上的变量(外面是对象，里面是属性)
       - 属性名可以用""或''，
     - 例如
       ```javascript
        let object = {
            uname:"pink",
            age:18,
            gender: "男"
        }
       ```
   - 总结
     - 对象属性没有顺序
     - 属性和值用什么隔开
       - 属性和值用;隔开
       - 多个属性和值用逗号隔开

   - 操作对象CRUD
     - 目标：能够使用对象中的数据
     - ![操作对象CRUD](../../imgs/js/基础/Day04/对象-对象使用-CRUD.png)
     - 查
       - 声明对象后，并添加若干属性后可以使用(.)获取对象中属性对应的值称为访问
       - 简单理解就是获得对象里面的属性值
       - 语法：
          ```javascript
           对象名.属性名
          ```
       - 例
         ```javascript
          let obj = {
            name: "xiaomi",
            color:"pink",
          }

          console.log(obj.color)
         ```
    
     - 增
       - 语法
         ```javascript
            对象名.新属性值 = 新值
         ```

       - 列
         ```javascript
          let obj = {
            name: "xiaomi",
            color:"pink"
          }

          obj.address = "中国大陆"
         ```
     - 改
       - 语法
         ```javascript
          对象名.属性名 = 新值
         ```
       - 例
         ```javascript
          let obj = {
            name: "xiaomi",
            color: "pink"
          }
          obj.color = "blue" 
          console.log(obj.color)
         ```
        
     - 删(了解)
       语法
          ```javascript
          delete.对象名。属性名
          ```

3.  遍历对象

4. 内置对象