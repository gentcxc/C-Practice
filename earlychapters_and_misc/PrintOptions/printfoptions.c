#include <stdio.h>
/*
*April 23rd
*This program shows the different options with printf
*/

int main (void)
{
    int i;
    float x;

    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}