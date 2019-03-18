#include <stdio.h>
#include <stdbool.h>

int findString(char source[], char target[])
{
    int i, pos = 0;
    bool found = false, looking = true;

    for (i = 0; source[i] != '\0' && !found; ++i) {
        if (looking) {
            if (source[i] == target[0]) {
                pos = i;
                looking = false;
            }
        }
        else {
            if (target[i - pos] == '\0')
                found = true;
            else if (source[i] != target[i - pos]) {
                if (source[i] != target[0])
                    looking = true;
                else 
                    pos = i;
            }
        }
    }
    
    return found ? pos: -1;
}


int main(void)
{
    char source[] = "a chahtterboxhat";
    char target[] = "hat";
    int findString(char s[], char t[]);
    int index;

    index = findString(source, target);

    if (index < 0)
        printf("not found\n");
    else 
        printf("found in index %i\n", index);
    
    return 0;
}