#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void insertEntry(struct entry *n1, struct entry *n2)
{
    n1->next = n2->next;
    n2->next = n1;
}

int main(void)
{
    struct entry n1, n2, n3, n4;
    struct entry *a, *b;
    void insertEntry(struct entry *a, struct entry *b);

    n1.value = 100;
    n2.value = 200;
    n3.value = 300;
    n4.value = 400;

    n1.next = &n2;
    n2.next = &n3;

    a = &n4;
    b = &n2;
    insertEntry(a, b);

    printf("%i\n", n2.next->value);
}