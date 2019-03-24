#include <stdio.h>

struct entry
{
    int value;
    struct entry *prev;
    struct entry *next;
};

void insertEntry(struct entry *a, struct entry *b)
{
    a->next = b->next;
    b->next->prev = a;
    b->next = a;
    a->prev = b;
}

void removeEntry(struct entry *a)
{
    a->next->prev = a->prev;
    a->prev->next = a->next;
}

int main(void)
{
    struct entry head, n1, n2, n3, n4, n5;
    struct entry * entryPtr;
    void insertEntry(struct entry *a, struct entry *b);
    void removeEntry(struct entry *a);

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;
    n5.value = 500;

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

    insertEntry(&n5, &head);
    removeEntry(&n2);

    for (entryPtr = &n4; entryPtr->prev != 0; entryPtr = entryPtr->prev)
        printf("%i ", entryPtr->value);
    
    printf("\n");
    
    return 0;
}