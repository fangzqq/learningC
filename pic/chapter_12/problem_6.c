#include <stdio.h>

#define IS_UPPER_CASE(c)    ((c >= 'A' && c <= 'Z') ? 1 : 0)

int main(void)
{
    printf("A is upper case: %i\n", IS_UPPER_CASE('A'));
    printf("z is upper case: %i\n", IS_UPPER_CASE('z'));

    return 0;
}