### 1. 使用接口的原因

我们来看一段代码：

```go
type Cat struct{}

func (c Cat) Say() string { return "喵喵喵" }

type Dog struct{}

func (d Dog) Say() string { return "汪汪汪" }

func main() {
	c := Cat{}
	fmt.Println("猫:", c.Say())
	d := Dog{}
	fmt.Println("狗:", d.Say())
}
```

上述代码中定义了狗 `Dog` 和猫 `Cat` 以及它们对应的方法 `Say()`，若要继续添加鸭 `Duck` 方法和其对应的方法 `Say()`，重复代码会非常多。我们可不可以从这三种动物类型中抽象出方法 `Say()`，这就是接口的作用，接口可以定义抽象方法，来规范我们的代码。

### 2. 接口的定义和使用

Go 语言非传统面对对象语言，没有类和继承的概念。但在 Go 语言中可以通过接口来实现面对对象的一些特性，接口是用来描述对象行为的，可以在其中定义一些**抽象方法**，这些方法**不能被实现**，同时接口中**不能包含变量**。

Go 语言中接口 `interface` 是一种抽象类型。

接口的定义格式：

```go
type Namer interface {
    Method1(params) returnType
    Method2(params) returnType
}
```

一般接口以 `[e]r` 结尾，例如 `Writer`、`Logger` 等。若 `er` 结尾不合适时，可以采用 `able` 结尾，例如 `Recoverable`。

举个例子：

```go
type Writer interface {
    Writer([]byte) error
}
```

若一个对象实现了接口的所有方法，那么就实现了这个接口。

我们来定义一个 `Sayer` 接口：

```go
type Sayer interface {
    say()
}
```

定义 `dog` 和 `dat` 两个结构体：

```go
type dog struct{}

type cat struct{}
```

让 `dog` 和 `cat` 实现接口 `Sayer` 的 `say` 方法：

> 由于 `Sayer` 接口中只有一个 `say` 方法，所以 `dog` 和 `cat` 实现了 `Sayer` 接口。
>

```go
func (d dog) say() {
	fmt.Println("汪汪汪")
}

func (c cat) say() {
	fmt.Println("喵喵喵")
}
```

接口变量可以接收任何实现了该接口的实例，如：

```go
func main() {
	var sayer Sayer // 声明接口类型变量 sayer
	c := cat{}
	d := dog{}

	sayer = c   // 把 cat 对应实例 c 赋值给 sayer
	sayer.say() // 通过接口变量调用 say 方法，等价于 c.say()

	sayer = d   // 把 dog 对应实例 d 赋值给 sayer
	sayer.say() // 通过接口变量调用 say 方法，等价于 d.say()
}
```

上述代码运行结果为：

```shell
喵喵喵
汪汪汪
```

### 3. 值接收和指针接收实现接口的区别

现在有一个 `Sayer` 接口和 `Cat` 结构体：

```go
type Sayer interface {
	say()
}

type cat struct{}
```

#### 3.1 值接收实现接口

```go
func (c cat) say() {
	fmt.Println("喵喵喵")
}
```

创建值实例 `c` 和指针实例 `c2`，然后通过 `Sayer` 接口变量 `sayer` 来调用方法 `say()`：

```go
func main() {
	var sayer Sayer // 声明接口类型变量 sayer
	c := cat{}
	c2 := &cat{}

	sayer = c
	sayer.say()

	sayer = c2
	sayer.say()
}
```

上述代码运行结果为：

```shell
喵喵喵
喵喵喵
```

从上述例子中，我们可以发现：当以**值接收**形式实现接口时，不论是值实例还是指针实例，都可以赋值给接口变量。

#### 3.2 指针接收实现接口

我们来看下指针接收来实现接口：

```go
func (c *cat) say() {
	fmt.Println("喵喵喵")
}

func main() {
	var sayer Sayer // 声明接口类型变量 sayer
	c := cat{} // cat 的实例
	c2 := &cat{} // *cat 的实例

	sayer = c // 不能将 cat 的实例赋值给 sayer
	sayer.say()

	sayer = c2
	sayer.say()
}
```

运行后，编译器会提示 `cat does not implement Sayer (say method has pointer receiver)` 错误，因为实现 `Sayer` 接口的是 `*cat`，所以不能将 `cat` 的实例 `c` 赋值给接口变量 `sayer` ，也就是说 `sayer` 只能接收指针实例。

### 4. 类型和接口的关系

#### 4.1 类型和接口的关系

##### 一个类型实现多个接口

一个类型可以实现多个接口，且这些接口相互独立。动物既会叫，也会动，可以定义两个接口，然后让 `cat` 分别实现这两个接口：

```go
package main

import "fmt"

type Sayer interface {
	say()
}

type Mover interface {
	move()
}

type cat struct{}

func (c cat) say() {
	fmt.Println("喵喵喵")
}

func (c cat) move() {
	fmt.Println("猫动了")
}

func main() {
	var sayer Sayer
	var mover Mover
	c := cat{}

	sayer = c
	mover = c
	sayer.say()
	mover.move()
}
```

