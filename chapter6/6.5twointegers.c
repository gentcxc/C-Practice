#include <stdio.h>
//Finds the greatest common divisor for two integers, nov 25
int main(void)
{
    int n,m, remain;
    printf("Enter two integers: ");
    scanf("%d%d", &n, &m);
    while(n!=0)
    {
        remain = (m % n);
        m = n;
        n = remain;
    }
 printf("Greatest common divisor: %d\n", m);
    return 0;
}