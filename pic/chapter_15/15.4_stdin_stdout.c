// 此程序将回显字符，直到文件末尾

#include <stdio.h>

int main(void)
{
    int c;

    while ( (c = getchar()) != EOF)
        putchar(c);
    
    return 0;
}