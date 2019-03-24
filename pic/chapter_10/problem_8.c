#include <stdio.h>

void sort3(int *a, int *b, int *c)
{
    int temp;
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }

    if (*b > *c)
        if (*a > *c) {
            // a c
            temp = *a;
            *a = *c;
            *c = temp;
            // b c
            temp = *b;
            *b = *c;
            *c = temp;
        }
        else {
            temp = *b;
            *b = *c;
            *c = temp;
        }
}

int main(void)
{
    int a, b, c;
    void sort3(int *, int *, int *);

    printf("please input 3 int: ");
    scanf("%i %i %i", &a, &b, &c);

    sort3(&a, &b, &c);

    printf("\n%i %i %i\n", a, b, c);

    return 0;

}