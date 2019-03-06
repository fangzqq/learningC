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

    while ( absoluteValue(guess * guess / x - 1) > epslion)
        guess = (x / guess + guess) / 2;
    
    return guess;
}


int main(void)
{
    float squareRoot (float);
    float a, b, c;
    float delta, result[2];

    printf ("what is your a, b and c?  ");
    scanf ("%f %f %f", &a, &b, &c);

    delta = b * b - 4 * a * c;
    if (delta < 0)
        printf("the roots are complex numbers\n");
    else {
        result[0] = (-b + squareRoot(delta)) / (2 * a);
        result[1] = (-b - squareRoot(delta)) / (2 * a);

        printf("the roots are %f and %f\n", result[0], result[1]);
    }

    return 0;
}