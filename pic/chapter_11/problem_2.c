#include <stdio.h>

void typeOfRightShift(void)
{
    int  a = -1;

    if (a >> 1 > 0)
        printf("logical right shift.\n");
    else 
        printf("arithemetic right shift.\n");
}

int main(void)
{
    void typeOfRightShift(void);

    typeOfRightShift();

    return 0;
}