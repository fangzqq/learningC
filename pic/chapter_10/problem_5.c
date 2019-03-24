#include <stdio.h>

struct entry
{
    int value;
    struct entry *prev;
    struct entry *next;
};

int main(void)
{
    struct entry head, n1, n2, n3, n4;
    struct entry * entryPtr;

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    head.prev = (struct entry *) 0;
    head.next = &n1;
    n1.prev = &head;
    n1.next = &n2;
    n2.prev = &n1;
    n2.next = &n3;
    n3.prev = &n2;
    n3.next = &n4;
    n4.prev = &n3;
    n4.next = (struct entry *) 0;

    for (entryPtr = &n4; entryPtr->prev != 0; entryPtr = entryPtr->prev)
        printf("%i ", entryPtr->value);
    
    printf("\n");
    
    return 0;
}