# SQL 笔记

## 1. 概述

1. 查看数据库hr中有几个表

   `show tables from hr;`

   | TABLE_NAME  | TABLE_SCHEMA |
   | :---------- | :----------- |
   | COUNTRIES   | HR           |
   | DEPARTMENTS | HR           |
   | EMPLOYEES   | HR           |
   | JOBS        | HR           |
   | JOB_HISTORY | HR           |
   | LOCATIONS   | HR           |
   | REGIONS     | HR           |

2. 查看某个表的结构

   `show columns from hr.employees;`

   **employees表**

   | FIELD          | TYPE        | NULL | KEY  | DEFAULT |
   | :------------- | :---------- | :--- | :--- | :------ |
   | EMPLOYEE_ID    | DECIMAL(6)  | YES  | UNI  | NULL    |
   | FIRST_NAME     | VARCHAR(20) | YES  |      | NULL    |
   | LAST_NAME      | VARCHAR(25) | YES  |      | NULL    |
   | EMAIL          | VARCHAR(25) | YES  | UNI  | NULL    |
   | PHONE_NUMBER   | VARCHAR(20) | YES  |      | NULL    |
   | HIRE_DATE      | DATE(8)     | YES  |      | NULL    |
   | JOB_ID         | VARCHAR(10) | YES  |      | NULL    |
   | SALARY         | DECIMAL(8)  | YES  |      | NULL    |
   | COMMISSION_PCT | DECIMAL(2)  | YES  |      | NULL    |
   | MANAGER_ID     | DECIMAL(6)  | YES  |      | NULL    |
   | DEPARTMENT_ID  | DECIMAL(4)  | YES  |      | NULL    |



## 2. 基本查询

### 1. select语句（略）

### 2. || 连接运算符

`select last_name || first_name as "name" from hr.employees;`

### 3.distinct 去重

`select distinct department_id from hr.employees;`

### 4. alias 列别名

`select last_name as "姓名" from hr.employees;`



## 3.限制和排序

### 1.where子句

`select * from hr.employees where department_id=90;`

> 								运算表达式包括：
> 							= > >= < <= <> !=
> 							[not] in (set) // 表示在后面的集合里面
> 							[not] like     //模糊匹配
> 							[not] is null //是否为空
> 							[not] between ... and ... //在两个值之间（包含两个值）

### 2. like模糊查询

查询s开头的字符串

`select employee_id from hr.employees where first_name like 's%';`

> 通配符：
>
> %  代表0个或任意多个字符
> _  （下划线）代表任意一个字符，一定会有一个，不能没有

由于%和用作了通配符，如果内容中本身有%或的，就需要用到反义：

```sql
job_id like '%SA\_%' escape '\';  
//escape '\表示'用\作为反义符，表示包含sa_的任意字符串
```

事实上，使用’\’作为反义不需要加escape（它是默认的），如果想使用其它字符作为反义符，一定要加escape。

### 3. 逻辑条件

1. and、or、not（略）

### 4. 优先顺序

> 1、算术运算符 * / + -
> 2、连接运算符 ||
> 3、比较条件 = > >= < <= <> !=
> 4、is [not] null、[not] like、[not] in
> 5、[not] between
> 6、not 逻辑条件
> 7、and 逻辑条件
> 8、or 逻辑条件

### 5. order by 结果排序

`order by {column, expr} [ASC | DESC];`

```sql
select last_name, salary from hr.employees
order by salary desc
limit 5 offset 0; 
//limit表示查询几条（一页几条），offset表示从哪里开始查
```

注：不同的数据库，分页机制有不同的实现，这里只是本系统数据库的实现方式，具体应用时要根据数据库类型而定。

## 4. 等值查询

### 1. 等值关联

```sql
select table1.column, table2.column
from table1, table2
where table1.column1 = table2.column2;
```

### 2. 更多关联条件

在where里面可以增加更多的条件，从而更加精准的限制范围

### 3. 自联结

将某个表与自身关联

查找员工 Whalen的姓氏、经理编号、经理姓名。

