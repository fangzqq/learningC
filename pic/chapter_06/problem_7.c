# include <stdio.h>

int main(void)
{
    int i, j, r;

    printf("find prime in range?\n");
    scanf("%i", &r);

    int P[r];

    for (i = 2; i < r; ++i)
        P[i] = 0;
    
    for (i = 2; i < r; ++i) {
        if (P[i] == 0) {
            printf("%i ", i);
            for (j = 1; i * j < r; ++j)
                P[i * j] = 1;
        }
    }

    printf("\n");
    return 0;
}