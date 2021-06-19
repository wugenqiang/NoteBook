# Markdown 语法

## 1 标题

Markdown支持6种级别的标题，对应html标签 h1 ~ h6

```html
# h1   //一级标题 对应 <h1> </h1>
## h2   //二级标题 对应 <h2> </h2>
### h3  //三级标题 对应 <h3> </h3>
#### h4  //四级标题 对应 <h4> </h4>
##### h5  //五级标题 对应 <h5> </h5>
###### h6  //六级标题 对应 <h6> </h6>
```

## 2 段落及区块引用

Markdown提供了一个特殊符号 > 用于段首进行强调，被强调的文字部分将会高亮显示

```
> 这段文字将会被高亮显示...
```

以上标记显示效果如下：

> 这段文字将会被高亮显示...


## 3 插入链接或图片

Markdown针对链接和图片的处理也比较简单，可以使用下面的语法进行标记

```
[点击跳转至百度](https://www.baidu.com)
![图片](https://raw.githubusercontent.com/wugenqiang/picGo/master/pictures/015.jpg)
```

> 注： 引用图片和链接的唯一区别就是在最前方添加一个感叹号。

## 4 列表

Markdown支持有序列表和无序列表两种形式：

+ 无序列表使用 * 或 + 或 - 标识

+ 有序列表使用数字加 . 标识，例如：1.


## 5 分隔线

有时候，为了排版漂亮，可能会加入分隔线。Markdown加入分隔线非常简单，使用下面任意一种形式都可以

```
***
---
```
以上标记显示效果如下：

***
---

## 6 内容强调

### 6.1 斜体和加粗

有时候，我们对某一部分文字进行强调，使用 * 或 _ 包裹即可。使用单一符号标记的效果是斜体，使用两个符号标记的效果是加粗

```
*这里是斜体*
_这里是斜体_

**这里是加粗**
__这里是加粗__

***这里是加粗并斜体***
___这里是加粗并斜体___
```
以上标记显示效果如下：

*这里是斜体*
_这里是斜体_

**这里是加粗**
__这里是加粗__

***这里是加粗并斜体***
___这里是加粗并斜体___

### 6.2 加下划线

```
<u>下划线</u>
```

效果如下：

<u>下划线</u>

也可以使用 `<span></span>` 标签完成加下划线的操作，推荐这种方式：

举例说明：下划线为绿色，并且高度为 1px，并且下划线为虚线。

```
<span style="border-bottom:1px dashed green;">所添加的需要加下划线的行内文字</span>
```

效果如下：

<span style="border-bottom:1px dashed green;">所添加的需要加下划线的行内文字</span>

**注意，要实现下划线为实线的话，请把`dashed`修改为`solid`**

效果如下：

<span style="border-bottom:1px solid green;">所添加的需要加下划线的行内文字</span>

## 7 删除线

```
这样来 ~~删除一段文本~~
```
以上标记显示效果如下：

这样来 ~~删除一段文本~~

## 8 高亮显示

```
使用<code>\`</code>来强调字符//想打出 ` (反引号)需要转义，加<code></code>标签强调
比如`突出背景色`来显示强调效果
```
以上标记显示效果如下：

使用<code>\`</code>来强调字符
比如 `突出背景色` 来显示强调效果

## 9 嵌套引用

```js
> 动物
>> 水生动物
>> 陆生动物
>>> 猴子
>>> 人
>>>> 程序猿
>>>> 攻城狮
>>产品狗 //这里需要注意，没有空行间隔，忽略降级引用标记
射鸡虱   //这里需要注意，没有空行间隔，忽略降级引用标记

>> 两栖类动物
>>> 大鳄鱼
唐老鸭

