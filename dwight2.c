/*
* Computes the dimensional weight of a box inputted by user
* April 15th
* Finally getting back into this
*/

#include <stdio.h>
int main (void)
{
int height, length, width, volume, weight;

printf("Enter height of box ");
scanf("%d\n", &height);
printf("Enter the length of box ");
scanf("%d\n", &length);
printf("Enter width of box ");
scanf("%d\n", &width);

volume = height * length * width;
weight = (volume +165) / 166;

printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n", weight);

return 0;

}
