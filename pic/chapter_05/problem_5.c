// 此程序颠倒一个数字的数位

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
    int number, right_digit;
    bool isPositive;

    printf("Enter your number.\n");
    scanf("%i", &number);

    if (number >= 0)
        isPositive = true;
    else {
        isPositive = false;
        number = -number;
    }

    do {
        right_digit = number % 10;
        printf("%i", right_digit);
        number = number / 10;
    }
    while (number != 0);

    if (!isPositive)
        printf("%c", '-');
    
    printf ("\n");

    return 0;
}
