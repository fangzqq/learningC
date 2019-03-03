#include <stdio.h>

int main (int argc, char *argv[])
{
    FILE *in, *out;
    int c;

    if ( argc != 3 ) {
        fprintf (stderr, "Need two files names\n");
        return 1;
    }

