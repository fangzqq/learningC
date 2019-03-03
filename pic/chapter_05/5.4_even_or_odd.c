// 此程序判断一个数字是偶数还是奇数

#include <stdio.h>

int main (void)
{
    int number_to_test, remainder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);

    remainder = number_to_test % 2;

    if (remainder == 0)
        printf("The number is even.\n");
    else
        printf("The number is odd.\n");
    
    printf("The remainder is: %i\n", remainder);
    
    return 0;
}