# Vue.js 基础入门

> 渐进式 JavaScript 框架  

## 前言

本人在学习计算机专业知识的过程中，深知学习笔记的重要性，所以整理了相关学习笔记，为了在需要的时候方便查看，目前正在逐渐完善和补充中，如果本学习笔记有幸被您光顾和使用，在使用中出现任何疑问或者有更好的见解的话，可以右下角 OPEN CHAT 我，也可以右上角 邮我，当然还可以加入我的讨论组，如果觉得本书对你有帮助，可以打赏我，以鼓励我更好的创作，下面附赞助二维码，再次谢谢您的大力支持！

<div ><img src="https://wugenqiang.gitee.io/notebook/images/pay/wechat-pay.png" width="200" height="200" /></div>

> 如果觉得文章有帮助，不妨请我喝杯 Coffee，祝福好心人年年高升！

---

* 前端三件套

!> HTML + CSS + JavaScript + AJAX

* 开发工具
  * [IDEA 2019.3.4](ToolBox/IDEA使用指南?id=idea-201934)
* 准备
  * [使用 IDEA 搭建 Vue 项目 Demo](FrontEnd/Vue/idea-to-vue.md)
* 学习文档
  * [Vue.js 官网：https://cn.vuejs.org](https://cn.vuejs.org)
* 代码案例
  * 本部分所用代码均已上传至：[Vue-demo](https://gitee.com/wugenqiang/Vue-Learning/tree/master/vue-demo) 



## Vue.js 基础

### Vue.js 优点

* Vue 是渐进式 JavaScript 框架
* 体积小
  * 压缩后 33 k
* 更高的运行效率
  * 基于虚拟 Dom，一种可以预先通过 JavaScript 进行各种计算，把最终的 Dom 操作计算出来并优化的技术，由于 Dom 操作属于预处理操作，并没有真实的操作 Dom，所以叫做虚拟 Dom
* 双向数据绑定
  * 简化 Dom 操作，把更多的精力投入到业务逻辑上
* 响应式数据驱动
* 生态丰富，学习成本低
  * 市场上 vue.js 的 UI 框架以及常用组件，太丰富了，可以实现快速开发
  * 对初学者友好、入门容易且学习资料多



### 第一个 Vue 程序

> 以我个人为例，在 IDEA 中创建一个文件夹，叫 vue-first-demo，作为我学习 Vue 的第一个手敲学习项目

#### Hello Vue！

* 创建 index.html 添加以下内容：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>Vue.js 基础</title>
</head>
<body>
    <div id="app">
        {{ message }}
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el:"#app",//el:挂载点
            data:{//data:数据对象
                message:"Hello Vue!"
            }
        })
    </script>
</body>
</html>
```

* 在浏览器中打开 index.html 看效果

![image-20200323191307873](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163337.png)

#### 总结归纳

> 在 html 中写 Vue 程序需要完成三步：

* （1）导入开发版本的 Vue.js
* （2）创建 Vue 实例对象，设置 el 属性和 data 属性
* （3）使用简洁的模板语法把数据渲染到页面上

### 设置 el 挂载点

> el 作用：设置 Vue 实例挂载（管理）的元素

#### id 选择器

```vue
<div id="app">
    {{ message }}
</div>  
<script>
    var app = new Vue({
        el:"#app",//el:挂载点
        data:{//data:数据对象
            message:"Hello Vue!"
        }
    })
</script>
```

#### class 选择器

```vue
<div class="app">
    {{ message }}
</div>
<script>
    var app = new Vue({
        el:".app",//el:挂载点 class选择器
        data:{//data:数据对象
            message:"Hello Vue!"
        }
    })
</script>
```

#### 标签选择器

```vue
<div>
    {{ message }}
</div>
<script>
    var app = new Vue({
        el:"div",//标签选择器
        data:{//data:数据对象
            message:"Hello Vue!"
        }
    })
</script>
```

!> 标签选择可以有很多，div, p, h2... 都可以，但建议使用 div 作为挂载元素，因为 div 没有额外的样式

#### 总结归纳

* Vue 实例的作用范围是什么呢？
  * Vue 会管理 el 选项命中的元素及其内部的后代元素
* 推荐使用 id 选择器，开发时唯一。
* 支持双标签。可以使用其他双标签，不能使用 html 和 body

### 设置 data 数据对象

> 复制 index.html 到自己的项目中即可浏览效果：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>data: 数据对象</title>
</head>
<body>
    <div id="app">
        {{ message }}
        <h2>{{ senior }}</h2>
        <h2>{{ senior.name }} {{ senior.QQ }}</h2>
        <!--获取数组标签-->
        <ul>
            <li>{{ campus }}</li>
            <li>{{ campus[0] }}</li>
            <li>{{ campus[1] }}</li>
            <li>{{ campus[2] }}</li>
        </ul>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{//data:数据对象
                message:"Hello Vue!",
                senior:{
                    name:"wugenqiang",
                    QQ: "2422676183",
                },
                campus:["NanJing","ShangHai","JiangXi"],
            }
        })
    </script>
</body>
</html>
```

