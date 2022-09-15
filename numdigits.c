#include <stdio.h>
/*Calculates number of digits in an integer
*May 21st
*Here /= divides n by 10 and assigns it to n right aftwerwards
*/
int main (void)
{
    int digits = o, n;

    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    do{
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digit(s).\n", digits);

    return 0;
    }
    
}