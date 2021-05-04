Go 语言通过 定义结构体来支持用户自定义类型。一个结构体代表现实世界中的一个实体，类似于 Java 中的实体类。当要定义一个类型时，这个类型包含很多属性，例如定义一个用户类型，用户类型中包含用户名、密码和生日等属性，就可以使用结构体。

组成结构体属性的数据成为字段，每个字段都有类型和名称；在结构体中，字段名称必须唯一。由于 Go 语言中不存在类的概念，所以结构体 `struct` 在 Go 语言中有着较高的地位。

### 结构体的定义

#### 格式

结构体定义的格式如下：

```go
type variable struct {
    field1 type1
    field2 type2
}
```

若结构体中有多个**同类型**字段，可以简写，如：

```go
type T struct {
    a, b int
}
```

若结构体中的字段并不需要使用，可以用匿名变量 `_` 来定义，如：

```go
type M struct {
    _ int
}
```

结构体中字段的类型可以是任意类型（包括结构体、函数和接口等）。

#### 使用 new

可以使用 `new` 函数给新结构体变量分配内存，它返回指向分配内存的指针，如：

```go
var t *T = new(T)
```

当然，也可以将上述语句拆成两行：

```go
var t *T
t = new(T)
```

在函数内部，一般采用短变量形式，如：

```go
t := new(T)
```

声明 `var t T` 也会给 `t` 分配内存，并零值化内存，但此时 `t` 是类型 T。在这两种方式中，`t` 通常被称作 `T` 的一个实例（`instance`）或者对象（`Object`）。

我们来看一个例子，如下：

```go
package main

import "fmt"

type struct1 struct {
	i1  int
	f1  float32
	str string
}

func main() {
	ms := new(struct1)
	ms.i1 = 10
	ms.f1 = 15.5
	ms.str= "Chris"

	fmt.Printf("The int is: %d\n", ms.i1)
	fmt.Printf("The float is: %f\n", ms.f1)
	fmt.Printf("The string is: %s\n", ms.str)
	fmt.Println(ms)
}
```

上述代码运行结果：

```shell
The int is: 10
The float is: 15.500000
The string is: Chris
&{10 15.5 Chris}
```

#### 选择器

可以使用 `.` 来给结构体的字段赋值：`structName.fieldName = value `。

同样，也可以用 `.` 来获取结构体中的字段的值：`value := structName.fieldName`。

用 `.` 来操作结构体字段在 Go 语言中叫作**选择器**，对于**结构体类型变量**和**结构体类型的指针变量**，都可以使用选择器来引用结构体的字段：

```go
type myStruct struct { 
    i int
}
var v myStruct    // v 是结构体类型变量
var p *myStruct   // p 是指向一个结构体类型变量的指针
v.i
p.i
```

#### 初始化方式

初始化一个结构体实例的方式如下：

```go
ms := &struct1{10, 15.5, "Chris"} // ms 的类型为 *struct1
```

或者：

```go
ms := struct1{1, 1.2, "Bob"} // ms 的类型为 struct1
```

在使用 `&struct{a, b, c}` 混合字面量语法时，注意值顺序和结构体字段顺序要一一对应。`new(Type)` 和 `&Type{}` 是等价的。

我们来看一个例子：

```go
type Interval struct {
    start int
    end   int
}

intr := Interval{0, 3} // A
intr := Interval{end: 5, start: 1} // B
intr := Interval{end: 5} // C
```

以 A 这种方式初始化，要注意值的顺序和结构体字段的顺序需一一对应。

以 B 这种方式初始化，要在每一个值前面加上字段名称和冒号，这种情况下，顺序不必一致；某些字段可以省略，如 C 这种初始化方式。

#### 结构体的内存布局

Go 语言中，结构体和它所包含的数据在内存中是连续的，而 Java 中的实体类对象可能会保存在不同的内存空间中，因此 Go 语言的结构体具有更好的性能。

#### 递归结构体

结构体可以进行自引用，特别是在定义链表和二叉树等数据结构时，特别有用。

例如，定义一个二叉树结点：

```go
type Tree struct {
    data int
    left *Tree // 指向左孩子结点的指针
    right *Tree // 指向右孩子结点的指针
}
```

### 使用工厂方法创建结构体

