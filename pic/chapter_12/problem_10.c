#include <stdio.h>

#define printint(n)    printf("%i\n", x ## n)

int main(void)
{
    int i, x1, x2, x3;

    x1 = 10;
    x2 = 20;
    x3 = 30;

    for (i = 1; i < 3; ++i)
        printint(i);    // use of undeclared identifier 'xi'
    
    return 0;
}