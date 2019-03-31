#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, m, n, line = 120;
    char buffer[119], cols[119];
    FILE *in;

    printf("what is your m and n: ");
    scanf("%i %i", &m, &n);

    if ( (in = fopen("copyme", "r")) == NULL) {
        fprintf(stderr, "can't open copyme");
        exit(EXIT_FAILURE);
    }

    while( fgets(buffer, line, in) != NULL) {
        for(i = 0; buffer[i] != '\0'; ++i)
            if (m <= i + 1 && i + 1 <= n)
                cols[i + 1 - m] = buffer[i];
        printf("%s\n", cols);
    }

    fclose(in);

    printf("\n");
    return 0;
}