上述代码运行结果为：

```shell
喵喵喵
猫动了
```

##### 多个类型实现同一接口

一个接口可以被多个不同类型实现，现在有一个接口 `Mover`，猫 `cat` 和狗 `dog` 都会动，让它们分别实现 `Mover` 接口：

```go
package main

import "fmt"

type Mover interface {
	move()
}

type cat struct{}

type dog struct{}

func (c cat) move() {
	fmt.Println("小猫咪溜了")
}

func (d dog) move() {
	fmt.Println("二狗子跑了")
}

func main() {
	var m Mover
	c := cat{}
	d := dog{}

	m = c
	m.move()
	m = d
	m.move()
}
```

上述代码运行结果为：

```shell
小猫咪溜了
二狗子跑了
```

一个接口的方法不一定要由一个类型完全实现，可以通过在类型中嵌入其他类型来实现，如：

```go
// WashingMachine 洗衣机
type WashingMachine interface {
	wash()
	dry()
}

// 甩干器
type dryer struct{}

// 实现 WashingMachine 接口的 dry() 方法
func (d dryer) dry() {
	fmt.Println("甩一甩")
}

// 海尔洗衣机
type haier struct {
	dryer //嵌入甩干器
}

// 实现 WashingMachine 接口的 wash() 方法
func (h haier) wash() {
	fmt.Println("洗刷刷")
}
```

### 5. 接口嵌套

接口可以通过嵌套生成新的接口，如：

```go
// Sayer 接口
type Sayer interface {
	say()
}

// Mover 接口
type Mover interface {
	move()
}

// 接口嵌套
type animal interface {
	Sayer
	Mover
}
```

嵌套接口使用方式与普通接口一样，我们让 `cat` 来实现 `animal` 接口：

```go
func (c cat) say() {
	fmt.Println("喵喵喵")
}

func (c cat) move() {
	fmt.Println("小猫咪溜了")
}

func main() {
	var a animal
	c := cat{}

	a = c
	a.say()
	a.move()
}
```

上述代码运行结果为：

```shell
喵喵喵
小猫咪溜了
```

### 6. 空接口

#### 6.1 空接口的定义

空接口是指未定义任何方法的接口，因此任何类型都实现了空接口（空接口有点类似于 Java 中的基类 Object）。

空接口类型变量可以存储任意类型的值：

```go
package main

import "fmt"

func main() {
	var i interface{}
	s := "空接口"
	n := 25
	b := true

	i = s
	fmt.Println(s)
	i = n
	fmt.Println(n)
	i = b
	fmt.Println(i)
}
```

上述代码运行结果为：

```shell
空接口
25
true
```

#### 6.2 空接口的应用

##### 函数传参

使用空接口可以接收任意类型的参数：

```go
func show(x interface{}) {
    fmt.Printf("type:%T value:%v\n", x, x)
}
```

##### Map 的值

使用空接口可以实现保存任意类型的值的 Map：

```go
var studentInfo = make(map[string]interface{})
studentInfo["name"] = "张三"
studentInfo["age"] = 24
studentInfo["married"] = false
fmt.Println(studentInfo)
```

### 7. 类型断言

我们如何获取空接口变量的值和具体类型呢？可以采用类型断言来实现。

一个接口的值是由 `具体类型` 和 `具体类型的值` 组成的，分别称为接口的 `动态类型` 和 `动态值`。

我们来看一个例子：

```go
var w io.Writer
w = os.Stdout
w = new(bytes.Buffer)
w = nil
```

来看下接口变量 `w` 的变化：

![类型断言](https://cangmang.coding.net/p/image/d/image/git/raw/master/article/2020/10/16/20201016132857.png)

若要判断空接口类型变量的值，可以使用类型断言，其格式为：

```go
x.(T)
```

- `x` 为空接口类型变量
- `T` 表示断言 `x` 可能的类型

上述断言语句将返回两个参数，第一个参数为 `x` 转化为 `T` 类型后的值，第二个值为布尔型，若为 `true` 表明断言成功，若为 `false` 表明断言失败。

我们来看一个例子：

```go
func main() {
	var x interface{}
	x = "Hello Golang"
	v, ok := x.(string)
	if ok {
		fmt.Println(v)
	} else {
		fmt.Println("类型断言失败")
	}
}
```

若要进行多次断言，可以采用 `switch` 语句：

```go
func justifyType(x interface{}) {
	switch v := x.(type) {
	case string:
		fmt.Printf("x is a string，value is %v\n", v)
	case int:
		fmt.Printf("x is a int is %v\n", v)
	case bool:
		fmt.Printf("x is a bool is %v\n", v)
	default:
		fmt.Println("unsupport type！")
	}
}
```

> ***注意***：当有多个类型存在相同的方法时才适合使用接口，不要为了刻意使用接口而使用接口，这样会增加运行时的损耗。
