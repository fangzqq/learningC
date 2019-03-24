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

int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
    int index, intSize, sourceSize, int_size(void), number_size(unsigned int);

    intSize = int_size();
    sourceSize = number_size(source);
    
    pattern = pattern << (intSize - n);
    pattern >>= (intSize - n);
    source = source << (intSize - sourceSize);

    printf("%x  ", pattern);
    printf("%x\n", source);

    for(index = 0; index <= sourceSize; ++index) 
        if ((pattern ^ (source >> (intSize - n))) == 0)
            return index;
        else 
            source <<= 1;
    
    return -1;
}

int main(void)
{
    unsigned int w1 = 0xe1f4, w2 = 0x5;
    int bitpat_search(unsigned int, unsigned int, int);

    printf("%i\n", bitpat_search(w1, w2, 3));
    printf("%i\n", bitpat_search(w1, 0x1f, 5));

    return 0;
}