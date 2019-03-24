// 此程序将一个整数数组列为递增顺序

#include <stdio.h>

void sort (int *a, int n)
{

    int *i, *j, temp;
    
    for (i = a; i - a < n - 1; ++i)
        for (j = i + 1; j - a < n; ++j) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
}

int main (void)
{
    int i;
    int array[16] = {34, -5, 6, 0, 12, 100, 56, 22, 
                     44, -3, -9, 12, 17, 22, 6, 11 };
    void sort (int *a, int);
    
    printf("The array before the sort:\n");

    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);
    
    sort(array, 16);

    printf("\n\nThe array after the sort:\n");

    for (i = 0; i < 16; ++i)
        printf("%i ", array[i]);
    
    printf("\n");

    return 0;
}