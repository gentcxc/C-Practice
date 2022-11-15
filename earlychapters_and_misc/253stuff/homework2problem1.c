#include <stdio.h>

int function(int N);
void main()
{
    printf("%d", function(3));
    
}   
int function(int N)
{
    int X, Y, counter;
    X=1;
    while((N*N)>X)
    {
        Y=N;
        while(Y > 0)
        {   
            Y--;
            counter++;
        }
        X = X + X;
    }
    return counter;
}



