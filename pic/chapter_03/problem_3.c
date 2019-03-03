#include <stdio.h>

int main(void)
{
    int a = 0001;

    printf("0001 is %#O\n", a);
    printf("123L is %li\n", 123L);
    printf("123.5e2 is %g\n", 123.5e2);
    //  printf("1.2Fe-7 is %g\n", 1.2Fe-7);
    printf("0XABCDEFL is %#lX\n", 0XABCDEFL);
    
    return 0;
}
