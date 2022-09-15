//I wouldve never thought of a switch statement here but williamgherman did @github
//this isnt entirely his masterpiece I just went about doing it a different way before
//deciding to see what a more correct take on the problem was.
//turns month and day int o the amount of days it is out of the entire year of 366 days
#include <stdio.h>
#define mons 12
int day_of_year(int month, int day,int year);
int main (void)
{
    int m, d, y;
    printf("Enter Month / Day / Year:   ");
    scanf("%d/%d/%d", &m,&d,&y);
    printf("Amount of days out of the year: %d ", day_of_year(m, d, y));
    return 0;
}
int day_of_year(int month,int day,int year)
{
    int i;
    for (i=1; i<month; i++) 
    {
        switch (i)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            day += 31;
            break;
            case 4: case 6: case 9: case 11:
            day += 30;
            break;
            case 2: 
            if ((year % 4==0 && year % 100 != 0) || year % 400 == 0)
                day +=29; //leap year
            else 
                day +=28;
        }
    }
    return day;
    
}