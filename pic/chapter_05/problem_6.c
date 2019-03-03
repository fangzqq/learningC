#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n, number, order, temp;
    bool isPositive;

    printf("what is your number?\n");
    scanf("%i", &number);

    if (number >= 0)
        isPositive = true;
    else {
        isPositive = false;
        number = -number;
    }
    
    order = 1;
    for (temp = number; temp >= 10; temp /= 10)
        order *= 10;
    
    while (order >= 1) {
        n = number / order;
        switch(n) {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("invalid number.");
                break;
        }
        number -= n * order;
        order /= 10;
    }
    
    printf("\n");
    return 0;
}