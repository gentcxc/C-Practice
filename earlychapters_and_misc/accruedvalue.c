#include <stdio.h>
#include <math.h>
//This compares two accrued values with given variables, the second equation is built for
//compound interest. The for statement is most likely flawed and needs work, nov19-2020

int main(void)
{
    float x1,x2;
    float expo1,expo2;
    float z1,z2;

    printf("From now on we will refer to these equations as x + z ^ expo. \n Numbers \
for different equations will be seperated by a forwardslash. \n");
    printf("Enter x for equation 1 and equation 2: ");
    scanf("%f/%f", &x1,&x2);
    printf("\nEnter z for equation 1 and equation 2: ");
    scanf("%f/%f", &z1,&z2);
    printf("\nEnter exponents for equation 1 and equation 2: ");
    scanf("%f/%f", &expo1,&expo2);

    float answer1, answer2, answer3, answer4;
    int expoctrl = 1;

    answer1 = x1 + (z1 * expo1);
    answer2 = x2 * (pow(z2, expo2));
    answer3 = answer1;
    answer4 = answer2;

for(answer4 < answer3)
    {
        ++expo1;
        ++expo2;
        answer3 = x1 + (z1 * expo1);
        answer4 = x2 * pow(z2, expo2);
    }
    else
    {
        printf("Equation 2 (Compound Interest) Overtakes Equation 1 at exponent value %.2f\n"\
        ,expo2);
    }
    printf("Answer to equation 1: %.2f\n", answer1);
    printf("Answer to equation 2: %.2f\n", answer2);
    return 0;
}