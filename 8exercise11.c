#include <stdio.h>
#define B 'B'
//brbrbrbrbrbrbrbrbrbrbrbr
int main (void)
{
    char checker_board[8][8]={0};
    int i, j;
    for (i= 0; i < 8; i++)
    {
        printf("\n");
        for(j=0; j < 8; j++)
        if (j % 2 == 0)
        {
            checker_board[i][j] = 'B';
        }
        else
        {
            checker_board[i][j] = 'R';
        }
    }
    for (i = 0; i < 64; i++)
    {printf("%s ", checker_board[i]);
    }
    return 0;
}