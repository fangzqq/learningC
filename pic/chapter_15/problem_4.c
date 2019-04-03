#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    FILE *in, *out;
    int a, b, n=120;
    char inName[64], outName[64], buffer[n-1];
    bool endin = false, endout = false;

    printf("Enter the file name to be copied: ");
    scanf("%63s", inName);
    printf("\nEnter the file name to copy: ");
    scanf("%63s", outName);

    if ( (in = fopen(inName, "r")) == NULL) {
        fprintf(stderr, "failed to open inName file");
        exit(EXIT_FAILURE);
    }
    if ( (out = fopen(outName, "r")) == NULL ) {
        fprintf(stderr, "failed to open outName file");
        exit(EXIT_FAILURE);
    }

    do
    {
        if (fgets(buffer, n, in) != NULL)
            fputs(buffer, stdout);
        else
            endin = true;        
        if (fgets(buffer, n, out) != NULL)
            fputs(buffer, stdout);
        else 
            endout = true;
    }
    while(!endin || !endout);

    fclose(in);
    fclose(out);

    return 0;
}