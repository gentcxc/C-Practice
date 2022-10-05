#include <stdio.h>
/*This program prints the reversal of a two digit number
*April 26th
*Doesn't work yet, fix after work.
*Page 71
*/

int main (void)
{
    int inpt, num1, num2, num3;


    printf("Enter a Three Digit Number: ");
    scanf("%d", &inpt);
    num1 = ((inpt % 100) % 10);
    num2 = ((inpt % 100) / 10);
    num3 = (inpt / 100);
    printf("The reversal is: %d%d%d\n", num1, num2, num3);
    return 0;
}