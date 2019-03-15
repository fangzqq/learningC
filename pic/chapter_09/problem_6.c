#include <stdio.h>

void removeString(char text[], int index, int number)
{
    int i = 0;

    while (text[index + i + number] != '\0') {
        text[index + i] = text[index + i + number];
        ++i;
    }

    text[index +i] = '\0';
}

int main(void)
{
    char text[] = "the wrong son";
    void removeString(char text[], int, int);

    removeString(text, 4, 6);

    printf("the new string is: %s\n", text);

    return 0;
}