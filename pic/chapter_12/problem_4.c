#include <stdio.h>

#define MAX3(a, b, c) ((a) > (b) ? \
    ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main(void)
{
    printf("the max of 3, 4, 5 is %i\n", MAX3(3, 4, 5));
    printf("the max of 9, 6, 7 is %i\n", MAX3(9, 6, 7));

    return 0;
}