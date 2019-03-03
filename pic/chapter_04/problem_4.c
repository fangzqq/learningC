#include <stdio.h>

int main(void)
{
    int n, factorial = 1;

    printf("TABLES OF FACTORIAL\n\n");
    printf("n    factorial\n");
    printf("---  ---------\n");

    for (n = 1; n <= 10; ++n) {
        factorial *= n;
        printf("%2i    %i\n", n, factorial);
    }

    return 0;
}