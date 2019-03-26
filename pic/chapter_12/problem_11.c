#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("A is upper case %i\n", isupper('A'));
    printf("z is upper case %i\n", isupper('z'));
    printf("a is alpha %i\n", isalpha('a'));
    printf("1 is alpha %i\n", isalpha('1'));
    printf("1 is digit %i\n", isdigit('1'));
    printf("z is digit %i\n", isdigit('z'));

    return 0;
}