#  第 2 章 Matlab 矩阵处理

## 2.1 特殊矩阵

### 2.1.1 通用性的特殊矩阵

* `zeros 函数`：产生全 0 矩阵，即零矩阵
* `ones 函数`：产生全 1 矩阵，即幺矩阵
* `eye 函数`：产生对角线为 1 的矩阵，当矩阵为方阵时，得到一个单位矩阵
* `rand 函数`：产生（0，1）区间均匀分布的随机矩阵
* `randn 函数`：产生均值为 0，方差为 1 的标准正态分布随机矩阵

**调用格式**：（以上相似，以 zeros 函数的调用格式举例）

* zeros(m)：产生 m✖️m 零矩阵
* zeros(m,n)：产生 m✖️n 零矩阵
* zeros(size(A))：产生与矩阵 A 同样大小的零矩阵

```matlab
>> A = zeros(2,3) % 建立 2✖3 的零矩阵

A =

     0     0     0
     0     0     0

>> zeros(size(reshape(A,3,2))) % 将 A 转换为 3✖2 的矩阵，产生零矩阵

ans =

     0     0
     0     0
     0     0
```

例题：

![例题](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927162536527.png)

```matlab
>> A = fix(10+(99-10+1)*rand(5));
>> B = 0.6+sqrt(0.1)*randn(5);
>> C = eye(5);
>> (A+B)*C == C*A+B*C

ans =

  5×5 logical 数组

   1   1   1   1   1
   1   1   1   1   1
   1   1   1   1   1
   1   1   1   1   1
   1   1   1   1   1
```



### 2.1.2 用于专门学科的特殊矩阵

（1）魔方矩阵 - Magic Square

```matlab
>> M = magic(3)

M =

     8     1     6
     3     5     7
     4     9     2
```

* n 阶魔方阵由 1,2,3,...,n^2 共 n^2 个整数组成，且每行、每行、每列以及主、副对角线上各 n 个元素之和都相等。
* n 阶魔方阵每行每列元素的和为：(1+2+3+...+n^2)/n = (n+n^3)/2
* Matlab 函数 `magic(n)` 只产生一个特定的魔方阵

举例：产生 8 阶魔方阵，求其每行每列元素的和

```matlab
>> M = magic(8);
>> sum(M(1,:))

ans =

   260

>> sum(M(:,1))

ans =

   260
```

（2）范德蒙矩阵

![范德蒙矩阵](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927164746436.png)

在 Matlab 中，函数 vander(V) 生成以向量 V 为基础的范德蒙（Vandermonde）矩阵

```matlab
>> A = vander(1:5)

A =

     1     1     1     1     1
    16     8     4     2     1
    81    27     9     3     1
   256    64    16     4     1
   625   125    25     5     1
```

（3）希尔伯特矩阵

![希尔伯特矩阵](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927165555474.png)

**希尔伯特矩阵的元素为 H(i,j) = 1/(i+j-1)**

在 Matlab 中，生成 n 阶希尔伯特矩阵的函数是 `hilb(n)`

```matlab
>> format rat % 以有理数格式输出
>> H = hilb(4)

H =

       1              1/2            1/3            1/4     
       1/2            1/3            1/4            1/5     
       1/3            1/4            1/5            1/6     
       1/4            1/5            1/6            1/7  
```

（4）伴随矩阵

![伴随矩阵](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927170619606.png)

p(x) 称为 A 的特征多项式，方程 p(x) = 0 的根称为 A 的特征值。

在 Matlab 中生成伴随矩阵的函数是 compan(p)，其中 p 是一个多项式的系数向量，高次幂系数排在前，低次幂系数排在后。

例如：生成多项式 x^3-2x^2-5x+6 的伴随矩阵

```matlab
>> p = [1,-2,-5,6];
>> A = compan(p)

A =

       2              5             -6       
       1              0              0       
       0              1              0  
```

（5）帕斯卡矩阵

![image-20200927171614519](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927171614519.png)

![image-20200927171637128](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927171637128.png)

![image-20200927171710911](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927171710911.png)



## 2.2 矩阵变换

### 2.2.1 对角阵

* 对角矩阵：只有对角线上有非零元素的矩阵
* 数量矩阵：对角线上的元素相等的对角矩阵
* 单位矩阵：对角线上的元素都为 1 的对角矩阵

