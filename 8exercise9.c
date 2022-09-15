#include<stdio.h>
//exercise for temperature meatings over one month hourly. pg 178
//averages hourly temp readings for the entire month
#define DAYS 30
#define HOURS 24
int main (void)
{
    int sum;
    int temperature_readings[HOURS][DAYS]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
                                           
                                           
    int day_num, hour_num;
    for (day_num = 0; day_num < DAYS; day_num++)
    {
        for (hour_num = 0; hour_num < 24; hour_num++)
        {
        sum += temperature_readings[hour_num][day_num];
        }
    }
    (sum /= 30);
    printf("\n\n%d\n\n", sum / 24);
    return 0;
}