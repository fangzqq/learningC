#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *in, *out;
    char inName[64], outName[64];
    int c;

    printf("Enter the file name to be copied: ");
    scanf("%63s", inName);
    printf("\nEnter the file name to copy: ");
    scanf("%63s", outName);

    if ( (in = fopen(inName, "r")) == NULL) {
        fprintf(stderr, "failed to open inName file");
        exit(EXIT_FAILURE);
    }
    if ( (out = fopen(outName, "w")) == NULL ) {
        fprintf(stderr, "failed to open outName file");
        exit(EXIT_FAILURE);
    }

    while ( (c = getc(in)) != EOF) {
        if (c >= 'a' && c <= 'z')
            c = c + 'A' - 'a';
        putc(c, out);
    }

    fclose(in);
    fclose(out);

    return 0;
}