效果：[网页浏览](https://wugenqiang.gitee.io/vue-learning/vue-demo/HelloVue.html)

![image-20200323205919447](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163348.png)

#### 总结归纳

* Vue 中用到的数据定义在 data 中
* data 中可以写复杂类型的数据
* 渲染复杂类型数据时，遵守 js 的语法即可



## 本地应用

> 使用 Vue 开发网页效果

### Vue 指令

- 内容绑定，事件绑定
  - v-text
  - v-html
  - v-on
- 显示切换，属性绑定
  - v-show
  - v-if
  - v-bind
- 列表循环，表单元绑定
  - v-for
  - v-on补充
  - v-model

> 下面具体来谈谈 Vue 指令：

#### v-text

* 作用：设置标签的文本值（textContent）


```vue
<body>
      <div id="app">
          <h2 v-text="message"></h2>
      </div>
      <!-- 开发环境版本，包含了有帮助的命令行警告 -->
      <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
      <script>
          var app = new Vue({
              el:"#app",//el:挂载点 id选择器
              data:{//data:数据对象
                  message:"Hello Vue!",
              }
          })
      </script>
  </body>
```

* 效果如下：

![image-20200324174354517](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163357.png)

* 替换指定内容的推荐表达：

```vue
<body>
    <div id="app">
        <!--<h2 v-text="message">hello</h2>-->
        <h2 >{{ message }} hello</h2><!-- 推荐表达 -->
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{//data:数据对象
                message:"Hello Vue!",
            }
        })
    </script>
</body>
```

* 实现字符串拼接！

```vue
<body>
    <div id="app">
        <h2 v-text="message + '!'"></h2>
        <h2 >{{ message + "!" }}</h2>
        <h2 >{{ message + '!' }}</h2>
    </div>
    <!-- 开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{//data:数据对象
                message:"Hello Vue!",
            }
        })
    </script>
</body>
```

!> 总结归纳一下：

* v-text 指令的作用是：设置标签的内容（textContent）
* 默认写法会替换全部内容，使用差值表达式 { { } } 可以替换指定内容
* 内部支持写表达式

#### v-html

* 作用：设置标签的 innerHTML

```vue
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <p v-html="content"></p>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{//data:数据对象
                content:"<a href='#'>Hello Vue!</a>",
            }
        })
    </script>
</body>
```

* 效果如下：

![image-20200324181450925](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163407.png)

!> 总结归纳一下：

* v-html 指令的作用是：设置元素的 innerHTML
* 内容中有 html 结构会被解析为标签
* v-text 指令无论内容是什么，只会解析为文本
* 解析文本使用 v-text，需要解析 html 结构使用 v-html

#### v-on

* 作用一：为元素绑定事件

![image-20200324183554482](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163411.png)

* 演示代码：

```vue
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <!-- click 点击 -->
        <input type="button" value="v-on指令" v-on:click="dolt">
        <input type="button" value="v-on指令简写" @click="dolt">
        <!-- 双击事件 -->
        <input type="button" value="双击事件" @dblclick="dolt">
        <!-- 点击事件 -->
        <h2 @click="changeFood">{{ food }}</h2>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
              food:"西兰花炒蛋"
            },
            methods:{
                dolt:function(){
                    alert("EnjoyToShare!");
                },
                changeFood:function(){
                    //console.log(this.food);
                    this.food += "好好吃!";
                }
            }
        })
    </script>
</body>
```

* 效果如下：

![image-20200324185416113](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163417.png)

* 作用二：传递自定义参数，事件修饰符

![image-20200326111956910](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163421.png)

* 演示代码：

```vue
<body>
<!-- 2.挂载的html结构 -->
<div id="app">
    <!--增加绑定-->
    <input type="button" value="点击" @click="doIt(666,'老铁双击')">
    <!--添加事件修饰符-->
    <input type="text" @keyup.enter="sayHi"><!--表示当按enter回车键时才触发-->
    <!--说明：keyup是键盘触发事件-->
</div>
<!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
<script>
    //  3.创建Vue实例
    var app = new Vue({
        el:"#app",//el:挂载点 id选择器
        data:{
        },
        //操作数据变更
        methods:{
            doIt:function (p1,p2) {
                console.log("做IT");
                console.log(p2 + p1);
            },
            sayHi:function () {
                alert("你好呀!");
            }
        }
    })
</script>
</body>
```



!> 总结归纳如下：

* v-on 指令的作用：为元素绑定事件，当事件绑定的方法写成函数调用的形式，可以传入自定义参数
* 自定义方法时需要定义形参来接受传入的实参
* 事件名不需要写 on
* 指令可以简写为 @
* 绑定的方法定义在 methods 属性中
* 方法内部通过通过 this 关键字可以访问定义在 data 中数据
* 事件的后面跟上 .修饰符 可以对触发事件进行限制
* .enter 可以限制触发的按键为回车

* 事件修饰有很多种

#### v-show

* 作用：根据表达值的真假，切换元素的显示和隐藏
* 原理：修改元素的 display 样式，实现显示隐藏
* 指令后面的内容，最终都会被解析为布尔值
* 值为 true 元素显示，值为 false 元素隐藏
* 数据改变之后，对应元素的显示状态会同步更新

![image-20200325134258654](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163428.png)

* 演示代码：

```vue
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <img src="./static/images/monkey.gif" alt="">
        <p align="center">看到我上面有猴仔说明1显示</p>
        <!--根据bool值选择显示状态-->
        <img v-show="true" src="./static/images/monkey.gif" alt="">
        <p align="center">看到我上面有猴仔说明2显示</p>
        <img v-show="false" src="./static/images/monkey.gif" alt="">
        <p align="center">看到我上面有猴仔说明3显示</p>
        <!--方便切换显示状态-->
        <input type="button" value="切换显示状态" @click="changeIsShow">
        <img v-show="isShow" src="./static/images/monkey.gif" alt="">
        <!--使用数字限制显示-->
        <input type="button" value="累加年龄" @click="addAge">
        <img v-show="age>=18" src="./static/images/monkey.gif" alt="">

    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
                isShow:false,
                age:17
            },
            methods:{
                changeIsShow:function(){
                    this.isShow = !this.isShow;
                },
                addAge:function(){
                    this.age++;
                }
            }
        })
    </script>
</body>
```

> 想要小猴子的可以复制我：

![点我查看原图](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163435.gif)



* 效果如下：[网页操作](https://wugenqiang.gitee.io/vue-learning/vue-demo/v-show.html)

![image-20200325140938672](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163442.png)



#### v-if

* 作用：根据表达式的真假，切换元素的显示和隐藏
* 原理：操纵 dom 元素来切换显示状态
* 表达式的值为 true，元素存在于 dom 树中，为 false，则从 dom 树中移除

![image-20200325143146150](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163448.png)

* 演示代码：

```vue
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <!--方便切换显示状态-->
        <input type="button" value="切换显示状态" @click="toggleIsShow">
        <p v-if="isShow">欢迎来到 EnjoyToShare 之家</p>
        <p v-show="isShow">网址：https://wugenqiang.github.io</p>
        <!--v-if操作dom元素,v-show改diaplay-->
        <!--表达式-->
        <h2 v-if="temperature>=35">热死啦！</h2>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
                isShow:false,
                temperature:40,
            },
            methods:{
                toggleIsShow:function(){
                    this.isShow = !this.isShow;
                },
            }
        })
    </script>
</body>
```

* 效果如下：[网页操作](https://wugenqiang.gitee.io/vue-learning/vue-demo/v-if.html)

![image-20200325144645128](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163453.png)



#### v-bind

* 作用：为元素绑定属性，设置元素的属性（比如：src，title，class）
* 完整写法是 v-bind : 属性名
* 简写的话可以直接省略 v-bind，只保留 : 属性名
* 需要动态的增删 class 时建议使用对象的方式，不推荐三元表达式形式

![image-20200325145658901](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163458.png)

或者下面的语法，都可以：

![image-20200325145757743](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163502.png)

* 演示代码：

```html
<!DOCTYPE html>
<html lang="en" xmlns:v-on="http://www.w3.org/1999/xhtml" xmlns:v-bind="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>v-bind指令</title>
    <style>
        .active{
            border:1px solid red;/*加红色边框*/
        }
    </style>
</head>
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <img v-bind:src="imgSrc" alt="">
        <br>
        <img :src="imgSrc" alt="" :title="imgTitle+' !!! '" :class="isActive?'active':''" @click="toggleActive">
        <br>
        <img :src="imgSrc" alt="" :title="imgTitle+' !!! '" :class="{active:isActive}" @click="toggleActive"><!--更为常用-->
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
                imgSrc:"https://wugenqiang.github.io/images/fighting_wugenqiang.jpg",
                imgTitle:"EnjoyToShare",
                isActive:false,
            },
            methods:{
                toggleActive:function () {
                    this.isActive = !this.isActive;
                }
            }
        })
    </script>
</body>
</html>
```



* 效果如下：

![image-20200325152054529](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163508.png)

#### v-for

* 作用：根据数据生成列表结构
* 数组经常和 v-for 结合使用
* 语法是 ( item, index) in 数组数据
* item 和 index 可以结合其他指令一起使用
* 数组长度的更新会同步到页面上，是响应式的

![image-20200326104022190](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163514.png)

* 演示代码：

```vue
<body>
    <!-- 2.挂载的html结构 -->
    <div id="app">
        <!--增加绑定-->
        <input type="button" value="添加数据" @click="add">
        <input type="button" value="移除数据" @click="remove">
        <ul>
            <li v-for="item in arr">回忆的地方：{{ item }}</li>
            <!--item名可替换任意-->
            <li v-for="it in arr">回忆的地方：{{ it }}</li>
            <!--添加索引页-->
            <li v-for="(item,index) in arr">{{ index+1 }} 回忆的地方：{{ item }}</li>
        </ul>
        <!--测试对象数组-->
        <h2 v-for="item in vegetables">{{ item }}</h2>
        <h2 v-for="item in vegetables">{{ item.name }}</h2>
        <h2 v-for="item in vegetables" :title="item.date">{{ item.date }}</h2>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
                arr:["NanJing","ShangHai","JiangXi"],
                //对象数组数据
                vegetables:[
                    {name:"西兰花"},
                    {name:"西红柿"},
                    {date:"2020-03-26"}
                ]
            },
            //操作数据变更
            methods:{
                add:function () {
                    this.vegetables.push({name:"花菜炒蛋"})
                },
                remove:function () {
                    this.vegetables.shift();//移除最左边元素
                }
            }
        })
    </script>
</body>
```

#### v-model

* 作用：便捷的获取和设置表单元素的值（双向数据绑定）
* 绑定的数据会和表单元素值相关联
* 绑定的数据 <-----> 表单元素的值（同步更新）

![image-20200326115424116](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163521.png)

* 演示代码：

```vue
<body>
<!-- 2.挂载的html结构 -->
<div id="app">
    <!--增加绑定-->
    <input type="button" value="修改message" @click="setM">
    <input type="text" v-model="message" @keyup.enter="getM">
    <h2>{{ message }}</h2>
</div>
<!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
<script>
    //  3.创建Vue实例
    var app = new Vue({
        el:"#app",//el:挂载点 id选择器
        data:{
            message:"EnjoyToShare"
        },
        //操作数据变更
        methods:{
            getM:function () {
                alert(this.message);
            },
            setM:function () {
                this.message = "wugenqiang";
            }
        }
    })
</script>
</body>
```



### 开发小 Demo

#### 计数器

> demo 样式 [网页预览](https://wugenqiang.gitee.io/vue-learning/vue-demo/计数器小Demo.html)

![image-20200324190512752](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163529.png)

* 运用知识点：v-text, v-on

* 开发逻辑：

![image-20200324192953154](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163533.png)

* 代码实现：

index.html

```vue
<!DOCTYPE html>
<html lang="en" xmlns:v-on="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>计数器小Demo</title>
    <link rel="stylesheet" href="./static/css/count.css">
</head>
<body>
    <!-- 2.html结构 -->
    <div id="app">
        <!-- 计数器功能区域 -->
        <div class="input-num">
            <button @click="sub">
                -
            </button>
            <span>{{ num }}</span>
            <button @click="add">
                +
            </button>
        </div>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#app",//el:挂载点 id选择器
            data:{
              num:1,
            },
            methods:{
                add:function () {
                    if(this.num<10){
                        this.num++;
                    }else {
                        alert("不能再加了");
                    }
                },
                sub:function () {
                    if(this.num>1){
                        this.num--;
                    }else {
                        alert("不能再减了啊！")
                    }
                },
            }
        })
    </script>
</body>
</html>
```

* 附 count.css 部分代码：

```css
body{
  background-color: #f5f5f5;
}
#app {
  width: 480px;
  height: 80px;
  margin: 200px auto;
}
.input-num {
  margin-top:20px;
  height: 100%;
  display: flex;
  border-radius: 10px;
  overflow: hidden;
  box-shadow: 4px 4px 4px #adadad;
  border: 1px solid #c7c7c7;
  background-color: #c7c7c7;
}
.input-num button {
  width: 150px;
  height: 100%;
  font-size: 40px;
  color: #ad2a27;
  cursor: pointer;
  border: none;
  outline: none;
  background-color:rgba(0, 0, 0, 0);
}
.input-num span {
  height: 100%;
  font-size: 40px;
  flex: 1;
  text-align: center;
  line-height: 80px;
  font-family:auto;
  background-color: white;
}
```



#### 图片切换

> demo 样式 [网页预览](https://wugenqiang.gitee.io/vue-learning/vue-demo/togglePicture.html)

![图片切换 demo](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163540.gif)



* 运用知识点：v-show, v-on, v-bind

* 开发逻辑：

![image-20200325154320044](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163547.png)

* 代码实现：

index.html

```html
<!DOCTYPE html>
<html lang="en" xmlns:v-on="http://www.w3.org/1999/xhtml" xmlns:v-bind="http://www.w3.org/1999/xhtml">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>图片转换</title>
    <link rel="stylesheet" href="./static/css/togglePicture.css">
</head>
<body>
    <!-- 2.html结构 -->
    <div id="mask">
        <div class="center">
            <h2 class="title">
                <img src="./static/images/logo.png" alt=""/>
                EnjoyToShare-樱花展
            </h2>
            <!--图片-->
            <!--<img src="./static/images/00.jpg" alt=""/>-->
            <img :src="imgArr[index]" alt=""/>
            <!--左箭头-->
            <a href="javascript:void(0)" v-show="index!=0" @click="prev" class="left">
                <img src="./static/images/prev.png" alt=""/>
            </a>
            <!--右箭头-->
            <a href="javascript:void(0)" v-show="index<imgArr.length-1" @click="next" class="right">
                <img src="./static/images/next.png" alt=""/>
            </a>
        </div>
    </div>
    <!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
    <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
    <script>
        //  3.创建Vue实例
        var app = new Vue({
            el:"#mask",//el:挂载点 id选择器
            data:{
                imgArr:[
                    "./static/images/00.jpg",
                    "./static/images/01.jpg",
                    "./static/images/02.jpg",
                ],
                index:0
            },
            methods:{
                prev:function () {
                    this.index--;
                },
                next:function () {
                    this.index++;
                }
            }
        })
    </script>
</body>
</html>
```

* 附 togglePicture.css 部分代码：

```css
* {
  margin: 0;
  padding: 0;
}

html,
body,
#mask {
  width: 100%;
  height: 100%;
}

#mask {
  background-color: #c9c9c9;
  position: relative;
}

#mask .center {
  position: absolute;
  background-color: #fff;
  left: 50%;
  top: 50%;
  transform: translate(-50%, -50%);
  padding: 10px;
}
#mask .center .title {
  position: absolute;
  display: flex;
  align-items: center;
  height: 56px;
  top: -61px;
  left: 0;
  padding: 5px;
  padding-left: 10px;
  padding-bottom: 0;
  color: rgba(175, 47, 47, 0.8);
  font-size: 26px;
  font-weight: normal;
  background-color: white;
  padding-right: 50px;
  z-index: 2;
}
#mask .center .title img {
  height: 40px;
  margin-right: 10px;
}

#mask .center .title::before {
  content: "";
  position: absolute;
  width: 0;
  height: 0;
  border: 65px solid;
  border-color: transparent transparent white;
  top: -65px;
  right: -65px;
  z-index: 1;
}

#mask .center > img {
  display: block;
  width: 700px;
  height: 458px;
}

#mask .center a {
  text-decoration: none;
  width: 45px;
  height: 100px;
  position: absolute;
  top: 179px;
  vertical-align: middle;
  opacity: 0.5;
}
#mask .center a :hover {
  opacity: 0.8;
}

#mask .center .left {
  left: 15px;
  text-align: left;
  padding-right: 10px;
  border-top-right-radius: 10px;
  border-bottom-right-radius: 10px;
}

#mask .center .right {
  right: 15px;
  text-align: right;
  padding-left: 10px;
  border-top-left-radius: 10px;
  border-bottom-left-radius: 10px;
}
```

!> 图片部分我就不存放了啊，自己设置图片是一样的，若想要的可以私聊我获取呀

#### 记事本

* 代码实现：

index.html

```html
<html>
<head>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8" />
    <title>EnjoyToShare - NotePad</title>
    <meta http-equiv="content-type" content="text/html; charset=UTF-8" />
    <meta name="robots" content="noindex, nofollow" />
    <meta name="googlebot" content="noindex, nofollow" />
    <meta name="viewport" content="width=device-width, initial-scale=1" />
    <link rel="stylesheet" type="text/css" href="./css/note.css" />
</head>

<body>
<!-- 2.挂载的html结构 -->
<section id="todoapp">
    <!-- 输入框 -->
    <header class="header">
        <h1>记事本</h1>
        <input v-model="inputValue" @keyup.enter="add" autofocus="autofocus" autocomplete="off" placeholder="请输入任务"
               class="new-todo" />
    </header>
    <!-- 列表区域 -->
    <section class="main">
        <ul class="todo-list">
            <li class="todo" v-for="(item,index) in list">
                <div class="view">
                    <span class="index">{{ index+1 }}.</span>
                    <label>{{ item }}</label>
                    <button class="destroy" @click="remove(index)"></button>
                </div>
            </li>
        </ul>
    </section>
    <!-- 统计和清空 -->
    <footer class="footer" v-show="list.length!=0">
      <span class="todo-count" v-if="list.length!=0">
        <strong>{{ list.length }}</strong> items left
      </span>
        <button v-show="list.length!=0" class="clear-completed" @click="clear">
            Clear
        </button>
    </footer>
</section>
<!-- 底部 -->
<footer class="info">
    <p>
        <a href="https://wugenqiang.gitee.io/"><img src="./img/black.png" alt="" /></a>
    </p>
</footer>
<!-- 1.开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
<script>
    //  3.创建Vue实例
    var app = new Vue({
        el: "#todoapp",//el:挂载点 id选择器
        data: {
            list: ["写代码", "吃饭饭", "睡觉觉"],
            inputValue: "好好学习,天天向上"
        },
        methods: {
            add: function () {
                this.list.push(this.inputValue);
            },
            remove: function (index) {
                console.log("删除");
                console.log(index);
                this.list.splice(index, 1);
            },
            clear: function () {
                this.list = [];
            }
        },
    })
</script>
</body>
</html>
```



* 效果图：[网页浏览](https://wugenqiang.gitee.io/vue-learning/vue-demo/NotePad/index.html)

![image-20200326152346369](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163557.png)

## 网络应用

- axios：网络请求库
- axios + vue：结合 vue 一起
- 天气预报案例 [预览效果](https://wugenqiang.gitee.io/vue-learning/vue-demo/weather/index.html)

### axios 基本使用

> axios：功能强大的网络请求库

- 先导入再使用
- get 或者 post 发送请求
- then 方法中的回调函数会在请求失败或者请求成功的时候触发
- 通过回调函数获得相应内容或者错误信息
- axios 文档：https://github.com/axios/axios

* 代码模板：

```js
<script src="https://unpkg.com/axios/dist/axios.min.js"></script>

axios.get(地址?key=value&key2=value2).then(function(response){},function(err){})

axios.post(地址,{key:value&key2:value2}).then(function(response){},function(err){})
```

* 代码案例：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>axios基本使用</title>
</head>
<body>
<input type="button" value="get请求" class="get">
<input type="button" value="post请求" class="post">
<!-- 开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://unpkg.com/axios/dist/axios.min.js"></script>
<script>
    /**
     * 接口1：随机笑话
     * URL：https://autumnfish.cn/api/joke/list
     * 方法：get
     * 参数：num(笑话条数，字数)
     * 相应内容：随机笑话
     */
    document.querySelector(".get").onclick=function () {
        axios.get("https://autumnfish.cn/api/joke/list?num=3")
            .then(function (response) {
                console.log(response);
            })
    }
    /**
     * 接口2：用户注册
     * URL：https://autumnfish.cn/api/user/reg
     * post
     * username(用户名，字符串)
     * 注册成功或者失败
     */
    document.querySelector(".post").onclick=function () {
        axios.post("https://autumnfish.cn/api/user/reg",{username:"wugenqiang"})
            .then(function (response) {
                console.log(response);
            },function (err) {
                console.log(err);
            })
    }
</script>
</body>
</html>
```

* 效果：

![image-20200326160155563](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163612.png)

### axios + vue

- axios 回调函数的 this 已经改变，无法访问到 data 中的数据
- 把 this 保存起来，回调函数直接使用保存的 this
- 和本地的区别是改变了数据来源
- 代码演示：

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width,initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>axios+vue</title>
</head>
<body>
<div id="app">
    <input type="button" value="获取笑话" @click="getJoke">
    <p>{{ joke }}</p>
</div>
<script src="https://unpkg.com/axios/dist/axios.min.js"></script>
<!-- 开发环境版本，包含了有帮助的命令行警告 -->
<script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
<script>
    /**
     * 接口1：随机笑话
     * URL：https://autumnfish.cn/api/joke
     * 方法：get
     * 参数：无
     * 相应内容：随机笑话
     */
    var app=new Vue({
        el:"#app",
        data:{
            joke:"很好笑的笑话"
        },
        methods:{
            getJoke:function () {
                //console.log(this.joke);
                var that=this;
                axios.get("https://autumnfish.cn/api/joke").then(function (response) {
                    console.log(response.data);
                    //console.log(this.joke);
                    that.joke=response.data;
                },function (err) {})

            }
        },
    })

</script>
</body>
</html>
```

* 效果：

![image-20200326161041453](https://gitee.com/wugenqiang/PictureBed/raw/master/NoteBook/20200703163620.png)

### 网络应用：天知道

* 效果预览： [预览效果](https://wugenqiang.gitee.io/vue-learning/vue-demo/weather/index.html)

- 代码实现：index.html

```html
<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0" />
  <meta http-equiv="X-UA-Compatible" content="ie=edge" />
  <title>天知道</title>
  <link rel="stylesheet" href="css/reset.css" />
  <link rel="stylesheet" href="css/index.css" />
</head>

<body>
  <div class="wrap" id="app">
    <div class="search_form">
      <div class="logo"><img src="img/logo.png" alt="logo" /></div>
      <div class="form_group">
        <input type="text" class="input_txt" placeholder="请输入查询的天气" v-model="city" @keyup.enter="queryWeather" />
        <button class="input_sub" @click="queryWeather">
          搜 索
        </button>
      </div>
      <div class="hotkey">
        <!-- <a href="javascript:;" @click="clickSearch('北京')">北京</a>
          <a href="javascript:;" @click="clickSearch('上海')">上海</a>
          <a href="javascript:;" @click="clickSearch('广州')">广州</a>
          <a href="javascript:;" @click="clickSearch('深圳')">深圳</a> -->
        <a href="javascript:;" v-for="city in hotCitys" @click="clickSearch(city)">{{ city }}</a>
      </div>
    </div>
    <ul class="weather_list">
      <li v-for="(item,index) in forecastList" :key="item.date" :style="{transitionDelay:index*100+'ms'}">
        <div class="info_type">
          <span class="iconfont">{{ item.type }}</span>
        </div>
        <div class="info_temp">
          <b>{{ item.low}}</b>
          ~
          <b>{{ item.high}}</b>

        </div>
        <div class="info_date">
          <span>{{ item.date }}</span>
        </div>
      </li>
    </ul>
  </div>
  <!-- 开发环境版本，包含了有帮助的命令行警告 -->
  <script src="https://cdn.jsdelivr.net/npm/vue/dist/vue.js"></script>
  <!-- 官网提供的 axios 在线地址 -->
  <script src="https://unpkg.com/axios/dist/axios.min.js"></script>
  <script>
    new Vue({
      el: "#app",
      data: {
        city: "武汉",
        forecastList: [],
        hotCitys: ["北京", "上海", "广州", "深圳"]
      },
      methods: {
        queryWeather() {
          this.forecastList = [];
          var that = this;
          axios
                  /*.get('http://wthrcdn.etouch.cn/weather_mini?city=${that.city}')
                  .then(function (response) {
                    //console.log(response);
                    //console.log(response.data.data.forecast);
                    that.weatherList=response.data.data.forecast;
                  })
                  .catch(function (err) {})*/
            .get("http://wthrcdn.etouch.cn/weather_mini?city="+that.city)
            .then(res => {
              console.log(res);
              that.forecastList = res.data.data.forecast;
            })
            .catch(err => {
              console.log(err);
            })
            .finally(() => { });
        },
        clickSearch(city) {
          this.city = city;
          this.queryWeather();
        }
      }
    });
  </script>
</body>
</html>
```



## 综合应用

### 音乐播放器

> 音乐播放器实现功能点：

* （1）歌曲搜索
* （2）歌曲播放
* （3）歌曲封面
* （4）歌曲评论
* （5）播放动画
* （6）MV 播放

> 接下来具体实现功能点：

#### 功能点一：歌曲搜索

> 实现步骤：（1）按下回车（2）查询数据（3）渲染数据

* 步骤一：按下回车

  * 运用知识点：v-on, .enter

  * ```vue
    <!-- 搜索歌曲, 按下回车 -->
    <input type="text" autocomplete="off" v-model='query' @keyup.enter="searchMusic();" />
    ```

* 步骤二：查询数据

  * 运用知识点：axios 接口 v-model

  * ```js
    //  3.创建Vue实例
    var app = new Vue({
        el:"#player",//挂载点,使用id选择器
        data:{//数据
            query:"",
            musicList:[],
        },
        methods:{
            //搜索音乐
            searchMusic:function () {
                var that = this;
                axios
                    .get("https://autumnfish.cn/search?keywords="+that.query)
                    .then(res => {//res=> 等价于 function(response)
                        //console.log(res);
                        that.musicList = res.data.result.songs;
                    },err => {})
    
            }
        }
    })
    ```

* 步骤三：渲染数据

  * 运用知识点：v-for 数组 that

  * ```vue
    <ul class="song_list">
    	<li v-for="item in musicList">
    		<a href="javascript:;"></a>
       		<b>{{ item.name }}</b>
        </li>
    </ul>
    ```

#### 功能点二：歌曲播放

> 实现步骤：（1）点击播放（2）歌曲地址获取（3）歌曲地址设置

* 步骤一：点击播放

  * 运用知识点：v-on，自定义参数来简化编码

  * ```vue
    <li v-for="item in musicList">
    	<a href="javascript:;" @click="playMusic(item.id)"></a>
    	<b>{{ item.name }}</b>
    </li>
    ```

* 步骤二：歌曲地址获取

  * 运用知识点：axios 接口，歌曲 id

  * ```js
    //播放音乐
    playMusic:function (musicId) {
       //console.log(musicId);
       var that = this;
       axios
       	.get("https://autumnfish.cn/song/url?id="+musicId)
        .then(res => {//res=> 等价于 function(response)
             //console.log(res);
             //console.log(res.data.data[0].url);
             that.musicUrl = res.data.data[0].url;
        },err => {})
    }
    ```

* 步骤三：歌曲地址设置

  * 运用知识点：v-bind

  * ```vue
    <div class="audio_con">
    	<audio ref='audio' :src="musicUrl" controls autoplay loop class="myaudio"></audio>
    </div>
    ```

#### 功能点三：歌曲封面

> 实现步骤：（1）点击播放（2）歌曲封面获取（3）歌曲封面设置

* 步骤一：点击播放
  
* 运用知识点：v-on，增加逻辑
  
* 步骤二：歌曲封面获取

  * 运用知识点：axios 接口，歌曲 id

  * ```js
    //歌曲详情地址
    axios
    	.get("https://autumnfish.cn/song/detail?ids="+musicId)
    	.then(res => {//res=> 等价于 function(response)
    		//console.log(res);
    		//console.log(res.data.songs[0].al.picUrl);
    		that.musicCover = res.data.songs[0].al.picUrl;
    	},err => {})
    ```

* 步骤三：歌曲封面设置

  * 运用知识点：v-bind

  * ```vue
    <img :src="musicCover" class="cover autoRotate" />
    ```

#### 功能点四：歌曲评论

> 实现步骤：（1）点击播放（2）歌曲评论获取（3）歌曲评论渲染

* 步骤一：点击播放
  
* 运用知识点：v-on，增加逻辑
  
* 步骤二：歌曲评论获取

  * 运用知识点：axios 接口，歌曲 id

  * ```js
    //歌曲评论获取
    axios
    	.get("https://autumnfish.cn/comment/hot?type=0&id="+musicId)
    	.then(res => {//res=> 等价于 function(response) // 回调函数
    		//console.log(res);
    		//console.log(res.data.hotComments);
    	that.hotComments = res.data.hotComments;
    },err => {})
    ```

* 步骤三：歌曲评论渲染

  * 运用知识点：v-for

  * ```vue
    <div class='comment_list'>
    	<dl v-for="item in hotComments">
    		<dt><img :src="item.user.avatarUrl" alt=""></dt>
    		<dd class="name">{{ item.user.nickname }}</dd>
    		<dd class="detail">
    			{{ item.content}}
    		</dd>
    	</dl>
    </div>
    ```

#### 功能点五：播放动画

> 实现步骤：（1）监听音乐播放（2）监听音乐暂停（3）操纵类名

* 步骤一：监听音乐播放

  * 运用知识点：v-on, play

  * ```vue
    <div class="audio_con">
    	<audio ref='audio'  :src="musicUrl"  @play="play" @pause="pause" controls autoplay loop class="myaudio"></audio>
    </div>
    ```

  * ```js
    //动画播放
    play:function () {
       //console.log("play");
       this.isPlaying = true;
    },
    ```

* 步骤二：监听音乐暂停

  * 运用知识点：v-on, pause

  * ```js
    //播放暂停
    pause:function () {
       //console.log("pause");
       this.isPlaying = false;
    }
    ```

* 步骤三：操纵类名

  * 运用知识点：v-bind, 对象

  * ```vue
    <div class="player_con" :class="{playing:isPlaying}"></div>
    ```



#### 功能点六：MV 播放

> 实现步骤：（1）MV 图标显示（2）MV 地址获取（3）遮罩层（4）MV 地址设置

* 步骤一：MV 图标显示

  * 运用知识点：v-if

  * ```vue
     <span v-if="item.mvid!=0" @click="playMV(item.mvid)"><i></i></span>
    ```

* 步骤二：MV 地址获取

  * 运用知识点：axios 接口，MV id

  * ```js
    //播放MV
    playMV:function (mvid) {
    	var that = this;
    	axios
            .get("https://autumnfish.cn/mv/url?id="+mvid)
      		.then(res => {//res=> 等价于 function(response) // 回调函数
          		//console.log(res);
          		//console.log(res.data.data.url);
             	that.isShow = true;
             	that.mvUrl = res.data.data.url;
            },err => {})
    },
    ```

* 步骤三：遮罩层

  * 运用知识点：v-show, v-on

  * ```vue
    //隐藏遮罩层
    hide:function () {
    	this.isShow = false;
    }
    ```

* 步骤四：MV 地址设置

  * 运用知识点：v-bind

  * ```vue
    <div class="video_con" v-show="isShow" style="display: none;">
    	<video :src="mvUrl" controls="controls"></video>
    	<div class="mask" @click="hide"></div>
    </div>
    ```

> 效果展示：[效果预览](https://wugenqiang.gitee.io/vue-learning/vue-demo/player/示例.html)  [优化之后预览](https://wugenqiang.gitee.io/vue-learning/vue-demo/ETS-Player/)