```sql
select e.last_name, e.manager_id, m.last_name
from hr.employees e, hr.employees m
where e.manager_id = m.employee_id
and e.last_name = 'Whalen';
```

### 4. join on 联结

SQL 1999语法规定的更加规范的联结语法

```sql
select e.last_name, m.last_name manager
from hr.employees e join hr.employees m
on e.manager_id = m.employee_id;
```

可以多次join on，实现三向联结等。

### 5. 左右连接和全连接

1. 左连接

   当我们使用员工表去join 部门表时，员工表为左表，使用左连接（left outer join）就可以看到所有员工表的数据，即使部门表中没有，结果中其部门编码和名称以null显示。（outer可省略）

```sql
select e.last_name, e.department_id, d.department_name
from hr.employees e
left outer join hr.departments d
on e.department_id = d.department_id;
```

2. 右连接同理。

3. 全连接

   使用全连接（full outer join）可以看到所有员工表和部门表的数据，即使在另外关联表中没有数据。

   ```sql
   select e.last_name, e.department_id, d.department_name
   from hr.employees e
   full outer join hr.departments d
   on e.department_id = d.department_id;
   ```



## 5. 单行函数

> 1、函数是SQL中的一项强大功能，可以用于执行数据计算、修改单个数据项、重组输出、转换数据类型、按指定格式显示等各种任务。
> 2、函数分为两种类型：单行函数和多行函数。
> 3、单行函数只处理单个行，为每行返回一个结果，单行函数又分为：字符函数、数字函数、日期函数、转换函数等几种类型。
> 4、多行函数又被称之为分组函数，它们可以处理成组的行，为一组行返回一个结果。
> 5、函数可以多层嵌套。
> 6、函数可以用在select、where、order by等字句当中。

### 1. 字符函数

> lower   --  转换为小写     lower('Sql')      -- sql
> upper   --  转换为大写     upper('Sql')      -- SQL
> concat  --  连接字符串     cancat('ab','12') -- ab12
> substring --返回子串    substring('hello',1,3)--hel
> length  --  返回长度       length('hello')    -- 5
> instr   --  子串位置       instr('hello','l') -- 3
> lpad    --  左边补齐       lpad('ab',5,'*')   --***ab
> rpad    --  右边补齐       rpad('ab',5,'*')   --ab***
> trim    --  截取头尾字符 trim('H' from 'Hello')-- ello
> replace --  替换        replace('Hello','e','a') -- Hallo

### 2. 数字函数

> round -- 四舍五入     round(45.926, 2)  --> 45.93
> trunc -- 截断         trunc(45.926, 2)  --> 45.92
> mod   -- 求余         mod(16, 3)        --> 1

### 3.日期格式

```sql
select formatdatetime(timestamp '2014-01-12 13:20:34',
       'EEE, yyyy-MMM-dd HH:mm:ss w z','zh') time;
```

常用格式：

> yy    --  两位的年，如 14
> yyyy  --  四位的年，如2014
> M     --  不带前导0的数字月，如8
> MM    --  两位数字月，如08
> MMM   --  缩写的字符月，如八月（中文）、Aug(英文)
> MMMM  --  完整月份名，中文和缩写一样，英文是全称
> EEE   --  星期几缩写
> EEEE  --  星期几全称
> w     --  年的第几周
> W     --  月的第几周
> d     --  不带前导0的数字日，如1
> dd    --  带前导0的数字日，如 01
> h     --  12小时制不带前导0的数字小时，如5
> hh    --  12小时制带前导0的数字小时，如05
> H     --  24小时制不带前导0的数字小时，如5
> HH    --  24小时制带前导0的数字小时，如17
> m     --  不带前导0的数字分钟，如1
> mm    --  带前导0的数字分钟，如01
> s     --  不带前导0的数字秒，如1
> ss    --  带前导0的数字秒，如01
>
> \-     --  通用日期分隔符，也有用/的
> :     --  通用时间分隔符
> z     --  时区，如CST, GMT等
> en    --  字符编码：英文
> zh    --  字符编码：中文

### 4. 时间函数

