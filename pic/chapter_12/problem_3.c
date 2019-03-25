#include <stdio.h>

#define MIN(x, y)  ((x) > (y) ? (y) : (x))

int main(void)
{
    printf("the min value of 3, 10 is: %i\n", MIN(3, 10));
    printf("the min value of 3, 10 is: %i\n", MIN(10, 3));

    return 0;
}