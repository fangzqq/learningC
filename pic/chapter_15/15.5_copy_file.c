// 此程序将一个文件复制到另一个文件

#include <stdio.h>

int main(void)
{
    char inName[64], outName[64];
    FILE *in, *out;
    int c;

    // 从用户处获取文件名
    printf("Enter name of file to be copied: ");
    scanf("%63s", inName);
    printf("Enter name of output file: ");
    scanf("%63s", outName);

    // 打开输入与输出文件

    if ( (in = fopen (inName, "r")) == NULL ) {
        printf("Can't open %s for reading.\n", inName);
        return 1;
    }
    
    if ( (out = fopen(outName, "w")) == NULL ) {
        printf("Can't open %s for writting.\n", outName);
        return 2;
    }

    // 将 in 复制到 out

    while ( (c = getc (in)) != EOF )
        putc(c, out);
    
    // 关闭打开的文件
     fclose(in);
     fclose(out);

     printf("File has been copied.\n");

     return 0;
}