#include <stdio.h>

long int x_to_the_n (int x, int n)
{
    int i;
    long int result = 1l;

    for (i = 1; i <= n; ++i)
        result *= x;
    
    return result;
}

int main (void)
{
    int i;
    long int x_to_the_n (int, int);

    for (i = 1; i < 5; ++i) 
        printf ("the cubic of %i is %li\n", i, x_to_the_n(i, 3));
    
    return 0;
}