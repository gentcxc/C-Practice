#include <stdio.h>
#include <ctype.h>
//converting regular time to military time

int main (void)
{
    int hour, minute;
    char daynight;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c",&hour, &minute, &(daynight));  //we can ignore the "m" 
                                            //character ex. am pm, only the first letter will matter
    if (toupper(daynight) == 'P') //somehow touper in front of daynight fixed everything
    {
        hour += 12;
    }
    
    printf("Equivalent 24-hour time: %d:%d %c" "m\n", hour, minute,daynight);
    return 0;
}