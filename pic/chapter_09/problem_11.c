// function to convert a string to an integer

#include <stdio.h>
#include <stdbool.h>


int strToInt(const char string[])
{
    int i, start, intValue, result = 0;
    bool isNegative;

    if (string[0] == '-') {
        isNegative = true;
        start = 1;
    }
    else {
        isNegative = false;
        start = 0;
    }

    for (i = start; string[i] >= '0' && string[i] <= '9'; ++i) {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    if (isNegative)
        result = - result;

    return result;
}

int main(void)
{
    int strToInt (const char string[]);

    printf("%i\n", strToInt("245"));
    printf("%i\n", strToInt("100") + 5);
    printf("%i\n", strToInt("13x5"));
    printf("%i\n", strToInt("-13x5"));

    return 0;
}