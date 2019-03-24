#include <stdio.h>

int main(void)
{
    int i;
    char line[81];
    void readLine (char *buffer);

    for (i = 0; i < 3; ++i)
    {
        readLine(line);
        printf("%s\n\n", line);
    }

    return 0;
}

void readLine(char *buffer)
{
    do
    {
        *buffer++ = getchar();
    }
    while ( *(buffer -1) != '\n');

    *buffer = '\0';
}