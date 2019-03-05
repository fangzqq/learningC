// 此函数找出一个数组中的最小值

#include <stdio.h>

int minimum (int values[10])
{
    int minValue, i;

    minValue = values[1];

    for (i = 1; i < 10; ++i)
        if ( values[i] < minValue)
            minValue = values[i];
    
    return minValue;
}

int main (void)
{
    int scores[10], i, minScore;
    int minimum (int values[10]);

    printf("Enter 10 scores\n");

    for (i = 0; i < 10; ++i)
        scanf("%i", &scores[i]);
    
    minScore = minimum(scores);
    printf("\nMinimun score is %i\n", minScore);

    return 0;
}