#include <stdio.h>

int main(void)
{
    char operator;
    float number, sum;

    sum = 0.0;
    
    printf("what is your number and operator?\n");

    do {
        scanf("%f %c", &number, &operator);

        switch(operator)
        {
            case 'S':
                sum = number;
                printf("=%.6f\n", sum);
                break;
            case '+':
                sum += number;
                printf("=%.6f\n", sum);
                break;
            case '-':
                sum -= number;
                printf("=%.6f\n", sum);
                break;
            case '*':
                sum *= number;
                printf("=%.6f\n", sum);
                break;
            case '/':
                if ((int) number == 0)
                    printf("Division by zero!\n");
                else
                    sum /= number;
                    printf("=%.6f\n", sum);
                break;
            case 'E':
                printf("=%.6f\n", sum);
                break;
            default:
                printf("Unknown operator.\n");
                break;
        }
    } while (operator != 'E');

    printf("over\n");
    return 0;
}