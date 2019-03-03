#include <stdio.h>

int main(void)
{
    int n, sum = 0;
    long int number;

    printf("what is your number?\n");
    scanf("%li", &number);

    do {
        sum += number % 10;
        number /= 10;
    } while (number != 0);

    printf("sum is %i\n", sum);
    
    return 0;
}