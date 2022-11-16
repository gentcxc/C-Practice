#include <stdio.h>

/**
***Programmer: Christiano Carta
***
***A program for poker related concepts and ideas
***
**/
void potodds(int, int);
float calcodds(float, float);
void fourthstreetodds(float);
int main(void)
{
    printf("*******Poker.c********\n"
    "*   Potodds = 1      * \n"
    "*   fourth =  2      * \n");
}

void potodds(int mip, int call)
{
    printf("1 to %.2f\n", calcodds(mip,call));
}

float calcodds(float x, float y)
{
    return(x / y);
}

void fourthstreetodds(float outs)
{
    printf("1 to %.2f\n", (calcodds(46,outs)-1));
}

