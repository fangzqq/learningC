// function to convert a string to a float

#include <stdio.h>
#include <stdbool.h>


float strToFloat(const char string[])
{
    int i, j, k, start;
    float result = 0.0, fraction = 0.0, floatValue;
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
        floatValue = string[i] - '0';
        result = result * 10 + floatValue;
    }

    if(string[i] == '.')
        for(j = i + 1; string[j] >= '0' && string[j] <= '9'; ++j) {
            floatValue = string[j] - '0';
            for (k = j - i; k > 0; --k)
                floatValue /= 10.;
            fraction += floatValue;
        }

    if (isNegative)
        result = - (result + fraction);
    else 
        result = result + fraction;

    return result;
}


int main(void)
{
    float strToFloat (const char string[]);

    printf("%f\n", strToFloat("245"));
    printf("%f\n", strToFloat("100") + 5);
    printf("%f\n", strToFloat("13x5"));
    printf("%f\n", strToFloat("-1.35"));

    return 0;
}