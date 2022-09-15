
#include <stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds);

int main(void)
{
    long number = 1000000;
    struct time penis = split_time(number);
    printf("Hours: %d  Minutes: %d  Seconds: %d\n\n", penis.hours, penis.minutes,
    penis.seconds);
    return 0;
}

struct time split_time(long total_seconds)
{
    struct time dinger;
    dinger.hours = total_seconds /3600;
    total_seconds %= 3600;

    dinger.minutes = total_seconds / 60;
    total_seconds %= 60;

    dinger.seconds = total_seconds;
    return dinger;
}