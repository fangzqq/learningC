#include <stdio.h>

int main(void)
{
    int i;
    float sum, values[10];

    printf("Enter 10 numbers: \n");

    sum = 0.0;

    for (i = 0; i < 10; ++i) {
        scanf("%f", &values[i]);
        sum += values[i];
    }

    printf("average is %.6f\n", sum / i);

    return 0;
}