#include <stdio.h>

int int_size(void)
{
    int n, size = 0;

    for(n = ~0; n != 0; n <<=1)
        size += 1;
    
    return size;
}

int number_size(unsigned int number)
{
    unsigned int n;
    int size = 0;

    for(n = number; n != 0; n >>=1)
        size += 1;
    
    return size;
}

unsigned int bitpat_get(unsigned int source, int number, int bits)
{
    int intSize, sourceSize, int_size(void), number_size(unsigned int);
    unsigned int result;

    intSize = int_size();
    sourceSize = number_size(source);

    result = source << (intSize - sourceSize + number);
    result >>= (intSize - bits);

    return result;
}

int main(void)
{
    unsigned int w1 = 0xe1f4, w2 = 0x5;
    unsigned int bitpat_get(unsigned int, int, int);

    printf("%x\n", bitpat_get(w1, 0, 4));
    printf("%x\n", bitpat_get(w1, 7, 4));

    return 0;
}