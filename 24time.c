#include <stdio.h>
/*May 14th
*determines 12 hr equivalent of 24 hr time
*/
int main (void)
{
    int hour, minutes;

    printf("Type the 24 Hour Time: ");
    scanf("%d :%d", &hour, &minutes);

    if (hour <13)
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minutes);
    else if (hour >= 13)
        switch (hour) {
        case 13: printf("Equivalent 12-hour time: 1:%d PM\n", minutes);  break;
        case 14: printf("Equivalent 12-hour time: 2:%d PM\n", minutes);  break;
        case 15: printf("Equivalent 12-hour time: 3:%d PM\n", minutes);  break;
        case 16: printf("Equivalent 12-hour time: 4:%d PM\n", minutes);  break;
        case 17: printf("Equivalent 12-hour time: 5:%d PM\n", minutes);  break;
        case 18: printf("Equivalent 12-hour time: 6:%d PM\n", minutes);  break;
        case 19: printf("Equivalent 12-hour time: 7:%d PM\n", minutes);  break;
        case 20: printf("Equivalent 12-hour time: 8:%d PM\n", minutes);  break;
        case 21: printf("Equivalent 12-hour time: 9:%d PM\n", minutes);  break;
        case 22: printf("Equivalent 12-hour time: 10:%d PM\n", minutes); break;
        case 23: printf("Equivalent 12-hour time: 11:%d PM\n", minutes); break;
        case 24: printf("Equivalent 12-hour time: 12:%d PM\n", minutes); break;
        }

    return 0;
}
