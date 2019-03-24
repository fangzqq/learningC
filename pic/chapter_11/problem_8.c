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

void bitpat_set(unsigned int *source, unsigned int value, int number, int bits)
{
    int intSize, sourceSize, int_size(void), number_size(unsigned int);
    unsigned int head, tail;

    intSize = int_size();
    sourceSize = number_size(*source);

    head = *source >> (sourceSize - number);

    tail = *source << (intSize - sourceSize + number + bits);
    tail >>= (intSize - sourceSize + number + bits);
    
     *source = (head << bits) | value;
     *source = (*source << (sourceSize - number - bits)) | tail;
}

int main(void)
{
    unsigned int w1 = 0xe1f4, w2 = 0x5;
    void bitpat_set(unsigned int *, unsigned int, int, int);

    bitpat_set(&w1, 0, 8, 1);
    printf("%x\n", w1);

    bitpat_set(&w2, 1, 1, 1);
    printf("%x\n", w2);

    return 0;
}