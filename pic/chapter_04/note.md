# 程序循环

c 语言中用来处理循环的构造：

- for 语句
- while 语句
- do 语句
- break 语句
- continue 语句

## for 语句

for 语句的一般格式如下：

```code
for (初始表达式; 循环条件; 循环表达式)
    程序语句
```

循环条件是在进入循环体时立即评估的，这时还从来没有执行过循环体。

### for 循环的变体

#### 多个表达式

```code
for(i = 0, j = 0; i < 10; i++)
    ...
```

```code
for (i = 0, j = 100; i < 10; ++i, j = j - 10)
    ...
```

#### 省略字段

```code
for( ; j != 100; ++j)
    ...
```

#### 声明变量

```code
for (int counter = 1; counter <= 5; ++counter)
    ...
```

此时变量 counter 只有在执行 for 循环期间是可知的， 无法在循环外部访问。

## while 语句

while 语句的语法如下：

```code
while (表达式)
    程序语句
```

for 语句可以等价地表示为 while 语句形式：

```code
初始表达式；
while (循环条件)
    程序语句
    循环表达式;
```

## do 语句

for 语句 和 while 语句都是在执行循环之前进行条件测试，有时可能希望在循环的末尾而不是开头进行测试，这时就可以使用 do 语句：

```code
do
    程序语句
while (循环表达式)
```

## break 语句

执行 break 语句会使程序立即退出正在执行的循环：

```c
break;
```

## continue 语句

执行 continue 语句会导致其所在循环的下一轮执行，循环中出现在 continue 语句后的语句会被自动跳过：

```c
continue;
```
