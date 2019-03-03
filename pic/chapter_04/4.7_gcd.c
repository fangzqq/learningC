// 此程序求两个非负整数值的最大公约数

#include <stdio.h>

int main (void)
{
    int u, v, temp;

    printf ("Please type in tow nonnegative integers. \n");
    scanf ("%i%i", &u, &v);

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    printf("Their greatest common divisor is %i\n", u);
    
    return 0;
}
