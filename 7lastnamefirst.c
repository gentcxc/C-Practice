#include <stdio.h>
#include <ctype.h>
//essentially a snippet from https://github.com/raywritescode/cpma2/blob/master/ch07/c7p11.c
//this program prints the users last name and first inital, seperated by a comma
int main (void)
{
    char lastname;
    char firstname;
   
   printf("Enter a first and last name: ");
   scanf("%c", &firstname);
   while(getchar() != ' ')
    //ignores remaining first name characters until a blank space is reached
    {;
    }
    while((lastname = getchar()) != '\n')
    {
        if (lastname == ' ')
        {
            ; //ignores blank spaces before and after last name
        }
        else
        {
            printf("%c", lastname);
        }
    }
    printf(", %c. \n\n", firstname);
    return 0;
}