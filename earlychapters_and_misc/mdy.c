#include <stdio.h>
/*
*day, month, year, practice project chapter 3, print as year, month, day
*April 24th
*/

int main (void)
{   
    int day, month, year;

    printf("Please Enter Today's Date (Day, Month, Year) : ");
    scanf("%d/%d/%d", &day, &month, &year);
    printf("Todays date is: %d/%d/%d\n ", year, month, day);


    return 0;
}