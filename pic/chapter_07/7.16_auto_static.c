// 此程序说明静态和自动变量

#include <stdio.h>

void auto_static (void)
{
    int autoVar = 0;
    static int staticVar;

    printf("automatic = %i, static = %i\n", autoVar, staticVar);

    ++autoVar;
    ++staticVar;
}

int main (void)
{
    int i;
    void auto_static(void);

    for (i = 0; i < 5; ++i)
        auto_static();
    
    return 0;
}