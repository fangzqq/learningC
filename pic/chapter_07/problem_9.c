#include <stdio.h>

int gcd(int u, int v)
{
    int temp;

    while (v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm(int u, int v)
{
    int gcd (int, int);

    return u * v / gcd(u, v);
}

int main (void)
{
    int lcm (int, int);
    int result;

    result = lcm (150, 35);
    printf("The lcm of 150 and 35 is %i\n", result);

    result = lcm (1026, 405);
    printf("The lcm of 1026 and 405 is %i\n", result);

    printf("The lcm of 83 and 240 is %i\n", lcm (83, 240));

    return 0;
}