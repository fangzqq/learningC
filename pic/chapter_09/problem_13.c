#include <stdio.h>

void uppercase(char text[])
{
    int i;

    for (i = 0; text[i] != '\0'; ++i)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 'a' + 'A';
}

int main(void)
{
    char text[50] = "Text, tell me\n";

    uppercase(text);

    printf("the upper is %s", text);

    return 0;
}