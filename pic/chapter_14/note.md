# 处理大型程序

- 将大型程序分为多个文件
- 将几个文件编译为一个可执行文件
- 使用外部变量
- 扩展头文件的用途
- 用实用工具改建程序

## Dividing Your Program into Multiple Files

incremental compilation technique:

```code
$ gcc –c mod1.c                         Compile mod1.c => mod1.o
$ gcc –c mod2.c                         Compile mod2.c => mod2.o
$ gcc –c main.c                         Compile main.c => main.o
$ gcc mod1.o mod2.o mod3.o –o dbtest    Create executable
```

## Communication Between Modules

you should always make certain to include a prototype declaration so the compiler knows the function’s argument types and the type of the return value.

It’s totally up to you to ensure that the compiler has sufficient information about such things to correctly compile each module.

### External Variables

Functions contained in separate files can communicate through _external variables_.

To reference the value of an external global variable from another module, you must declare the variable to be accessed, preceding the declaration with the keyword extern:

```c
extern int moveNumber
```

When dealing with external variables, the keyword extern can only be omitted in one spot throughout your source files. If you don’t omit the keyword in any one spot, in exactly one place, you must assign the variable an initial value.

When declaring an external array, it is not necessary to give its size. if the external array is multidimensional, all but the first dimension must be specified:

```c
extern char text[];
extern int matrix[][50];
```

### Static Versus Extern Variables and Functions

You want to define a global variable to be local to a particular module (file). This can be accomplished in C by defining the variable to be static:

```c
static int moveNumber = 0;
```

The statement if made outside of any function, makes the value of moveNumber accessible from any subsequent point in the file in which the definition appears, but not from _functions contained in other files_.

You can directly call a function defined in another file. Unlike variables, no special mechanisms are required. When a function is defined, it can be declared to be extern or static, the former case being the default. A static function can be called only from within the same file as the function appears.

```c
static double squareRoot(double x)
{
    ...
}
```

### Using Header Files Effectively
