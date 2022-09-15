//amount of digits in a scanned number that you give using functions.
#include <stdio.h>
int num_digits(int n);
int main(void)
{
    int num;
    printf("Enter a number:  ");
    scanf("%d", &num);
    printf("There are %d digits in that number.\n\n", num_digits(num));
    return 0;
}
int num_digits(int n)
{
    int i;
    for (; n >= 10; i++)
      n /= 10;
    return i+1;
}
