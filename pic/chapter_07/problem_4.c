// 此函数计算一个数字的平方根

#include <stdio.h>

float absoluteValue (float x)
{
    if (x < 0)
        x = -x;
    
    return x;
}

float squareRoot (float x)
{
    const float epslion = 0.00001;
    float guess = 1;

    while ( absoluteValue(guess * guess - x) > epslion) {
        guess = (x / guess + guess) / 2;
        
        printf("guess is %f\n", guess);
    }
    
    return guess;
}

int main(void)
{
    printf("squareRoot (2.0) = %f\n", squareRoot(2.0));
    printf("squareRoot (144.0) = %f\n", squareRoot(144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot(17.5));

    return 0;
}