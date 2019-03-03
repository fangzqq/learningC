// 此程序对以下形式的表达式进行求值
// 数字 运算符 数字

#include <stdio.h>

int main (void)
{
    float value1, value2;
    char operator;

    printf("Type in your expression.\n");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator)
    {
        case '+':
            printf ("%.2f\n", value1 + value2);
            break;
        case '-':
            printf("%.2f\n", value1 - value2);
            break;
        case '*':
        case 'x':
            printf("%.2f\n", value1 * value2);
            break;
        case '/':
            if (value2 == 0)
                printf("Division by zero.\n");
            else
                printf("%.2f\n", value1 / value2);
            break;
        default:
            printf("Unknown operator.\n");
            break;
    }
    
    return 0;
}