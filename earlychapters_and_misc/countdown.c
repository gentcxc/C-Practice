#include <stdio.h>
//prints a countdown

void print_count(int n)
{
    printf("T minus %d and counting\n", n);
}
int main (void)
{
    int num;
    for (num=10; num >= 0; num--)
    {
        print_count(num);
    }

    return 0;
}