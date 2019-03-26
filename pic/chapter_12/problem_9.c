#include <stdio.h>

#define ABSOLUTE_VALUE(x)    ( (x) > 0 ? (x) : (-(x)) )

int main(void)
{
    printf("The absolute value of -5 + 2 is %i\n", ABSOLUTE_VALUE(-5 + 2));

    return 0;
}