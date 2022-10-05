#include <stdio.h>
//computes pairwise averages of 3 numbers

double average(double a, double b);
{
    return (a + b) / 2;
}

int main (void)
{
    double a, y, z;

    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &x, &y, &z);
    printf("Average of %g and %g: %g\n", x, y, average(x, y));
    printf("Average of %g and %g: %g\n", y, z, average(y, z));
    printf("Agerage of %g and %g: %g\n", x, z, average(x, z));


}