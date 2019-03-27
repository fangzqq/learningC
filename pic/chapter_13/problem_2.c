#include <stdio.h>

enum month { January = 1, February, March, April, May, June,
            July, August, September, October, November, December };

char *monthName(enum month amonth)
{
    char *name;
    switch(amonth) {
        case January:
           name = "January";
           break;
        case February:
            name = "February";
            break;
        case March:
            name = "March";
            break;
        case April:
            name = "April";
            break;
        case May:
            name = "May";
            break;
        case June:
            name = "June";
            break;
        case July:
            name = "July";
            break;
        case August:
            name = "August";
            break;
        case September:
            name = "September";
            break;
        case October:
            name = "October";
            break;
        case November:
            name = "November";
            break;
        case December:
            name = "December";
            break;
        default:
            name = "invalid month";
            break;
    }
    
    return name;
}

int main(void)
{
    enum month amonth = June;
    char *monthName(enum month);

    printf("%s\n", monthName(amonth));

    return 0;
}