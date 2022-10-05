#include <stdio.h>

int gcd(int m,int n); //function delcaration
int main (void)
{
    int m, n;
    printf("Print 2 Integers for the GCF test featuring functions! \n   : ");
    scanf("%d %d", &m, &n);
    printf("Greatest Common Factor: %d  \n", gcd(m,n));
}
int gcd(int m, int n)
{
    int r;
    while (n != 0)
    {
        r = m % n;
        m = n; 
        n = r;
    }
    return m;
}