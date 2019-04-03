# c 语言中的输入与输出操作

C 语言中的所有 I/O 操作都是通过函数调用完成的。

- 用 `putchar()` 和 `getchar()` 完成基本 I/O
- 用标志和修饰符最大发挥 `printf()` 和 `scanf()` 的用途
- 将输入和输出重定向到文件
- 使用文件函数和指针

## 格式化 I/O

### printf

`%07` 被用于以右对齐方式显示 i 的值，字段宽度为七个字符，0 标志指明要补零；`%.。

i`，将 i 的值显示为最少七位。

`%f` 和 `%e` 格式默认显示六位小数。一般情况下，`%g` 是显示浮点数的最佳格式。

`printf("%.*f\n", accuracy, d)`，这个特性非常适合于动态改变显示格式。

任何整数格式规格都可用来显示字符。

### scanf

<<<<<<< HEAD
As with `printf()`, `scanf()` takes optional modifiers between the % and the conversion character.

When the `scanf()` function searches the input stream for a value to be read, it always bypasses any leading so-called whitespace characters, where whitespace refers to either a blank space, horizontal tab ('\t'), vertical tab ('\v'), carriage return ('\r'), newline ('\n'), or form-feed character ('\f').

=======
可以通过检测 scanf 函数返回的数值来判断输入中是否存在错误：

```c
if ( scanf("%i %f %i", &i, &f, &l) != 3)
    printf("Error on input\n");
```

## 文件输入与输出操作

重定向程序的输入和（或）输出到文件。

I/O 重定向并不是 C 语言 ANSI 定义的实际组成部分。

### 文件尾

在从文件中读取最后一段数据时，就存在文件尾条件。标准 I/O 库中的大多数函数都会返回一个特殊标志，表示程序已经到达了文件末尾。这个标志的值等于一个特殊名字 `EOF`，它在标准 I/O 包含文件 `<stdio.h>` 中定义。

始终要记住将 `getchar()` 的结果存储在一个 int 中，以便能够正确地检测文件尾条件。

## 处理文件的特殊函数

### fopen 函数

打开文件时的模式：

- 读模式, "r"
- 写模式, "w"
- 追加模式, "a"
- 更新模式，"r+", "w+", "a+"

读模式时，如果指定的文件不存在，将报错；其余两种模式时，若指定的文件不存在，则将自动创建该文件。

在程序中，通过文件指针来识别不同的文件。
`fopen()` 函数可以打开系统中的一个文件，并返回一个独一无二的文件指针。若文件未能打开，函数将返回 `NULL` 值（在头文件 `<stdio.h>` 中定义）。

`<stdio.h>` 中还定义了一种名为 `FILE` 的类型：

```c
#include <stdio.h>

FILE *inputFile;

inputFile = fopen("data", "r");

if (inpitFile == NULL)
    printf("*** data could not be opend.\n");
else
    // 从文件中读取数据
```

要读写二进制文件时，必须在模式字符串的末尾添加一个 `b`

### getc() 和 putc() 函数

getc() 接受一个 FILE 指针作为参数，从文件中读取单个字符，在到达文件尾时返回 EOF 值。
putc() 接受两个参数：要写到文件中的字符和 FILE 指针。

### fclose() 函数

fclose() 函数的参数是要关闭文件的 FILE 指针。

### feof() 函数

feof() 函数的参数是一个 FILE 指针。如果未越过文件末尾，则返回 0；在尝试越过一个文件的末尾进行读取时，该函数返回一个非零整数值。

### fprintf() 和 fscanf() 函数

对文件执行类似于 printf() 和 scanf() 函数的操作

### fgets() 和 fputs() 函数

```c
fgets(buffer, n, filePtr):
fputs(buffer, filePtr);
```

`gets()` 和 `puts()` 可分别用于从终端中读取数据行和向终端写入数据行。

### stdin, stdout 和 stderr

### exit() 函数

要明确终止一个程序，无论是从哪里执行该程序的，都可以调用 `exit()` 函数：

```c
exit(n);
```

所有已打开文件都会被系统自动关闭，整数值 n 被称为退出状态。

### 重命名和删除文件

库中的 `rename()` 函数可用于改变一个文件的名字，若重命名失败将返回一个非零值

```c
if ( rename("tempfile", "database")) {
    fprintf(stderr, "Can't rename tempfile\n");
    exit(EXIT_FAILURE);
}
```

`remove()` 函数可用于删除其参数指定的文件，若删除失败将返回一个非零值

```c
if ( remove("tempfile"))
{
    fprintf(stderr, "Can't remove tempfile\n");
    exit(EXIT_FAILURE);
}
```
>>>>>>> ad4c48e5c0e6d88dc868afb02b9591dc7e298abf
