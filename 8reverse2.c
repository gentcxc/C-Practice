#include<stdio.h>
//variable length array, program prints numbers in reverse order, var length c99 exclusive
int main (void)
{
    int  i,n;
    
    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);

    int a[n]; //this array has been assigned "n" number of values.

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("In reverse order: ");
    for(i = n - 1; i>= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}