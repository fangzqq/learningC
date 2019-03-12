// 此程序计算单词个数

#include <stdio.h>
#include <stdbool.h>

// 此函数判断一个字符是否为字母

bool alphabetic (const char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return true;
    else 
        return false;
}

// 此函数计算一个字符串中的单词个数

int countWords(const char string[])
{
    int i, wordCount = 0;
    bool lookingForWrod = true, alphabetic(const char c);

    for (i = 0; string[i] != '\0'; ++i)
        if (alphabetic(string[i]))
        {
            if (lookingForWrod)
            {
                ++wordCount;
                lookingForWrod = false;
            }
        }
        else 
            lookingForWrod = true;
    
    return wordCount;
}

int main (void)
{
    const char text1[] = "well, here goes.";
    const char text2[] = "And here we go... again.";
    int countWords (const char string[]);

    printf ("%s - words = %i\n", text1, countWords(text1));
    printf("%s - words = %i\n", text2, countWords(text2));

    return 0;
}