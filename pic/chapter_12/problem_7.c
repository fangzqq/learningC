#include <stdio.h>

#define IS_UPPER_CASE(c)    ( ((c) >= 'A') && ((c) <= 'Z') )
#define IS_LOWER_CASE(x)    ( ((x) >= 'a') && ((x) <= 'z') )
#define IS_ALPHABETIC(z)    ( IS_UPPER_CASE(z) || IS_LOWER_CASE(z))

int main(void)
{
    printf("A is alphabetic: %i\n", IS_ALPHABETIC('A'));
    printf("z is alphabetic: %i\n", IS_ALPHABETIC('z'));
    printf("1 is alphabetic: %i\n", IS_ALPHABETIC('1'));

    return 0;
}