（1）**提取矩阵的对角线元素**

* diag(A)：提取矩阵 A 主对角线元素，产生一个列向量

* diag(A,k)：提取矩阵 A 第 k 条对角线的元素，产生一个列向量

  ![image-20200927184022757](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927184022757.png)

（2）**构造对角矩阵**

* diag(V)：以向量 V 为主对角线元素，产生对角矩阵
* diag(V,k)：以向量 V 为第 k 条对角线元素，产生对角矩阵

![image-20200927184337256](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927184337256.png)

```matlab
>> A = [7,0,1,0,5;3,5,7,4,1;4,0,3,0,2;1,1,9,2,3;1,8,5,2,9]

A =

       7              0              1              0              5       
       3              5              7              4              1       
       4              0              3              0              2       
       1              1              9              2              3       
       1              8              5              2              9       

>> D = diag(1:5); % 建立对角阵 D
>> D*A

ans =

       7              0              1              0              5       
       6             10             14              8              2       
      12              0              9              0              6       
       4              4             36              8             12       
       5             40             25             10             45       
```





### 2.2.2 三角阵

* 上三角阵：矩阵的对角线以下的元素全为零的矩阵
* 下三角阵：对角线以上的元素全为零的矩阵

（1）上三角矩阵

`triu`函数：

* triu(A)：提取矩阵 A 的主对角线及以上的元素
* triu(A,k)：提取矩阵 A 的第 k 条对角线及以上的元素

```matlab
>> triu(ones(4),-1)

ans =

       1              1              1              1       
       1              1              1              1       
       0              1              1              1       
       0              0              1              1    
```

（2）下三角矩阵

在 Matlab 中，提取矩阵 A 的下三角矩阵的函数是 tril，其用法与 triu 函数完全相同



### 2.2.3 矩阵的转置

* 转置运算符是小数点后面接单引号（.'）
* 共轭转置，其运算符是单引号（'），它在转置的基础上还要取每个数的复共轭

```matlab
>> A = [1,3;3+4i,1-2i]

A =

       1        +    0i             3        +    0i      
       3        +    4i             1        -    2i      

>> A.'

ans =

       1        +    0i             3        +    4i      
       3        +    0i             1        -    2i      

>> A'

ans =

       1        +    0i             3        -    4i      
       3        +    0i             1        +    2i      
```



### 2.2.4 矩阵的旋转

* rot90(A,k)：将矩阵 A 逆时针方向旋转 90 度的 k 倍，当 k 为 1 时可省略

```matlab
>> A = [1,3,2;-3,2,1;4,1,2]

A =

       1              3              2       
      -3              2              1       
       4              1              2       

>> rot90(A)

ans =

       2              1              2       
       3              2              1       
       1             -3              4       

>> rot90(A,2)

ans =

       2              1              4       
       1              2             -3       
       2              3              1       
```



### 2.2.5 矩阵的翻转

* fliplr(A)： 对矩阵 A 实施左右翻转
* flipud(A)：对矩阵 A 实施上下翻转

例如：验证魔方阵的主对角线、副对角线元素之和相等。

```matlab
>> A = magic(5);
>> D1 = diag(A);
>> sum(D1)

ans =

      65       

>> B = flipud(A);
>> D2 = diag(B);
>> sum(D2)

ans =

      65       
```

 

### 2.2.6 矩阵求逆

![image-20200927203651095](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927203651095.png)

* inv(A)：求方阵 A 的逆矩阵

