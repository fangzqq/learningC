// 此程序使用词典查找

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct entry
{
    char word[15];
    char definition[50];
};

int compareStrings (const char s1[], const char s2[])
{
    int i = 0, answer;

    while (s1[i] == s2[i] && 
            s1[i] != '\0' && s2[i] != '\0')
        ++i;
    
    if (s1[i] == '\0' && s2[i] == '\0')
        answer = 0;
    else if (s1[i] < s2[i]) 
        answer = -1;
    else
        answer = 1;
    
    return answer;
}

// 此函数在词典中查找一个单词

int lookup (const struct entry dictionary[], const char search[],
            const int entries)
{
    int low = 0;
    int high = entries -1;
    int mid, result;
    int compareStrings (const char s1[], const char s2[]);

    while (low <= high) {
        mid = (low + high) / 2;
        result = compareStrings(dictionary[mid].word, search);

        if (result == -1)
            low = mid + 1;
        else if (result == 1)
            high = mid - 1;
        else 
            return mid;
    }

    return -1;
}

int main(int argc, char *argv[])
{
    const struct entry dictionary[100] = {
        {"aardvark", "a burrowing African mammal"},
        {"abyss", "a bottomless pit"},
        {"acumen", "mentally sharp; keen"},
        {"addle", "to become confused"},
        {"aerie", "a high nest"},
        {"affix", "to append; attach"},
        {"agar", "a jelly made from seaweed"},
        {"ahoy", "a nautical call of greeting"},
        {"aigrette", "an ornamental cluster of feathers"},
        {"ajar", "partially opened"}
    };
    char *word;
    int entries = 10;
    int entry;
    int lookup (const struct entry dictionary[], const char search[], 
                const int entries);
    
    if (argc < 2) {
        fprintf(stderr, "need a word\n");
        exit(EXIT_FAILURE);
    }
    word = argv[1];
    entry = lookup(dictionary, word, entries);

    if (entry != -1)
        printf ("%s\n", dictionary[entry].definition);
    else 
        printf("Sorry, the word %s is not in my dictionary.\n", word);
    
    return EXIT_SUCCESS;
}