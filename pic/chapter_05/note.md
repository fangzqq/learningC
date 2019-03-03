# 做出决策

c 语言提供的决策构造：

- if 语句
- switch 语句
- 条件运算符

## if 语句

```code
if (表达式)
    程序语句
```

### if 语句的扩展

```code
if (表达式)
    程序语句 1
else
    程序语句 2
```

```code
if (表达式1)
    程序语句1
else if (表达式2)
    程序语句2
else
    程序语句3
```

## switch 语句

switch 语句的一般形式：

```code
switch (表达式)
{
    case value1:
        程序语句1
        break;
    case value2:
        程序语句2
        break;
    case valuen:
        程序语句n
        break;
    default:
        程序语句
        break;
}
```

不同的 case 后不能跟着相同的值，但是可以为一组特定程序语句关联多个值。

## 条件运算符

条件运算符的一般形式：

```code
条件 ? 表达式1 : 表达式2
```

条件运算符的优先级非常低，低于除赋值运算符和逗号运算符之外的所有运算符。
条件运算符是自右向左结合的。
