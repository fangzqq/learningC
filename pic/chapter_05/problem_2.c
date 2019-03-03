#include <stdio.h>

int main(void)
{
    int u, v, remainder;

    printf("Enter your two numbers\n");
    scanf("%i %i", &u, &v);

    remainder = u % v;

    if (remainder == 0)
        printf("Ok, fine\n");
    else
        printf("Nope\n");
    
    return 0;
}