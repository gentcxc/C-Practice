#include <stdio.h>
/*Prints a table of sqaures using a while statement 
*May 21st
*Note the use of %10d as opposed to %d, taking advantage of the fact that
printf right-justifies numbers when a field width is specified. Guessing
all that humbala jumbala means 10 spaces probably.
*/

int main (void)
{
    int i, n;
    
    printf("This program prints a table of squares. \n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        printf("%10d%10d\n", i, i * i);
        i++;
    }
    return 0;

}