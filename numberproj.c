#include <stdio.h>
/* Tells how many digits are in a number
*May 14th
*/

int main (void)
{
    int number;

    scanf("%d", &number);
    
    if (number <= 9)
        printf("There is one digit\n");
    else if (number <= 99)
        printf("There are 2 digits\n");
    else if (number <= 1000)
        printf("There are 3 digits\n");
    
    return 0;
}