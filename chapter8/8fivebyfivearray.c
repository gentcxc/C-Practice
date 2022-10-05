#include <stdio.h>
//i believe my idea is that after 5 values have been recieved, increment printf somehow
//for the next array, and print again, shouldnt be that hard.
//this solution is completely sourced from github/roboryman, who taught me about
//nested FOR loops, i did not know how to do this, i was at a dead end, the simplicity
//of rorys nested for statements is shocking and really helped me
//this program asks for a five by five array and prints sums.
#define FIVE 5
int main (void)
{
    int sum = 0, rownum, colnum, array[FIVE][FIVE] = {0};

    for(rownum = 0; rownum < FIVE; rownum++)
    {
        printf("Enter row %d: ", rownum+1);
        for(colnum = 0; colnum < FIVE; colnum++)
        {
            scanf("%d", &array[rownum][colnum]);
        }
    }
    
    printf("\nRow Totals: ");
    for(rownum=0; rownum < FIVE; rownum++)
    {
        for(colnum=0; colnum < FIVE; colnum++)
        {
            sum += array[rownum][colnum];
        }
        printf(" %d", sum);
        sum = 0;
    }
    printf("\nColumn Totals: ");
    for(colnum=0; colnum < FIVE; colnum++)
    {
        for(rownum=0; rownum < FIVE; rownum++)
        {
            sum += array[rownum][colnum];
        }
        printf(" %d", sum);
        sum = 0;
    }
return 0;
}