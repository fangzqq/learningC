# include <stdio.h>
#include <stdbool.h>


int findString(char source[], char target[])
{
    int i, j, length;
    bool found = false;

    for (i = 0; target[i] != '\0'; ++i);
    length = i;

    for (i = 0; source[i + length - 1] != '\0' && !found; ++i) {
        for (j = 0; j < length; ++j) 
            if (target[j] != source[i + j]) break;
        
        if (j == length) found = true;
    }
    
    return found ? i - 1: -1;
}


void removeString(char text[], int index, int number)
{
    int i = 0;

    while (text[index + i + number] != '\0') {
        text[index + i] = text[index + i + number];
        ++i;
    }

    text[index +i] = '\0';
}


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


void replaceString(char source[], char text[], char r[])
{
    int i, index, length;
    int findString(char s1[], char s2[]);
    void removeString(char s1[], int index, int number);

    index = findString(source, text);
    
    if (index < 0) {
        printf("not found");
        return;
    }

    for (i = 0; text[i] != '\0'; ++i);
    length = i ;

    removeString(source, index, length);
    insertString(source, r, index);

}

int main (void)
{
    char source[100] = "abc1def";
    char text[] = "one";
    void replaceString(char s1[], char s2[], char s3[]);

    replaceString(source, "1", text);

    printf("the replaced source is %s\n", source);

    return 0;
}