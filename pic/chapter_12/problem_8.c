#include <stdio.h>

#define IS_UPPER_CASE(c)    ( ((c) >= 'A') && ((c) <= 'Z') )
#define IS_LOWER_CASE(x)    ( ((x) >= 'a') && ((x) <= 'z') )
#define IS_ALPHABETIC(z)    ( IS_UPPER_CASE(z) || IS_LOWER_CASE(z))

#define IS_DIGIT(c)    ( ((c) >= '0') && ((c) <= '9') )

#define IS_SPECIAL(y)   ( !IS_DIGIT(y) && !IS_ALPHABETIC(y) )

int main(void)
{
    printf("A is digit: %i\n", IS_DIGIT('A'));
    printf("1 is digit: %i\n", IS_DIGIT('1'));
    printf("z is special: %i\n", IS_SPECIAL('z'));
    printf("@ is special: %i\n", IS_SPECIAL('@'));

    return 0;
}