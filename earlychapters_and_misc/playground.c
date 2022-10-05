#include <stdio.h>
//this program finds the average word size in a sentence that you type. nov 29
int main (void)
{
    int i;
    i = -2;
    printf("%d", i);
    return 0;
}


    
    int a[5][5];
    int i,column, e, rownum = 1;
    printf("Enter row 1: ");
    for (i=0, column = 0; i < ELEMENT_AMT; i++)
    {
        scanf("%d", &a[column][i]);
        if (i == 4 && column != ARRAY_AMT)
        {
            column++;  //may need to change ++ to before
            ++rownum;
            i = -1;  //theoretically sets i to -1 right before the increment, making it 0
            printf("\n Enter row %d: ", rownum);
        }
        else
        {
            break;
        }
    }
    int r1, r2, r3, r4, r5; //this may need to start with a[0]
    printf("Row totals: " );

    return 0;
} 

    printf("How many numbers do you want to reverse? ");
    scanf("%d", &n);