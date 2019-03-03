// 此程序生成质数表

#include <stdio.h>
# include <stdbool.h>

int main(void)
{
    int p, d;
    bool isPrime;

    for (p = 2; p <= 50; ++p) {
        if ( (p % 2 == 0) && p != 2)
            continue;
        
        isPrime = true;
        for( d = 3; d < p; d += 2)
            if (p % d == 0) {
                isPrime = false;
                break;
            }

        if (isPrime)
            printf("%i ", p);
    }

    printf("\n");
    return 0;
}