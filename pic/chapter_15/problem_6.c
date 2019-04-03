#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    FILE *in;
    int i, n=120;
    char inName[64], buffer[n-1], c[2];
    bool end = false;

    printf("Enter the file name to be copied: ");
    scanf("%63s", inName);

    if ( (in = fopen(inName, "r")) == NULL) {
        fprintf(stderr, "failed to open inName file");
        exit(EXIT_FAILURE);
    }

    while(!end)
    {

        for (i = 0; i < 20 && !end; ++i)
            if (fgets(buffer, n, in) != NULL)
                fputs(buffer, stdout);
            else
                end = true;
        if (!end) {
            printf("\nplease input a character: ");
            scanf("%s", c);
            if (c[0] == 'q')
                end = true;
        }
    }

    fclose(in);

    return 0;
}