#include <stdio.h>

int main(void)
{
    int a = 0, b = 1, c = 2;
    int fib_nums[40]={0,1};
    for (;c < 40; a++, b++, c++)
    {
        fib_nums[c] = (fib_nums[a] + fib_nums[b]);
    }
    for (a = 0; a < 40; a++)
    {
        printf("%d, ", fib_nums[a]);
    }
printf("\n");
return 0;
}