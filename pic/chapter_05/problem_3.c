#include <stdio.h>

int main(void)
{
    int u, v;
    float r;

    printf("Enter your two numbers\n");
    scanf("%i %i", &u, &v);

    if (v == 0)
        printf("Divide by zero\n");
    else
    {
        r = (float) u / v;
        printf("%.3f\n", r);
    }
    
    return 0;
}