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

int dayOfTheWeek(struct date d)
{
    int day;
    int calculateNOfDate(struct date);

    day = (calculateNOfDate(d) - 621049) % 7;

    return day;
}

void displayDayOfTheWeek(int day)
{
    switch (day) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        default:
            printf("invalid date");
            break;
    }

    printf("\n");

}

int main (void)
{
    struct date d;
    int day;
    int dayOfTheWeek(struct date);
    void displayDayOfTheWeek(int);

    printf("what is your date (mm dd yyyy)?\n");
    scanf("%i %i %i", &d.month, &d.day, &d.year);

    day = dayOfTheWeek(d);

    displayDayOfTheWeek(day);

    return 0;
}