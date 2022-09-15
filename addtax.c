#include<stdio.h>
float income_tax(float a);
int main (void)
{
    float amount, tax, total;
    tax = 1.05;
    printf("Enter an Amount of Money: ");
    scanf("%f", &amount);
    printf("With tax added: $ %.2f\n", income_tax(amount));
    return 0;
}
float income_tax(float a)
{
    float tax = 1.05F;
    return a * tax;
}
