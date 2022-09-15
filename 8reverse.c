#include <stdio.h>
//does exactly what it says, stare at this to try and understand arrays a bit more
#define N 10

int main (void)
{
    int a[N], i;

    printf("Enter %d numbers: ", N);
    for (i=0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("In reverse order:");
    for (i=10-1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}