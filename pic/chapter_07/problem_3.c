// 此函数计算一个数字的平方根

#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return x;
}

float squareRoot (float x, float epslion)
{
    float guess = 1;

    while ( absoluteValue(guess * guess - x) > epslion)
        guess = (x / guess + guess) / 2;
    
    return guess;
}

int main(void)
{
    float squareRoot(float x, float epslion);

    printf("squareRoot (2.0) = %f\n", squareRoot(2.0, 0.1));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0, 1));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5, 2));

    return 0;
}