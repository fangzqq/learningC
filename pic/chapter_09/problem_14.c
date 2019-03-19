#include <stdio.h>
#include <stdbool.h>

void intToStr(int value, char text[])
{
    int i, j, reminder;
    char temp;
    bool isNagetive = false;

    if (value < 0) {
        value = - value;
        text[0] = '-';
        i = 1;
        isNagetive = true;
    }
    else {
        i = 0;
    } 
    
    do
    {
        reminder = value % 10;
        value = value / 10;
        text[i] = '0' + reminder;
        ++i;
    } while (value > 0);

    text[i] = '\0';

    if (isNagetive) {
        for (j = 1; j <= i / 2; ++j) {
            temp = text[j];
            text[j] = text[i - j];
            text[i- j] = temp;
        }
    }
    else {
        for (j = 0; j <= i / 2; ++j) {
            temp = text[j];
            text[j] = text[i - 1 - j];
            text[i - 1 - j] = temp;
        }
    }
}

int main(void)
{
    char text[100];
    void intToStr(int, char s[]);
    
    intToStr(100, text);
    printf("the intToStr 100 is %s\n", text);

    intToStr(-10099, text);
    printf("the intToStr -10099 is %s\n", text);

    return 0;
}