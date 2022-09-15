#include <stdio.h>

int main (void)
{
    int regint = 8;
    long double chix;
    printf("Size of variable regint: %lu\n", sizeof(regint));
    printf("Size of a short int: %lu\n", sizeof(short));
    printf("Size of a long int: %lu\n", sizeof(long));
    printf("Size of a float variable: %lu\n", sizeof(float));
    printf("Size of a double variable: %lu\n", sizeof(double));
    printf("Size of a long double variable: %lu\n", sizeof(chix));



    return 0;
}