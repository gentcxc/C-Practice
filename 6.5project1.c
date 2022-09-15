#include <stdio.h>
//takes highest value float and prints it, nov 25 2020
int main (void)
{
    float bignum = 0.0f, num;
    while(num>0)
    {
        printf("Enter a number: ");
        scanf("%f", &num);
        
        if(num>bignum)
        {
            bignum=num;
            
        }
        
    }
    printf("The largest number entered was: %.2f \n", bignum);
    return 0;
}