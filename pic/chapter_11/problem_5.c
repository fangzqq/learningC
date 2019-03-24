#include <stdio.h>

int number_size(unsigned int number)
{
    unsigned int n;
    int size = 0;

    for(n = number; n != 0; n >>=1)
        size += 1;
    
    return size;
}

int bit_test(unsigned int number, int n)
{
    int size, number_size(unsigned int);
    unsigned int mask;

    size = number_size(number);

    mask = 1 << (size - n - 1);

    if (number & mask)
        return 1;
    else 
        return 0;
}

unsigned int bit_set(unsigned int number, int n)
{
    int size, number_size(unsigned int);
    unsigned int mask;

    size = number_size(number);

    mask = 1 << (size - n - 1);

    return number | mask;
}

int main(void)
{
    int bit_test(unsigned int, int);
    unsigned int bit_set(unsigned int, int);
    unsigned int w1 = 0xff1u, w2 = 0xeff0u;

    printf("%x, bit test %i\n", w1, bit_test(w1, 0));
    printf("%x, bit test %i\n", w1, bit_test(w1, 8));
    printf("%x bit set %x\n", w2, bit_set(w2, 3));

    return 0;
}