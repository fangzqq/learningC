#include <stdio.h>

long int arraySum(int array[], int n)
{
    int i;
    long int sum = 0l;

    for (i = 0; i < n; ++i)
        sum += array[i];
    
    return sum;
}