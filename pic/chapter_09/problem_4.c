#include <stdio.h>

void substring(const char source[], int start, int count, char result[])
{
    int i;

    for (i = start; i < start + count && source[i] != '\0'; ++i)
        result[i - start] = source[i];
    
    result[i - start] = '\0';
}


int main(void)
{
    const char source1[] = "character";
    const char source2[] = "two words";
    char result[30];
    void substring(const char source[], int start, int count, char result[]);

    substring(source1, 4, 3, result);
    printf("the substring of %s is %s\n", source1, result);

    substring(source2, 4, 20, result);
    printf("the substring of %s is %s\n", source2, result);

    return 0;
}