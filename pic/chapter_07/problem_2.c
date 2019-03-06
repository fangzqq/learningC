// 此函数计算第 n 个三角数

#include <stdio.h>

int calculateTriangularNumber(int n)
{
    int i, triangularNumber = 0;

    for (i = 1; i <= n; ++i)
        triangularNumber += i;
    
    printf("Triangular number %i is %i\n", n, triangularNumber);

    return triangularNumber;
}


int main (void)
{
    int n, number, triangularNumber, counter;
    int calulateTriangularNumber (int);

    for (counter = 1; counter <= 5; ++counter) {
        printf("what triangular number do you want? ");
        scanf("%i", &number);

        triangularNumber = calculateTriangularNumber(number);
        
        printf("Trianglar number %i is %i\n\n", number, triangularNumber);
    }

    return 0;
}