> current_date      --  当前日期
> current_time      --  当前时间
> current_timestamp --  当前日期时间

> day_of_year       --  一年中的第几天
> day_of_month      --  一月中的第几天
> day_of_week       --  一周中的第几天（周日是1）
> dayname           --  星期几
> monthname         --  月份
> year              --  年
> quarter           --  季度
> month             --  月
> week              --  周
> day               --  天
> hour              --  小时
> minute            --  分钟
> second            --  秒

用两种方式分解出当前时间的：年、月、日、小时、分钟、秒。
1、用year、month、day、hour、minute、second等函数

```sql
select year(current_date) year, month(current_date) month,
day(current_date) day,hour(current_time) hour,
minute(current_time) minute,second(current_time) second;
```

2、用extract函数

```sql
select extract(year from current_date) year,
extract(month from current_date) month,
extract(day from current_date) day,
extract(hour from current_time) hour,
extract(minute from current_time) minute,
extract(second from current_time) second;
```



## 6. 分组函数

### 1. 概念

分组函数可以对行集进行操作，并且为每组给出一个结果。可以是整个表，也可以是由表分割成的组

> AVG:列或表达式的平均值，适用于数值数据类型。
> COUNT：取得总计行数。
> MAX：列或表达式的最大值，适用于任何数据类型。
> MIN：列或表达式的最小值，适用于任何数据类型。
> STDDEV：取得列或表达式的标准方差，适用于数值数据类型。当一行数据时返回0。
> SUM：列或表达式的总和，适用于数值数据类型。

### 2. 语法

`select count(*) from hr.employees;`

### 3. 分组函数与空值

1. 分组函数会忽略列中的空值
2. NVL函数可以分组函数包含空值

```sql
SELECT AVG(commission_pct)
FROM hr.employees;
SELECT AVG(NVL(commission_pct, 0))
FROM hr.employees;
```

### 4. 创建数据分组

使用GROUP BY子句进行数据分组

语法：

```sql
SELECT column, group_function(column)
FROM table
[WHERE condition]
[GROUP BY group_by_expression]
[ORDER BY column];
```

> 规则
>
> - 在SELECT子句里出现单个列，在GROUP by子句中也要出现单个列。否则会收到一个错误消息。
> - 使用WHERE子句可以将某些行在分组之前排除在外。
> - 不能在GROUP BY子句中使用列别名。
> - 默认是按升序排序。



### 5. 分组函数常见错误

> 1、SELECT子句里的列表中不是分组函数的任何列或表达式都必须在GROUP BY子句中。
>
> 2、不能使用WHERE子句来限制组及分组函数
>
> 3、可以使用HAVING子句来限制组。

```sql
--错误的SQL
--SELECT department_id, AVG(salary)
--FROM hr.employees
--WHERE AVG(salary) > 8000
--GROUP BY department_id;
--正确的SQL
SELECT department_id, AVG(salary)
FROM hr.employees
GROUP BY department_id
HAVING AVG(salary)> 8000;
```



### 6. 排除分组结果 HAVING

可以对分组后的数据进行进一步过滤

语法：

```sql
SELECT column, group_function
FROM table
[WHERE condition]
[GROUP BY group_by_expression]
[HAVING group_condition]
[ORDER BY column];
```

规则：

> having对行进行分组。
> having子句限制的是组，而不是行。where子句限制的是行。



## 7. 子查询

语法：

```sql
SELECT select_list
FROM table
WHERE expr operator (SELECT select_list
                     FROM table);
```

单行子查询、多行子查询

注意：

> 如果子查询的结果中出现空值，不要使用NOT IN运算符，应使用IN运算符。



## 8. 集合

### 1. UNION 并集

查询表EMPLOYEES表中10部门和20部门的员工信息。

```sql
select * from hr.EMPLOYEES where DEPARTMENT_ID = 10
UNION
select * from hr.EMPLOYEES where DEPARTMENT_ID = 20;
```

> 规则
>
> - **各个集合必须有相同的列数且类型一致。**
> - **生成的结果集将采用第一个集合的表头作为最终的表头，order by必须放在整个集合后。**



