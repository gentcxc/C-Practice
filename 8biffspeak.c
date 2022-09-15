#include<stdio.h>
#include<ctype.h>
int main (void)
//fix this, toupper doesnt work and for some reason the letter s doesnt either
// didnt print and a igned nums to a string, fixed both, scnaf!=\n didnt work for some
//reason, cut words off prematurely, switched to getchar and now it works eprfectly, :)
{
    int i, n, nums[60] = {0};
    char a[60]={0};
    printf("Enter message: ");
    
    for (i=0; i < 60 && ((a[i] = getchar()) != '\n'); i++)
    {
        a[i] = (toupper(a[i])); // toupper does not edit the array value, u must set the array equal
        switch (a[i])           //to the value you want it to change
        {
            case 'A':
            nums[n] = 4;
            printf("%d", nums[n]++);
            break;
            case 'B':
            nums[n] =  8;
            printf("%d", nums[n]++);
            break;
            case 'E': 
            nums[n] =  3;
            printf("%d", nums[n]++);
            break;
            case 'I':
            nums[n] = 1;
            printf("%d", nums[n]++);
            break;
            case 'O':
            nums[n] = 0;
            printf("%d", nums[n]++);
            break;
            case 'S': 
            nums[n] = 5;
            printf("%d", nums[n]++);
            break;
            printf("%d", nums[n]++);
            default: 
            printf("%c", a[i]);
            break;
        }
    } 
    printf("!!!!!!!!!!!!!!");
    printf("\n\n");
    return 0;
}
