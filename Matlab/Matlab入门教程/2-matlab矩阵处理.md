# 第 2 章 Matlab 矩阵处理

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





## 2.4 矩阵的特征值与特征向量



## 2.5 稀疏矩阵



## 2.6 参考资料

* [Matlab编程入门视频](https://www.bilibili.com/video/BV19J411W7Ta?t=525)