### 2. INTERSECT 交集

> 规则
>
> - 在查询中被 SELECT 语句选择的列数和数据类型必须与在查询中所使用的所有的 SELTCT 语句中的一样，但列的名字不必一样。
> - 相交的表的倒序排序不改变结果。
> - 相交不忽略空值。



### 3. MINUS 补集

使用 MINUS运算符返回第一个查询行与第二个查询不相同的行。

> 规则
>
> - 在查询中被SELECT语句选择的列数和数据类型必须与在查询中所使用的所有的SELTCT语句中的一样，但列的名字不必一样。
> - 对于MINUS运算，在WHERE子句中所有的列都必须在SELECT子句中。



## 9. 数据操纵

即数据库增删改

### 1. DML-INSERT 单行

语法：

```sql
INSERT INTO table [(column [, column...])]
VALUES (value [, value...]);
```



### 2.DML-INSERT 多行

> 1、使用子查询的INSERT语句可以一次新增多行。
> 2、不能使用VALUES子句。
> 3、使INSERT子句中的列数与子查询中的列数匹配。

### 3. DML-UPDATE

语法：

```sql
UPDATE table
SET column= value[, column = value, ...]
[WHERE  condition];
```

### 4. DML-DELECT

语法：

```sql
DELETE [FROM] table
[WHERE condition];

注：如果没有删除任何行，则会返回“0 rows deleteed.”
```

### 5. DML-MERGE 合并

### 6. 数据库事务处理

> 1、事务处理由以下组成：
>
> 对数据进行一次一致更改的DML语句
> 一条DDL（数据定义语言）语句
> 一条DCL（数据控制语言）语句
> 2、事务如何开始？
>
> 在执行第一个DML SQL语句时开始
> 在发生下列事件之一时结束：
>
> 发出COMMIT或ROLLBACK
> 执行DDL或DCL语句（自动提交）
> 系统崩溃
> 3、优点
>
> 确保数据的一致性
> 在使更改生效之前可预览更改的数据
> 按逻辑关系对相关操作进行分组

### 7. 控制事务处理

> 1、可以用COMMIT、SAVEPOINT和ROLLBACK语句控制事务处理逻辑。
>
> - **COMMIT**：将所有待定的数据更改永久化，从而结束当前的事务处理。
> - **SAVEPOINT name**：在当前事务处理中标记一个保存点。
> - **ROLLBACK**：将放弃所有的数据更改，从而结束当前的事务处理
> - **ROLLBACK TO SAVEPOINT name**：将当前的事务处理回退到指定的保存点，从而放弃从该保存点之后所作的所有更改或创建的保存点。如果省略了TO SAVEPOINT子句，ROLLBACK语句将回退整个事务处理。



## 10. 创建表

### 1. 创建表

语法：

```sql
CREATE TABLE [schema.]table
(column datatype[DEFAULT expr][, ...]);
```

### 2. 子查询创建表

语法：

```sql
CREATE TABLE table [(column, column...)]
AS subquery;
```

> - 使指定列的数量与子查询列数匹配。
> - 定义具有列名和默认值的列
> - 规则：
>   - **可在创建表时指定具体的列名，子查询的结果将插入到该表中。**
>   - **列定义只能包含列名和默认值**
>   - **如果已经给出列的规格，则列数必须等于子查询SELECT列表中的列数**
>   - **如果没有给出列的规格，则表的列名称将和子查询的列名相同。**
>   - **完整性的规则不会传递到新表中，只有列数据类型定义会被传递。**

```sql
--子查询创建表
CREATE TABLE hr.dept80 as SELECT employee_id, last_name, 
salary*12 ANNSAL, 
hire_date
FROM hr.employees
WHERE department_id = 80;
```

### 3. ALTER TABLE

> 作用：
>
> - 添加新列
> - 修改现有列
> - 为新列定义默认值
> - 删除列

> 语法：
>
> 

语法：

