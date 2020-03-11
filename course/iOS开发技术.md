iOS开发模式：MVC（Model和View不可通信）

Xcode playground    实时编译

主要文件
* AppDelegate swift   代理方法
* Info.plist    配置文件
* 两个view文件
    * LaunchScreen.storyboard   故事板（启动过程）
    * Main.storyboard   故事板（进入页面后）
* ViewController.swift                                                       

command按钮拖动控件，添加代理事件

!   非空修饰符
->  返回值类型

## Swift和Objective-C的联系

共用一套运行时环境，Swift的类型可以桥接到OC中，反之亦然。OC中出现过的大多数概念，比如引用计数、ARC（自动管理内存）、属性、协议、接口、初始化、扩展类、命名参数、匿名函数等，在Swift中继续有效。Swift也多出了一些新兴概念，比如范型、元组等

### 范型

```swift
func isObjEqual<T:Equatable>(x:T,y:T) -> Bool{
    return x == y
}
```

### 访问权限

### Foundation框架

基本类型都可无缝转换到Foundation框架中的对应类型

NS开头的都是OC中的类型

## 其他补充

swift数据类型会自动判断，只区分变量var和常量let

swift判定bool类型更加严格，不是OC的非0就是真，而是true是真false是假

swift的循环语句必须加{}，就算只有一行代码也要加

swift的switch语句后面可以跟各种数据类型

swift的any可以表示任何类型



## 跳转

self.present