#### 定义工厂方法

由于 Go 语言不支持面向对象的构造方法，因此使用工厂方法来创建实例，工厂方法一般以 `New` 开头。

例如，先定义一个名为 `File` 的结构体：

```go
type File struct {
    fd int      // 文件描述符
    name string // 文件名
}
```

以下是这个结构体对应的工厂方法，返回该结构体实例的指针：

```go
func NewFile(fd int, name string) *File {
	if fd < 0 {
		return nil
	}

	return &File{fd, name}
}
```

可以这样调用上面定义的工厂方法：

```go
f := NewFile(1, "./a.txt")
```

#### 强制使用工厂方法

> ***注意***：Go 语言中，**小写字母**开头的变量和函数无法被外部包导入（**私有**），**大写字母**开头的变量和函数可以被外部导入（**共有**）。
>

可以在定义结构体时，让结构体名称以**小写字母**开头，那么外部包就无法直接导入这个结构体（无法通过 `new` 函数初始化结构体），只能通过工厂方法来获取该结构体的实例。

我们来看一个例子，先定义一个结构体 `matrix` 和对应的工厂方法 `NewMatrix`：

```go
package matrix

type matrix struct {
    // ...
}

func NewMatrix(params) *matrix {
    m := new(matrix) // 初始化 m
    return m
}
```

在其他包中使用对应的工厂方法：

```go
package main

import "matrix"

// ...

wrong := new(matrix.matrix)     // 编译失败（matrix 是私有的）
right := matrix.NewMatrix(...)  // 实例化 matrix 的唯一方式
```

#### new() 和 make()

make() 函数只能用在初始化 `slice`、`map` 和 `channel` 三种**引用类型**中。

new() 函数只能用在**数组**和**结构体**这样的**值类型**中，为变量分配内存。

### 带标签的结构体

结构体中的字段除了有名称和类型之外，还有一个可选的标签，标签以字符串的形式来编写。标签内容一般无法直接获取，需要通过反射来获取，常用于保存 ORM 字段和表单验证等。

标签用反引号 `` 包围，单个标签格式为 `tagName:"tagValue"`，多个标签只需要用空格分开即可，如：

```go
type Tag struct {
	field1 bool   `name:"first field" id:"1"` // 定义两个标签 name 和 id，值分别为 first field 和 1
	field2 string `name:"second field" id:"2"`
	field3 int    `name:"third field" id:"3"`
}
```

可以通过反射获取标签的名称和值：

```go
package main

import (
	"fmt"
	"reflect"
)

type Tag struct {
	field1 bool   `name:"first field" id:"1"`
	field2 string `name:"second field" id:"2"`
	field3 int    `name:"third field" id:"3"`
}

func main() {
	tag := Tag{
		field1: false,
		field2: "Bob",
		field3: 99,
	}
	t := reflect.TypeOf(tag)

	fmt.Println(t.Field(0).Tag)
	fmt.Println(t.Field(1).Tag)
	fmt.Println(t.Field(2).Tag)
}
```

上述代码运行结果为：

```shell
name:"first field" id:"1"
name:"second field" id:"2"
name:"third field" id:"3"
```

### 匿名字段和内嵌结构体

结构体可以包含一个或多个匿名字段，匿名字段是指没有显式名字的字段，但类型是必须的。匿名字段可以是结构体类型，结构体里可以内嵌结构体。

内嵌结构体可以被用来模拟类似类的继承行为。

我们来看一个例子：

```go
package main

import "fmt"

type innerS struct {
	in1 int
	in2 int
}

type outerS struct {
	b      int
	c      float32
	int    // anonymous field
	innerS // anonymous field
}

func main() {
	outer := new(outerS)
	outer.b = 6
	outer.c = 7.5
	outer.int = 60
	outer.in1 = 5
	outer.in2 = 10

	fmt.Printf("outer.b is: %d\n", outer.b)
	fmt.Printf("outer.c is: %f\n", outer.c)
	fmt.Printf("outer.int is: %d\n", outer.int)
	fmt.Printf("outer.in1 is: %d\n", outer.in1)
	fmt.Printf("outer.in2 is: %d\n", outer.in2)

	// 使用结构体字面量
	outer2 := outerS{6, 7.5, 60, innerS{5, 10}}
	fmt.Printf("outer2 is: %v", outer2)
}
```