```sql
ALTER TABLE table
ADD (column datatype [DEFAULT expr]
[, column datatype]...);

H2语法:
ALTER TABLE table ALTER COLUMN columnName (column datatype [DEFAULT expr]

[, column datatype]...);

Oracle语法:
ALTER TABLE table
MODIFY (column datatype [DEFAULT expr]
[, column datatype]...);

ALTER TABLE table
DROP (column);
```

### 4. 删除表

```sql
DROP TABLE tablename;
```



## 11. 约束

### 1. 表约束

> 1、约束会在表级别上强制执行规则。
> 2、约束可以防止在存在相关性时删除表。
> 3、约束的类型如下：
>
> - NOT NULL：指定该列不能为空值。
> - UNIQUE：指明一个列或列组合中的值对于表中的所有行必须唯一。
> - PRIMARY KEY：唯一标识表中的第一行。
> - FOREIGN KEY：在列和被引用表的列之间建立并实施一个外键关系。
> - CHECK：指定条件必须为真。
>
> 4、规则
>
> - 可以给约束命名或系统自动产生。
> - 可以在创建表的同时创建约束或在表创建之后创建约束。
> - 可以在列或表级别上定义约束。

### 2. 创建约束

```sql
CREATE TABLE [schema.]table
(column datatype[DEFAULT expr]
[column_constraint],
...
[table_constraint][,...]);

column_constraint：列级定义的约束 

table_constraint：表级定义的约束
```

### 3. 添加、删除约束

```sql
ALTER TABLE table
ADD [CONSTRAINT constraint] type (column);

ALTER TABLE table 
DROP constraintname | primary key;
```



## 12. 视图

### 1. 概念

通过创建表的视图可以显示数据的逻辑子集或组合。

> 视图的优点：
>
> - 视图能够选择性地显示表中的行，因而可以限制对数据的访问。
> - 视图可以用来进行简单的查询，从而检索复杂查询的结果。如用户可以通过视图查询多个表中的信息，而无需了解如何编写多表联结语句。
> - 视图可以提供数据独立性。
> - 可提供相同数据的不同视图。

> 视图分类：简单视图和复杂视图
>
> - 简单视图特点：
>   - 只从一个表中获取数据。
>   - 不包含函数或分组。
>   - 可以通过该视图执行DML操作。
> - 复杂视图特点：
>   - 从多个表中获取数据。
>   - 包含函数或分组
>   - 不一定能通过该视图执行DML操作。

### 2. 创建视图

语法：

```sql
CREATE [OR REPLACE] [FORCE|NOFORCE] VIEW view
[(alias[, alias]...)]
AS subquery
[WITH CHECK OPTION [CONSTRAINT constraint]] (ORACLE语法)
[WITH READ ONLY [CONSTRAINT constraint]](ORACLE语法)；
```

> 规则
>
> - 视图的子查询可以包含复杂的SELECT语法，包括联结、分组和子查询。
> - 视图的子查询不能包含ORDER BY子句。ORDER BY是在从视图中检索数据时指定的。
> - 可以使用OR REPLACE选项更改视图定义，而不必先删除再重新创建它。

### 3. 删除视图

语法：

```sql
DROP VIEW view;
```

### 4. 执行排序Top-N分析

> 排序Top-N查询结构：
>
> - 子查询用于生成排序的数据列表。子查询可以包含ORDER BY子句。
> - 外部查询，用于限制最终结果集的行数。条件包括
>   - ROWNUM伪例，为子查询返回的每一行指定一个顺序值，值从1开始
>   - WHERE子句，指定返回n行。使用<或<=运算符

语法：

```sql
SELECT [column_list], ROWNUM 
FROM (SELECT [column_list] 
      FROM table
       ORDER BY Top-N_column)
WHERE ROWNUM <= N;
```

## 13. 索引

### 1. 概念

> 索引的特点：
>
> - 索引是一个数据库里的对象。
>
> - 可以通过访问快速路径访问方法来快速查找数据，从而减少磁盘I/O操作
>
> - 与它索引的表无关
>
>   **注：当删除表时，相关的索引也会被删除。**

### 2. 创建索引

1. 自动创建

   > 如果在表定义中定义了PRIMARY KEY或UNIQUE约束，则系统会自动创建一个唯一索引。

