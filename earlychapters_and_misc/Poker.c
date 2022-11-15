#include <stdio.h>

/**
***Programmer: Christiano Carta
***
***A program for poker related concepts and ideas
***
**/
void potodds(int, int);
float calcodds(float, float);
void fourthstreetodds(int);
int main(void)
{
    potodds(9, 2);
    return 0;
}

void potodds(int mip, int call)
{
    printf("1 to %.2f\n", calcodds(mip,call));
}

float calcodds(float x, float y)
{
    return(x / y);
}

void fourthstreetodds(int outs)
{
    printf("%.2f" 