运行结果为：

```shell
outer.b is: 6
outer.c is: 7.500000
outer.int is: 60
outer.in1 is: 5
outer.in2 is: 10
outer2 is: {6 7.5 60 {5 10}}
```

可以通过类型来获取匿名字段中的数据，但每个结构体中对于每一种数据类型只能有一个匿名字段，若出现数据类型重名，需要手动处理（采用显式命名方式区分）。

### 方法

#### 方法的定义

Go 语言中没有类的概念，那么怎么实现类似于类的方法呢？Go 语言中，方法作用在接收者 `receiver` 上，接收者可以是某种类型的变量，因此方法是一种特殊的函数。

接收者可以是任意类型，包括结构体，函数，`int`，`string` 等。但不能是接口类型，因为接口是抽象定义，而方法却是具体实现。

Go 语言中，类型的代码和其对应的方法的代码可以不用放在同一个源文件中，但必须在同一个包下。

类型 `T`（或 `*T`）上的**所有方法的集合**叫做类型 `T`（或 `*T`）的**方法集**。

定义方法的格式如下：

```go
func (recv receiverType) methodName(params) (returnValues) { 
    // ... 
}
```

> ***注意***：Go 语言官方建议 `recv` 命名一般取 `receiverType` 具体类型名称的**首字母小写**，例如：若 `receiverType` 为 `User`，那么 `recv` 为 `u`。
>

在方法名 `methodName` 之前指定接收者 `receiver`。

若 `recv` 是 `receiver` 的实例，`Method1` 是它的方法名，可以通过 `Object.name` 格式来调用：`recv.Method1()`；若 `recv` 是 `receiver` 的指针实例，Go 编译器会自动解引用。

我们来看一个结构体方法的例子：

```go
package main

import "fmt"

type TwoInts struct {
	a int
	b int
}

func (tn *TwoInts) AddThem() int {
	return tn.a + tn.b
}

func (tn *TwoInts) AddToParam(param int) int {
	return tn.a + tn.b + param
}

func main() {
	two1 := new(TwoInts)
	two1.a = 12
	two1.b = 10

	fmt.Printf("The sum is: %d\n", two1.AddThem())
	fmt.Printf("Add them to the param: %d\n", two1.AddToParam(20))

	two2 := TwoInts{3, 4}
	fmt.Printf("The sum is: %d\n", two2.AddThem())
}
```

上述代码运行结果为：

```shell
The sum is: 22
Add them to the param: 42
The sum is: 7
```

下面是非结构体方法的例子：

```go
package main

import "fmt"

type IntVector []int

func (v IntVector) Sum() (s int) {
	for _, x := range v {
		s += x
	}
	return
}

func main() {
	fmt.Println(IntVector{1, 2, 3}.Sum()) // 6
}
```

#### 函数和方法的区别

- 函数将变量作为参数：`Function(recv)`，而方法在变量上被调用：`recv.Method1()`；
- 当方法接收者为指针时，方法会改变接收者的值；函数也可以通过传递引用类型参数做到。
- Go 语言中，类型关联的方法不写在类型结构中，耦合性更低；类型和方法之间的关联由接收者来建立。

#### 指针接收者和值接收者

**指针接收**和**值接收**的区别在于，指针接收会改变接收者的值。

我们来看一个例子：

```go
package main

import (
	"fmt"
)

type B struct {
	thing int
}

// 指针方法
func (b *B) change() { b.thing = 1 }

// 值方法
func (b B) write() string { return fmt.Sprint(b) }

func main() {
	var b1 B // b1 是值
	b1.change()
	fmt.Println(b1.write())

	b2 := new(B) // b2 是指针
	b2.change()
	fmt.Println(b2.write())
}
```

上述代码运行结果为：

```shell
{1}
{1}
```

从上述代码中我们可以知道，**指针方法**和**值方法**都可以被**指针实例**或**非指针实例**调用，且**指针方法**会修改接收者的值，因为它传递的是对象的**引用**。

我们修改下之前的代码，让 `change()` 方法变为**值方法**：

