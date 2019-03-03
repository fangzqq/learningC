#include <stdio.h>

int main(void)
{
    int n, triangularNumber;

    printf("TABLES OF TRIANGULAR NUMBERS\n\n");
    printf("n    triangularNumber\n");
    printf("---  ----------------\n");

    for (n = 5; n <= 50; n += 5) {
        triangularNumber = n * (n + 1) / 2;
        printf("%2i    %i\n", n, triangularNumber);
    }
    
    return 0;
}