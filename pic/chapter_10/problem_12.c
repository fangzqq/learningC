#include <stdio.h>

int main(void)
{
    char *message = "Programming in C is fun\n";
    char message2[] = "you said it\n";
    char *format = "x = %i\n";
    int x = 100;

    printf("You said it\n");
    printf("%s", message2);
    printf(message2);
    printf("%s", &message2[0]);
}