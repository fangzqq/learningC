#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void removeEntry(struct entry *n)
{
    n->next = n->next->next;
}

int main(void)
{
    struct entry head, n1, n2, n3, n4;
    void removeEntry(struct entry *n);

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    head.next = &n1;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;

    removeEntry(&head);

    printf("%i\n", head.next->value);
}