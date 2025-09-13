# Day02-d2-HTML列表-表格-表单

## 1.列表
1. 列表作用
   - 布局内容排列整齐的区域

2. 列表的分类
   - 无序列表
   - 有序列表
   - 自定义列表

3. 无序列表
   - 作用 布局排列整齐的不需要规定顺序的区域
   - 标签 ul嵌套li ul是无序列表 li是列表的条目

     ```html
    <ul>
        <li>第一项</li>
        <li>第二项</li>
        <li>第三项</li>
    </ul>
   ```

4. 注意事项
   - ul标签里面只能包裹li标签
   - li标签可以包裹任何东西

5. 有序列表
   - 作用 布局排列整齐的需要规定顺序的区域
   - 标签 ol嵌套li ol是有序列表 li是列表条目

   ```html
    <ol>
        <li>第一项</li>
        <li>第二项</li>
        <li>第三项</li>
    </ol>
   ```

6. 注意事项
   - ol标签里面只能包裹li标签
   - li标签可以包裹任何内容

7. 定义列表
   - 标签 dl嵌套dr和dd dl是定义列表 dt是定义列表的标题 dd是第一列表的描述/详情
   
   ```html
    <dl>
        <dt>列表标题</dt>
        <dd>列表描述/详情</dd>
    </dl>
   ```
8. 注意事项
   - dl里面只能包括dt和dd
   - dt和dd里面可以包括任何内容

## 2. 表格
9. 基本用法
   - 网页中的表格与Excel表格类似 用来展示数据、

10. 表格的写法
    - 标签 table嵌套tr tr嵌套td/th

    ```html
    标签名        说明
    table         表格
    tr            行
    th            表头单元格
    td            内容单元个
    ```

11. 提示在网页中，表格默认没有边框 使用border属性可以为表格添加边框线

12. 表格结构标签
    - 作用用表格结构标签把内容划分区域让表格结构更加清晰
    ```html
    标签名     含义     特殊说明
    thead      表格头部 表格头部内容
    tboody     表格主体 主要内容区域
    tfoot      表格底部 汇总信息区域
    ```

13. 合并单元格作用
    - 将多个单元格合并到一个单元格 以合并同类信息

14. 合并定一个的步骤
    - 明确合并目标
    - 保留最左最上的单元格 添加属性(取值是数字，表示需要合并单元格数量)
      - 跨列合并 保留最上单元格 添加属性rowspan
      - 跨列合并 保留最左单元格 添加属性colspan
    - 删除其他单元格

## 3. 表单
15. 表单的作用
    - 收集用户信息

16. input标签基本使用
    - input标签 type 属性值不同则功能不同
    ```html
    <input type="...">
    ```
    ```html
    type属性值   说明
    text         文本框 用于输入单行文本
    passworld    密码框
    radio        单选框
    checkbox     多选框
    file         上传文件
    ``` 

17. input标签占位文本
    - 占位文本：提示信息
    ```html
    <input type="..." paceholder="提示信息"> 
    ```
    文本框和密码框都可以使用

18. 单选框
    - 常用属性
      ```html
      属性名    作用     特殊说明
      name     控件名字  控件分组 同组只能选中一个(当选功能)
      check    默认选中  属性名和属性值相同 简写一个单词
      ```

19. 多选框
    - 多选框也叫复选框
    - 默认选中 checked
    ```html
    <input type="checkbox" checked> 敲java
    ```

20. 上传文件
    - 默认情况下 文件上传表单控件只能上传一个文件 添加multiple属性可以实现文件多选功能
    ```html
    <input type="file" multiple>
    ```

21. 下来菜单
     - 标签 select嵌套option select是下来菜单的整体 option是下来菜单的中的每一项
    ```html
    <select>
        <option>属性名1</option>
        <option>属性名2</option>
        <option>属性名3</option>
    </select>
    selected 默认选中
    ```

22. 文本域作用
    - 多行输入文本的表单控件
    - 标签 textarea 双标签
    ```html
    <textarea>默认提示信息</textarea>
    ` ` `

23. label标签
    - 作用 网页中 某个标签的说明文本
    - 用于标签绑定文字和表单控件的关系 增大表单控件的点击范围

24. label标签的写法
    - 写法一
    label标签只包裹内容 不包裹表单控件
    设置label标签的for属性值 和表单的id属性值相同
    ```html
    <input type="radio" id="man">
    <label for="man">男</label>
    ```

    - 写法二
    使用label标签包裹文字和表单控件 不需要属性
    ```html
    <label><input type="radio">女</label>
    ```

25. 按钮 button
    ```html
    <button type"">按钮</button>
    ```

    ```
    type属性值
    type属性值    说明
    submit 提交按钮 点击可以提交数据后台 (默认功能)
    rest   点击到表单控件恢复默认值
    button 普通按钮 默认没有功能 一般配合js使用
    ```

26. 无语义标签布局
    作用 布局网页 (划分网页区域 摆放内容)
     - div 独占一行
     - span 不换行

27. 字符实体
    - 作用 在网页中显示预留字符

    ```
    显示结果   描述     实体名称
               空格    &nbsp;
    <          小于号  &lt;
    >          大于号  &gt;
    ```