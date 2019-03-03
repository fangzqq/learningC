// 此程序生成前 15 个斐波那契数

#include <stdio.h>

int main(void)
{
    int a, b, c, i;

    a = 0;
    b = 1;

    printf("%i\n%i\n", a, b);

    for (i =2; i < 15; ++i) {
        c = a + b;
        a = b;
        b = c;
        printf ("%i\n", c);
    }

    return 0; 
}