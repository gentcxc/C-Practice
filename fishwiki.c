/**This program will serve as a sort of wiki page, hopefully to be linked
 * in some way to fishwater testing in order to create an informational
 * fish water wizard.
 * */

#include <stdio.h>
#include <string.h>

int main (void)
{
char str[20];
printf("Please enter the fish parameter you would like to learn about: ");
fgets(str, 20, stdin);
printf("You entered %s", str);
return 0;
}