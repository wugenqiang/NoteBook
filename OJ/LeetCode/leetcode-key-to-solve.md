# LeetCode 刷题笔记

## 前言

[在线编程Code](https://leetcode-cn.com/playground/zsAjUyhh/)

在练习 OJ 的过程中遇到了很多优秀的大佬，进步的空间还有很多很多，加油吧！

下面罗列我参考过的博客，值得推荐一波：

* [LeetCode & 剑指offer 刷题笔记](https://blog.csdn.net/kk55guang2/article/details/85223256)
* [LeetCode All in One 题目讲解汇总](https://www.cnblogs.com/grandyang/p/4606334.html)

## 数字题

面试常见题型 atoi

### 幂问题

题目 01：判断一个 int 是不是 2 的幂

```c
bool isPowerOfTwo(int n){
    if(n <= 0){
        return flase;
    }
    return !(n & (n - 1));//最低位1置0
    //return (n & (n - 1) == 0);//最低位1置0
}
```

题目 02：判断一个 int 是不是 3 的幂

```c
bool isPowerOfThree(int n){
	//若 big3 表示 3 次方
	//big3 = 3^k; 则 k = log3(maxint);
	//big3 % n == 0;
	if(n <= 0){
	    return false;
	}
	const int maxint = 0x7fffffff;
	int k = log(maxint)/log(3);
	int big3 = pow(3, k);
	return (big3 % n == 0);
}
```

题目 03：判断一个 int 是不是 4 的幂

```c
bool isPowerOfFour(int num){
    if(n <= 0){
        return false;
    }
    return (n & (n - 1) && (n & 0x55555555)) == 0;//过滤到 2，8
}
```

### 数数问题

题目：数 1

```c
int hamminWeight(uint32_t n){
    int ans = 0;
	while(n > 0){
 	   n = n & (n - 1);//最低位1=0
 	   ans++;
	}
	return ans;
}
```

### 阶乘

题目：n! 末尾有多少个 0

* Method 01：

```c
int trailingZeroes(int n){
    int sum = 0;
    for(int i = 5; i < n; i += 5){
        int x = i;
        while(x % 5 == 0){
            x /= 5;
            sum++;
        }
    }
    return sum;
}
```

* Method 02：

```c
int trailingZeroes(int n){
    int sum = 0;
    while(n > 0){
        sum += n / 5;
        n /= 5;
    }
    return sum;
}
```

### 素数

题目 01：求素数 Count Primes

* 筛法，注意边界

题目 02：Add Digits

* 38 ==> 3 + 8 = 11 ==> 1 + 1 = 2

* ab = a * 10 + b

* ab % 9 = (a * 9 + a + b) % 9 = (a + b) % 9;

```c
int addDigits(int num){
    if(num == 0){
        return 0;
    }
    return ((num - 1) % 9 + 1);
    //return (num % 9);
}
```

### 博弈问题

题目 01：Nim Game

![image-20200331161549721](../images/image-20200331161549721.png)



![image-20200331164124422](../images/image-20200331164124422.png)

* Method 01：

```c
bool canWinNim(int n){
    return n % 4 != 0;
}
```

* Method 02：

```cpp
bool canWinNim(int n){
    vector<bool> f(n + 1, false);
    for (int i = 0; i < n; i++){
        if( !f[i] ){
            for (int j = 1; j <= 3; j++)			{
				f[i + j] = true;
            }
    	}
    }
}
```





## 二分法

![image-20200406084613085](../images/image-20200406084613085.png)

题目 01：求 sqrt(x)

```java
public class Solution{
    public int mySort(int x){
        return (int)Math.sqrt(x);
    }
}
```

也可以用`牛顿迭代`来做



题目 02：二分法求 sqrt(x)

```java
public class Solution{
    public boolean guess(long x, int y){
        return x * x <= y;
    }
    public int mySort(int y){
        long L = 0, R = (long)y + 1;//[0, y)
        long ans = 0;
        while(L < R){
            long mid = (L + R) / 2;
            if(guess(mid, y)){
                ans = mid;
                L = mid + 1;
            }else{
                R = mid;
            }
        }
        return (int)ans;
    }
}
```

> 注：二分法容易死循环

题目 03：按顺序分离数组求最大值和最小值最接近

410. Split Array Largest Sum

```
Input:
nums = [1,2,3,4,5]
m = 2

Output:
9
```

具体实现如下：

```java
public class Solution{
    public boolean guess(long mid, int nums[], int m){
        long sum = 0;
        //int mm = 0;
        for (int i = 0; i < nums.length; i++){
            if (sum + nums[i] > mid){
                --m;
                //++mm;
                sum = nums[i];
                if (nums[i] > mid){
                    return false;
                }
            } else {
                sum += nums[i];
            }
        }
        return m >= 1;
        //return mm < m;
    }
    public int splitArray(int nums[], int m){
        long n = nums.length;
        long R = 1;//m>=1
        for (int i = 0; i < n; i++){
            R += nums[i];
        }
        long L = 0;
        long ans = 0;
        while (L < R){
            long mid = (L + R) / 2;
            if (guess(mid, nums, m)){
                ans = mid;
                //L = mid + 1;
                R = mid;
            } else {
                //R = mid;
                L = mid + 1;
            }
        }
        return (int)ans;
    }
}
```

363. Max Sum of Rectangle No Larger Than K

```
Given matrix = [
	[1, 0, 1]
	[0, -2, 3]
]
k = 2
```

具体实现如下：



## 树



## 深度优先



## 图论



## 动态规划 DP



