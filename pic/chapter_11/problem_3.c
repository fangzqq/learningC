#include <stdio.h>

int int_size(void)
{
    int n, bits = 0;

    for(n = ~0; n != 0; n <<=1)
        bits += 1;
    
    return bits;
}

int main(void)
{
    int int_size(void);

    printf("the bits is %i\n", int_size());

    return 0;
}