两个回车结束引用,不在引用范围内了！
```
以上标记显示效果如下：

> 动物
>> 水生动物
>> 陆生动物
>>> 猴子
>>> 人
>>>> 程序猿
>>>> 攻城狮
>>产品狗 //这里需要注意，没有空行间隔，忽略降级引用标记
射鸡虱   //这里需要注意，没有空行间隔，忽略降级引用标记

>> 两栖类动物
>>> 大鳄鱼
唐老鸭

两个回车结束引用,不在引用范围内了！

## 10 修改图片
### 10.1 设置图片尺寸

在 markdown 直接使用提供的语法引入图片是无法设置大小的，所以我们需要用到 html 的 img 标签。
```
<img width="  " alt="描述" src="url"/>
```
### 10.2 设置图片居中

在 markdown 设置图片居中是需要通过 div 来控制的。

### 10.3 Docsify 调整图片大小

```
![logo](https://docsify.js.org/_media/icon.svg ':size=WIDTHxHEIGHT')
![logo](https://docsify.js.org/_media/icon.svg ':size=50x100')
![logo](https://docsify.js.org/_media/icon.svg ':size=100')

<!-- Support percentage -->

![logo](https://docsify.js.org/_media/icon.svg ':size=10%')
```

![logo](https://docsify.js.org/_media/icon.svg ':size=WIDTHxHEIGHT')
![logo](https://docsify.js.org/_media/icon.svg ':size=50x100')
![logo](https://docsify.js.org/_media/icon.svg ':size=100')

<!-- Support percentage -->

![logo](https://docsify.js.org/_media/icon.svg ':size=10%')

## 11 插入代码块

Markdown在IT圈子里面比较流行的一个重要原因是，它能够轻松漂亮地插入代码。
方法是，使用三个反引号 \` 进行包裹即可。如果是行内代码引用，使用单个反引号进行包裹

代码块语法遵循标准 `markdown` 代码，使用 \`\`\` 开始 ，\`\`\` 结束 例如：

````
​```Python
#!/usr/bin/env python
# -*- coding: utf-8 -*-
print 'Hello World! 
```
````

 以上标记显示效果如下：
 
 ```Python
#!/usr/bin/env python
# -*- coding: utf-8 -*-
print 'Hello World! 
```
> 注：很多人不知道怎么输入反引号。在英文模式下，找到键盘最左侧esc键下面的第一个键点击即可。
> 有人会问：如何在代码块中打出 \`\`\` 
> 实际上是使用 4个\` 包含 3个\` 就可以了，想表示更多，最外层+1就好了。 

\`\`\`\` 
\`\`\` 
\`\`\` 
\`\`\`\`

## 12 插入表格

表格是Markdown语法中比较复杂的一个，其语法如下：
```
列1   | 列2 | 列3 
----- | --- | ---- 
第1行 | 12  | 13  
第2行 | 22  | 23  
第3行 | 32  | 33  
```
以上标记显示效果如下：

列1   | 列2 | 列3 
----- | --- | ---- 
第1行 | 12  | 13  
第2行 | 22  | 23  
第3行 | 32  | 33  

可以使用`冒号`来定义对齐方式：

全居中样式：
```
表头|条目一|条目二
:---:|:---:|:---:
项目|项目一|项目二
```

以上标记显示效果如下：

表头|条目一|条目二
:---:|:---:|:---:
项目|项目一|项目二

可能有人喜欢左对齐或者右对齐，也可以设置:
```
| 左对齐    |  右对齐 | 居中 |
| :-------- | -------:| :--: |
| Computer  | 5000 元 |  1台 |
| Phone     | 1999 元 |  1部 |
```
以上标记显示效果如下：

| 左对齐    |  右对齐 | 居中 |
| :-------- | -------:| :--: |
| Computer  | 5000 元 |  1台 |
| Phone     | 1999 元 |  1部 |

注：三个短竖杠左右的冒号用于控制对齐方式，只放置左边冒号表示文字居左，只放置右边冒号表示文字居右，如果两边都放置冒号表示文字居中。

## 13 特殊符号处理

Markdown使用反斜杠\插入语法中用到的特殊符号。在Markdown中，主要有以下几种特殊符号需要处理：

```
\   反斜线
`   反引号
*   星号
_   底线
{}  花括号
[]  方括号
()  括弧
#   井字号
+   加号
-   减号
.   英文句点
!   惊叹号
```

例如，如果你需要插入反斜杠，就连续输入两个反斜杠即可：\ \ => \ 。

注：在内容中输入以上特殊符号的时候一定要注意转义，否则将导致内容显示不全，甚至排版混乱。

重要：MarkDown表格中使用竖线，如何做？

表格中使用竖线	竖线数目

|	一个竖线: & # 1 2 4 ;

||	两个竖线: & # 1 2 4 ; & # 1 2 4 ;

## 14 使用 Emoji 表情

举例：
```
Hello EnjoyToShare :smile:
```
效果：

Hello EnjoyToShare  :smile:

> 更多可用 Emoji 代码参见 [emoji-cheat-sheet](https://www.webfx.com/tools/emoji-cheat-sheet/) 和 [emojicopy](https://www.emojicopy.com/)

## 15 复选框列表
在列表符号后面加上 `[x]` 或者 `[ ]` 代表`选中`或者`未选中`情况
```
- [ ] content 
-空格[空格]空格content 
解释: [ ]括号里面的空格可以换成[x],代表选中对话框
```

- [x] C
- [x] C++
- [x] Java
- [x] Qt
- [x] Android
- [ ] C#
- [ ] .NET

## 16 使用 LaTeX 写矩阵

### 16.1 简单的 Matrix

使用 `\begin{matrix}…\end{matrix}` 来生成矩阵，其中`...` 表示的是 *LaTeX*  的矩阵命令，矩阵命令中每一行以 `\\` 结束，矩阵的元素之间用`&`来分隔开。

* Example 01：

```js
  \begin{matrix}
   1 & 2 & 3 \\
   4 & 5 & 6 \\
   7 & 8 & 9
  \end{matrix} \tag{1}
```

### 16.2 带括号的 Matrix

感觉 16.1 中的矩阵不是很美观，可以给矩阵加上括号，加括号的方式有很多，大致可分为两种：使用 `\left ... \right`  或者把公式命令中的 `matrix`  改成  `pmatrix`、`bmatrix`、`Bmatrix`、`vmatrix`、`Vmatrix `等。

* 使用 `\left ... \right` 

  * { ... }

    * Example 02：

    * ```js
       \left\{
       \begin{matrix}
         1 & 2 & 3 \\
         4 & 5 & 6 \\
         7 & 8 & 9
        \end{matrix}
        \right\} \tag{2}
      ```
    
  * [ ... ]

    * Example 03：

    * ```js
     \left[
       \begin{matrix}
         1 & 2 & 3 \\
         4 & 5 & 6 \\
         7 & 8 & 9
        \end{matrix}
        \right] \tag{3}
      ```
  
* 替换 `matrix` 

  * [ ... ]

    * Example 04：

    * ```js
       \begin{bmatrix}
         1 & 2 & 3 \\
         4 & 5 & 6 \\
         7 & 8 & 9
        \end{bmatrix} \tag{4}
      ```
    
  * { ... }

    * Example 05：

    * ```js
      \begin{Bmatrix}
         1 & 2 & 3 \\
           4 & 5 & 6 \\
           7 & 8 & 9
          \end{Bmatrix} \tag{5}
      ```

### 16.3 带省略号的Matrix

如果矩阵元素太多，可以使用 `\cdots` ⋯⋯ `\ddots` ⋱⋱ `\vdots` ⋮⋮  等省略符号来定义矩阵。

* Example 06：

* ```js
  \left[
  \begin{matrix}
   1      & 2      & \cdots & 4      \\
   7      & 6      & \cdots & 5      \\
   \vdots & \vdots & \ddots & \vdots \\
   8      & 9      & \cdots & 0      \\
  \end{matrix}
  \right]
  ```


### 16.4 带参数的 Matrix

比如写增广矩阵，可能需要最右边一列单独考虑。可以用`array`命令来处理：

* Example 07：

* ```js
  \left[
      \begin{array}{cc|c}
        1 & 2 & 3 \\
        4 & 5 & 6
      \end{array}
  \right] \tag{7}
  ```


其中`\begin{array}{cc|c}`中的 c 表示居中对齐元素,`|` 用来作为分割列的符号。

### 16.5 行间矩阵

可以使用`\bigl(\begin{smallmatrix} ... \end{smallmatrix}\bigr)`，

* Example 08：

* ```js
  \bigl(
  \begin{smallmatrix} 
  a & b \\ 
  c & d 
  \end{smallmatrix} 
  \bigr)
  ```

## 17 插入视频

* Example：

```
<video poster="https://notebook.js.org/images/video-poster.png" src="https://cdn.jsdelivr.net/gh/wugenqiang/ETalk-mp4/8a/82/8a8213d3618464a611eea1a871403ad89ac9c591.mp4" controls width="68%"></video>
```

* 效果：

<video poster="https://notebook.js.org/images/video-poster.png" src="https://cdn.jsdelivr.net/gh/wugenqiang/ETalk-mp4/8a/82/8a8213d3618464a611eea1a871403ad89ac9c591.mp4" controls width="68%"></video>

## 18 HTML 标记中的降价

您需要在 html 和 markdown 内容之间插入一个空格。这对于在 details 元素中呈现 markdown 内容很有用。

```
<details>
<summary>Self-assessment (Click to expand)</summary>

- Abc
- Abc
</details>
```



<details>
    <summary>Self-assessment (Click to expand)</summary>

- Abc
- Abc
</details>

或者降价内容可以包装在html标记中。

```
<details>
<summary style='color: green'>Self-assessment (Click to expand)</summary>
<div style='color: red'>

- Abc
- Abc
</div>
</details>
```



<details>
    <summary style='color: green'>Self-assessment (Click to expand)</summary>
<div style='color: red'>

- Abc
- Abc
</div>
</details>



## 19 重要提示

```markdown
!> Time is money, my friend!
```



!> Time is money, my friend!



```markdown
?> Time is money, my friend!
```



?> Time is money, my friend!





