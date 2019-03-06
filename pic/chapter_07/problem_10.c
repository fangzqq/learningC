#include <stdio.h>
#include <stdbool.h>

int prim(int n)
{
    int i;
    bool isPrime;

    if (n == 1)
        isPrime = false;
    else if (n == 2)
        isPrime = true;
    else if (n % 2 == 0)
        isPrime = false;
    else {
        isPrime = true;
        for (i = 3; i * i <= n && isPrime; i += 2)
            if (n % i == 0)
                isPrime = false;
    }
    
    return isPrime ? 1 : 0; 
}

int main (void)
{
    int x;
    int prim(int);

    printf ("what is your number?\n");
    scanf ("%i", &x);

    if (prim(x))
        printf("this is a prime\n");
    else
        printf("this is not a prime\n");
    
    return 0;
}