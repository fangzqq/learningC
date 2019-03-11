#include <stdio.h>
#include <stdbool.h>

struct date
{
    int month;
    int day;
    int year;
};

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct dateAndTime
{
    struct date sdate;
    struct time stime;
};

struct time timeUpdate(struct time now)
{
    ++now.seconds;

    if (now.seconds == 60) {
        now.seconds = 0;
        ++now.minutes;

        if (now.minutes == 60) {
            now.minutes = 0;
            ++now.hour;

            if (now.hour == 24)
                now.hour = 0;
        }
    }

    return now;
}

struct date dateUpdate(struct date today)
{
    struct date tomorrow;
    int numberOfDays(struct date);

    if (today.day != numberOfDays(today)) {
        tomorrow.day = today.day + 1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }
    else if (today.month != 12) {
        tomorrow.day = 1;
        tomorrow.month = today.month + 1;
        tomorrow.year = today.year;
    }
    else {
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year = today.year + 1;
    }

    return tomorrow;
}

int numberOfDays(struct date d)
{
    int days;
    bool isLeapYear(struct date);
    const int daysPerMonth[12] = {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if (isLeapYear(d) && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];
    
    return days;
}

bool isLeapYear(struct date d)
{
    bool leapYearFlag;

    if ((d.year % 100 != 0 && d.year % 4 == 0) || d.year % 400 == 0)
        leapYearFlag = true;
    else 
        leapYearFlag = false;
    
    return leapYearFlag;
}

struct dateAndTime clockKeeper(struct dateAndTime dt)
{
    struct time timeUpdate(struct time);
    struct date dateUpdate(struct date);

    dt.stime = timeUpdate(dt.stime);
    if (dt.stime.hour == 0 && dt.stime.minutes == 0 && dt.stime.seconds == 0)
        dt.sdate = dateUpdate(dt.sdate);
    
    return dt;
}

int main(void)
{
    struct dateAndTime dt;
    struct dateAndTime clockKeeper(struct dateAndTime);

    printf("what is your date and time (mm dd yyyy hh:mm:ss): ");
    scanf("%i %i %i %i:%i:%i", &dt.sdate.month, &dt.sdate.day, &dt.sdate.year, 
    &dt.stime.hour, &dt.stime.minutes, &dt.stime.seconds);
    
    dt = clockKeeper(dt);
    
    printf("the updated date and time is: %.2i %.2i %.2i %.2i:%.2i:%.2i\n", 
    dt.sdate.month, dt.sdate.day, dt.sdate.year % 100, dt.stime.hour, dt.stime.minutes, dt.stime.seconds);

    return 0;
}