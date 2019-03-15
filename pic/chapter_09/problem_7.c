#include <stdio.h>

void insertString(char source[], char text[], int index)
{
    int i, lens = 0, lent = 0;

    for (i = 0; source[i] != '\0'; ++i);
    lens = i;

    for (i = 0; text[i] != '\0'; ++i);
    lent = i;

    for (i = lens; i >= index; --i)
        source[i + lent] = source[i];
    
    for (i = index; i < index + lent; ++i)
        source[i] = text[i - index];
}

int main(void)
{
    char source[] = "the wrong son";
    char text[] = "per";
    int index = 10;
    void insertString(char source[], char text[], int);

    insertString(source, text, index);

    printf ("%s\n", source);

    return 0;
}