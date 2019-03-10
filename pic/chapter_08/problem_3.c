# include <stdio.h>

struct time
{
    int hour;
    int minutes;
    int seconds;
};

struct time elapsed_time (struct time t1, struct time t2)
{
    struct time elapsed;
    int s1, s2, elapsed_seconds;

    s1 = t1.seconds + 60 * t1.minutes + 3600 * t1.hour;
    s2 = t2.seconds + 60 * t2.minutes + 3600 * t2.hour;

    if (s2 > s1)
        elapsed_seconds = s2 - s1;
    else
        elapsed_seconds = s2 - s1 + 24 * 3600;
    
    elapsed.hour = elapsed_seconds / 3600;
    elapsed.minutes = (elapsed_seconds - elapsed.hour * 3600) / 60;
    elapsed.seconds = elapsed_seconds - elapsed.hour * 3600 - elapsed.minutes * 60;

    return elapsed;
}

int main(void)
{
    struct time time1, time2, elapsed;
    struct time elapsed_time(struct time t1, struct time t2);

    printf("what is your time (hh:mm:ss)?\n");
    scanf("%i:%i:%i", &time1.hour, &time1.minutes, &time1.seconds);

    printf("what is your the other time (hh:mm:ss)?\n");
    scanf("%i:%i:%i", &time2.hour, &time2.minutes, &time2.seconds);
    
    elapsed = elapsed_time(time1, time2);

    printf("the time elapsed is %.2i:%.2i:%.2i\n", elapsed.hour, elapsed.minutes, elapsed.seconds);

    return 0;
}