![例题](https://gitee.com/wugenqiang/images/raw/master/01/image-20200927203850912.png)



## 2.3 矩阵求值

### 2.3.1 矩阵的行列式值

* `det(A)`：求方阵 A 所对应的行列式的值

例题：验证 
$$
det(A^{-1}) = 1/det(A)
$$

```matlab
>> format rat
>> A = [1,3,2;-3,2,1;4,1,2]

A =

       1              3              2       
      -3              2              1       
       4              1              2       

>> det(inv(A))

ans =

       1/11    

>> 1/det(A)

ans =

       1/11    
```



### 2.3.2 矩阵的秩

* 矩阵线性无关的行数或列数称为矩阵的秩
* rank(A)：求矩阵 A 的秩

例题：求 3～20 阶魔方阵的秩

```matlab
>> for n = 3:20
      r(n) = rank(magic(n));
   end
>> bar(r) % 绘制直方图
>> grid on
>> axis([2,21,0,20])
```



![image-20200929121839227](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929121839227.png)



![image-20200929122053698](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929122053698.png)



### 2.3.3 矩阵的迹

* 矩阵的迹等于矩阵的对角线元素之和，也等于矩阵的特征值之和。
* `trace(A)`：求矩阵 A 的迹

```matlab
>> A = [1,3,2;-3,2,1;4,1,2]

A =

       1              3              2       
      -3              2              1       
       4              1              2       

>> b = trace(A)

b =

       5       

>> t = sum(diag(A)) % 主对角线元素求和

t =

       5       
```



### 2.3.4 向量和矩阵的范数 

* 矩阵或向量的范数用来度量矩阵或向量在某种意义下的长度

（1）向量的 3 种常用范数

![image-20200929193712631](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929193712631.png)

![image-20200929193751197](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929193751197.png)

（2）矩阵的范数

从属于 3 种向量范数，矩阵范数计算公式如下：

![image-20200929193922827](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929193922827.png)

Matlab 提供了求 3 种矩阵范数的函数，其函数调用格式与求向量的范数的函数完全相同。

```matlab
>> x = [2 0 1;-1 1 0;-3 3 0]

x =

       2              0              1       
      -1              1              0       
      -3              3              0       

>> n = norm(x)

n =

    5909/1251  

>> n = norm(x,1)

n =

       6       
```



### 2.3.5 矩阵的条件数

* 矩阵 A 的条件数等于 A 的范数与 A 的逆矩阵的范数的乘积
* 条件数越接近于 1，矩阵的性能越好，反之，矩阵的性能越差。

**在 Matlab 中，计算矩阵 A 的 3 种条件数的函数是：**

![image-20200929194811059](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929194811059.png)

例题：求 2～10 阶希尔伯特矩阵的条件数

![image-20200929195518592](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929195518592.png)

## 2.4 矩阵的特征值与特征向量

### 2.4.1 矩阵特征值的数学定义

![定义](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929195758875.png)



### 2.4.2 求矩阵的特征值与特征向量

函数调用格式有两种：

* E=eig(A)：求矩阵 A 的全部特征值，构成向量 E
* [X,D]=eig(A)：求矩阵 A 的全部特征值，构成对角阵 D，并产生矩阵 X，X 各列是相应的特征向量

```matlab
>> A = [1,1,0;1,0,5;1,10,2]

A =

       1              1              0       
       1              0              5       
       1             10              2       

>> [X,D]=eig(A)

X =

     262/3629      1525/1564       482/5439  
    1075/2054      -139/1853      -839/1320  
    1108/1305     -2357/11285      839/1094  


D =

    2780/337          0              0       
       0           8111/8787         0       
       0              0          -2543/412   

>> A*X(:,1)

ans =

     564/947   
    1265/293   
    1765/252   

>> D(1)*X(:,1)

ans =

     564/947   
    1265/293   
    1765/252   
```

![image-20200929203314433](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929203314433.png)

![image-20200929203534254](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929203534254.png)

![image-20200929203616990](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929203616990.png)

### 2.4.3 特征值的几何意义

![image-20200929203816347](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929203816347.png)

Matlab 中提供了一个 eigshow 函数，可以演示单位圆上的向量 x 和 Ax 之间的关系，运行画面如下：

![image-20200929204153070](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929204153070.png)

![image-20200929204347190](https://gitee.com/wugenqiang/images/raw/master/01/image-20200929204347190.png)



## 2.5 稀疏矩阵

### 2.5.1 矩阵的存储方式

* 完全存储方式
* 稀疏存储方式
  * 稀疏存储方式只存储矩阵的非零元素的值及其位置，即行号和列号。

> 注意：采用稀疏存储方式时，矩阵元素的存储顺序并没有改变，也是按列的顺序进行存储。

举例：

![举例](https://gitee.com/wugenqiang/images/raw/master/01/image-20201002205755830.png)



### 2.5.2 稀疏存储方式的产生

（1）完全存储方式与稀疏存储方式之间的转化

* `A = sparse(S)`：将矩阵 S 转化为稀疏存储方式的矩阵 A
* `S = full(A)`：将矩阵 A 转化为完全存储方式的矩阵 S

```matlab
>> A = sparse(eye(5))

A =

   (1,1)        1
   (2,2)        1
   (3,3)        1
   (4,4)        1
   (5,5)        1

>> B = full(A)

B =

     1     0     0     0     0
     0     1     0     0     0
     0     0     1     0     0
     0     0     0     1     0
     0     0     0     0     1

>> whos
  Name      Size            Bytes  Class     Attributes

  A         5x5               128  double    sparse    
  B         5x5               200  double           
```

（2）直接建立稀疏存储矩阵

sparse 函数的其他调用格式：

* `sparse(m,n)`：生成一个 m✖️n 的所有元素都是零的稀疏矩阵
* `sparse(u,v,S)`：其中 u、v、S 是 3 个等长的向量。 S 是要建立的稀疏存储矩阵的非零元素，u(i)、v(i) 分别是 S(i) 的行和列下标

```matlab
>> A = sparse([1,2,2],[2,1,4],[4,5,7])

A =

   (2,1)        5
   (1,2)        4
   (2,4)        7

>> B = full(A)

B =

     0     4     0     0
     5     0     0     7
```

使用 `spconvert` 函数直接建立稀疏存储矩阵，其调用格式为：B = spconvert(A)

A 为一个 m ✖️ 3 或 m ✖️ 4 的矩阵，其每行表示一个非零元素，m 是非零元素的个数

* A(i,1) 表示第 i 个非零元素所在的行
* A(i,2) 表示第 i 个非零元素所在的列
* A(i,3) 表示第 i 个非零元素值的实部
* A(i,4) 表示第 i 个非零元素值的虚部

若矩阵的全部元素都是实数，则无须第 4 列

```matlab
>> A = [2,2,1;2,1,-1;2,4,3]

A =

     2     2     1
     2     1    -1
     2     4     3

>> B = spconvert(A)

B =

   (2,1)       -1
   (2,2)        1
   (2,4)        3
```

（3）带状稀疏矩阵的稀疏存储

稀疏矩阵有两种基本类型：无规则结构的稀疏矩阵与有规则结构的稀疏矩阵

带状稀疏矩阵是指所有非零元素集中在对角线上的矩阵。

![image-20201015151353520](https://gitee.com/wugenqiang/images/raw/master/01/image-20201015151353520.png)

```matlab
>> A = [11,0,0,12,0,0;0,21,0,0,22,0;0,0,31,0,0,32;41,0,0,42,0,0;0,51,0,0,52,0]

A =

    11     0     0    12     0     0
     0    21     0     0    22     0
     0     0    31     0     0    32
    41     0     0    42     0     0
     0    51     0     0    52     0

>> [B,d] = spdiags(A)

B =

     0    11    12
     0    21    22
     0    31    32
    41    42     0
    51    52     0


d =

    -3
     0
     3

>> A = spdiags(B,d,5,6)

A =

   (1,1)       11
   (4,1)       41
   (2,2)       21
   (5,2)       51
   (3,3)       31
   (1,4)       12
   (4,4)       42
   (2,5)       22
   (5,5)       52
   (3,6)       32
```

（4）单位矩阵的稀疏矩阵

* Speye(m,n) 返回一个 m × n 的稀疏存储单位矩阵

```matlab
>> speye(3)

ans =

   (1,1)        1
   (2,2)        1
   (3,3)        1
```



### 2.5.3 稀疏矩阵的应用实例

![题目](https://gitee.com/wugenqiang/images/raw/master/01/image-20201015231550022.png)

```matlab
>> kf1 = [1;1;2;1;0];
>> k0 = [2;4;6;6;1];
>> k1 = [0;3;1;4;2];
>> B = [kf1,k0,k1];
>> d = [-1;0;1];
>> A = spdiags(B,d,5,5);
>> f = [0;3;2;1;5];
>> x = A\f

x =

   -0.1667
    0.1111
    2.7222
   -3.6111
    8.6111
```



## 2.6 参考资料

* [Matlab编程入门视频](https://www.bilibili.com/video/BV19J411W7Ta?t=525)

