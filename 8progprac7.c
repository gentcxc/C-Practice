#include <stdio.h>
int main (void)
{
    int sum, rownum, colnum, a[5][5] ={0};

    for(rownum = 0; rownum < 5; rownum++)
    {
        printf("Enter Row %d: ", rownum+1);
        for(colnum = 0; colnum < 5; colnum++)
        {
            scanf("%d", &a[rownum][colnum]);
        }
    }
    printf("Row totals: ");
    for(rownum = 0; rownum < 5; rownum++)
    {
        for (colnum = 0; colnum < 5; colnum++)
        {
        sum += a[rownum][colnum];
        }
        printf("%d ", sum);
        sum = 0;
    }
    printf("\nColumn Totals ");
    for(colnum = 0; colnum < 5; colnum++)
    {
        for (rownum = 0; rownum < 5; rownum++)
        {
        sum += a[rownum][colnum];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}