```go
package main

import (
	"fmt"
)

type B struct {
	thing int
}

// 值方法
func (b B) change() { b.thing = 1 }

// 值方法
func (b B) write() string { return fmt.Sprint(b) }

func main() {
	var b1 B // b1 是值
	b1.thing = 2
	b1.change()
	fmt.Println(b1.write())

	b2 := new(B) // b2 是指针
	b2.thing = 3
	b2.change()
	fmt.Println(b2.write())
}
```

运行结果为：

```shell
{2}
{3}
```

我们发现 `change()` 方法并没有改变接收者的值，因为在调用 `change()` 方法时，传递的是对象的拷贝。

#### 方法和未导出字段

若结构体能在外部包中引入，而该结构体中的字段都是小写字母开头，无法在外部包中导出，那么如何获取和修改未导出字段呢？可以通过定义该结构体的 `Get` 和 `Set` 方法来实现（类似于 Java 中的 Getter 和 Setter 方法）：

```go
package person

type Person struct {
    firstName string
    lastName  string
}

// 获取 firstName
func (p *Person) GetFirstName() string {
    return p.firstName
}

// 设置 firstName
func (p *Person) SetFirstName(newName string) {
    p.firstName = newName
}
```

#### 内嵌类型方法与继承

当一个匿名类型被嵌入结构体中时，该结构体会继承匿名类型中的方法。

我们来看一个例子：

```go
package main

import (
	"fmt"
	"math"
)

type Point struct {
	x, y float64
}

func (p *Point) Abs() float64 {
	return math.Sqrt(p.x*p.x + p.y*p.y)
}

type NamedPoint struct {
	Point
	name string
}

func main() {
	n := &NamedPoint{Point{3, 4}, "Pythagoras"}
	fmt.Println(n.Abs()) // 5
}
```

上述代码中结构体 `NamePoint` 内嵌了结构体 `Point`，因而也继承了结构体 `Point` 对应的指针方法 `Abs()`，通过 `NamePoint` 的实例即可调用该方法。

若在外层结构体定义了与内嵌结构体**同名**的方法，将会**覆盖**内嵌结构体的同名方法，例如：

```go
package main

import (
	"fmt"
	"math"
)

type Point struct {
	x, y float64
}

type NamedPoint struct {
	Point
	name string
}

func (p *Point) Abs() float64 {
	return math.Sqrt(p.x*p.x + p.y*p.y)
}

func (n *NamedPoint) Abs() float64 {
	return n.Point.Abs() * 100
}

func main() {
	n := &NamedPoint{Point{3, 4}, "Pythagoras"}
	fmt.Println(n.Abs()) // 500
}

```

#### 多重继承

多重继承是指类型能获得多个父类型的行为的能力。在 Go 语言中，可以在类型中嵌入多个父类型来实现简单的多重继承。

假设有一个类型 `CameraPhone` ，它包含了 `Camera` 和 `Phone`，因此可以使用 ` Call()` 和 `TakeAPicture()` 方法。

```go
package main

import (
    "fmt"
)

type Camera struct{}

func (c *Camera) TakeAPicture() string {
    return "Click"
}

type Phone struct{}

func (p *Phone) Call() string {
    return "Ring Ring"
}

type CameraPhone struct {
    Camera
    Phone
}

func main() {
    cp := new(CameraPhone)
    fmt.Println("Our new CameraPhone exhibits multiple behaviors...")
    fmt.Println("It exhibits behavior of a Camera: ", cp.TakeAPicture())
    fmt.Println("It works like a Phone too: ", cp.Call())
}
```

上述代码运行结果为：

```shell
Our new CameraPhone exhibits multiple behaviors...
It exhibits behavior of a Camera: Click
It works like a Phone too: Ring Ring
```

### 总结

Go 和面向对象的语言 Java 和 python 不同，在 Java 中，在一个对象上调用方法，运行时会检测当前类和它的超类中是否有此方法，没有会报错。而 Go 语言不存在这样的继承层次，若方法在此类型中定义了，就可以调用它，和该类型中的内嵌类型是否存在该方法没有关系。

- 在 Go 中，类型就是类，Go 的继承不同于面对对象语言中的继承。
- 在 Go 中，**代码复用**通过**组合**和**委托**来实现，**多态**通过**接口**来实现，这被称为**组件编程**。
