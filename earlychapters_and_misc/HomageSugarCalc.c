//calculates approximately how much sugar you need in your bottle of homebrew.
//based off of consensus that 17g of sugar = 1% alc in a liter.
#include <stdio.h>
int sugarcalc(int a, int b, int c);

int main (void)
{
    int grams, servings, liters;
    printf("How Many Servings Are in Your Bottle? :  ");
    scanf("%d", &servings);
    printf("How Much Sugar is in One Serving? :  ");
    scanf("%d", &grams);
    printf("How Many Liters are in the Bottle? :  ");
    scanf("%d", &liters);
    printf("You will need about %d grams of sugar to reach \
12 percent ABV\n\n", sugarcalc(grams, servings, liters));
    
    return 0;
}

int sugarcalc(int a, int b, int c)
{
    int existingsugar;
    existingsugar = a * b;
    return (((17 * c) * 12) - existingsugar);
}