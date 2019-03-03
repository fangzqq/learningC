// 此程序介绍 while 语句

#include <stdio.h>

int main (void)
{
    int count = 1;

    while (count <= 5) {
        printf ("%i\n", count);
        ++count;
    }

    return 0;
}