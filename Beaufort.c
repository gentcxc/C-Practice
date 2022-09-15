#include <stdio.h>
/*May 14th
*This program converts a number of wind force into the description based
on the Beaufort scale
*/
int main (void)
{
    int airspeed;

    printf("Please Input Wind Speed(in Knots): ");
    scanf("%d", &airspeed);
    if (airspeed < 1)
        printf("The wind speed is calm\n");
    else if (airspeed <= 3)
        printf("The wind speed is light air\n");
    else if (airspeed <= 27)
        printf("The wind speed is breezey\n");
    else if (airspeed <= 47)
        printf("The wind speed is a Gale\n");
    else if (airspeed <= 63)
        printf("The wind speed is a Storm\n");
    else if (airspeed > 63)
        printf("The wind speed is considered a Hurricane\n");
    
    return 0;
}