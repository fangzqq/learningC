#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int calculateNOfDate(struct date d)
{
    int N;

    N = d.day;

    if (d.month <= 2)
        N += 1461 * (d.year - 1) / 4 + 153 * (d.month + 13) / 5;
    else
        N += 1461 * d.year / 4 + 153 * (d.month + 1) / 5;
    
    return N;
}

int main (void)
{
    struct date d1, d2;

    printf("what is your date (mm dd yyyy)?\n");
    scanf("%i %i %i", &d1.month, &d1.day, &d1.year);

    printf("what is your the other date (mm dd yyyy)?\n");
    scanf("%i %i %i", &d2.month, &d2.day, &d2.year);

    printf("the days between the two date is %i\n", calculateNOfDate(d2) - calculateNOfDate(d1));

    return 0;
}