1. 手动创建

   > 用户可以在列上创建非唯一的索引，以加速对行的访问。

**建议：为联结创建一个FOREIGN KEY的列创建索引，以提高检索速度。**

语法：

```sql
//可在一个或多个列上创建索引
CREATE INDEX index
ON table(column[, column]...);
```

### 3. 什么情况下要创建索引

> 1、在以下情况，应该创建索引：
>
> - 列包含较大范围的值。
> - 列包含大量空值。
> - 在WHERE子句或联结条件中频繁使用一个或多个列。
> - 表相当大，但是预计多数的查询检索的行不到总行数的2%-4%。
>
> 2、在以下情况，通常不值得创建索引：
>
> - 表比较小。
> - 在查询中不经常使用列作为条件。
> - 预计多数查询检索的行要超过表中总行数的2%-4%。
> - 表更新比较频繁。
> - 被索引的列将作为表达式的一部分进行引用。

### 4.  删除索引

```sql
DROP INDEX index;
```



## 14. 序列

### 1. 概念

相当于MySQL中设置的自增

> 序列具有以下特性：
>
> - 自动生成唯一编号。
> - 是一个可共享的对象。
> - 通常用于创建主键值。
> - 如果将序列高速缓存到内存中，则可以提高访问序列值的效率。

### 2. 创建序列

语法：

```sql
CREATE SEQUENCE sequence
[INCREMENT BY n]
[START WITH n]
[{MAXVALUE n | NOMAXVALUE}]
[{MINVALUE n | NOMINVALUE}]
[{CYCLE | NOCYCLE}]
[{CACHE n | NOCACHE}];
```

- `sequence`： 为新创建的序列名，必须指定，后续其它子句都是可选的。
- `INCREMENT BY n` ：
  指定所生成序列号之间的间隔为n，默认为1。如果n为负数，则为降序。
- `START WITH n`：指定其生成的第一个序列号为n，默认为从1开始。
- `MAXVALUE n| NOMAXVALUE`：指定序列能生成的最大值为n，默认为NOMAXVALUE、即没有最大值限制。
- `MINVALUE n| NOMINVALUE`：指定最小序列值为n，默认为`NOMINVALUE`、即没有最小值限制。
- `CYCLE | NOCYCLE`：序列在达到它的最大值/最小值限制之后，是否继续从起始值开始循环生成，默认为`NOCYCLE`。
- `CACHE n| NOCACHE`：是否对该序列进行缓存处理，默认为缓存20个序列号，`NOCACHE`为不缓存。

### 3. 使用序列

1、NEXTVAL和CURRVAL

- NEXTVAL返回下一个可用的序列值。每次被引用时它都会返回一个唯一值。即使对于不同用户也是。
- CURRVAL会获得当前序列值。
- 必须对该序列发出NEXTVAL,然后CURRVAL才能有值。

2、使用

```sql
sequence_name.NEXTVAL;
sequence_name.CURRVAL;
当事务发生回退、系统崩溃、其它表中使用了序列都会让序列出现间断。
```

可使用的场合：

- 不属于子查询一部分的SELECT语句的SELECT列表
- INSERT的子查询列表或VALUES子句
- UPDATE的SET子句

不使用的场合：

- 视图的SELECT列表
- 带有DISTINCT关键字的SELECT语句
- 带有GROUP BY、HAVING或ORDER BY子句的SELECT语句
- SELECT、DELETE或UPDATE语句中的子查询
- CREATE TABLE或ALTER TABLE中的DEFAULT表达式。

### 4. 修改序列

语法：

```sql
ALTER SEQUENCE sequence
[INCREMENT BY n]
[{MAXVALUE n | NOMAXVALUE}]
[{MINVALUE n | NOMINVALUE}]
[{CYCLE | NOCYCLE}]
[{CACHE n | NOCACHE}];
```

修改序列的规则

- 修改只会影响以后生成的序列号。
- 如果要从不同的序号处重新开始，则必须删除原有的序列然后重新创建。

### 5. 删除序列

```sql
DROP SEQUENCE sequence_name;
```