// 此函数计算一个数字的平方根

#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return x;
}

double squareRoot (double x)
{
    const double epslion = 0.00001;
    double guess = 1.0;

    while ( absoluteValue(guess * guess - x) > epslion)
        guess = (x / guess + guess) / 2;
    
    return guess;
}

int main(void)
{
    printf("squareRoot (2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5));

    return 0;
}