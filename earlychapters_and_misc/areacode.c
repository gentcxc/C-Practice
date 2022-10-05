/*
*May 5th
*Matching area codes to areas
*/
#include <stdio.h>

int main (void)
{
    int area_code;

    printf("Enter Georgia Area Code: ");
    scanf("%d", &area_code);
    
    switch (area_code)
    {
        case 229: printf("This area code corresponds with Albany"); break;
        case 404: printf("This area code corresponds with Atlanta"); break;
        case 470: printf("This area code corresponds with Atlanta"); break;
        case 478: printf("This area code corresponds with Macon"); break;
        case 678: printf("This area code corresponds with Atlanta"); break;
        case 706: printf("This area code corresponds with Columbus"); break;
        case 762: printf("This area code corresponds with Columbus"); break;
        case 770: printf("This area code corresponds with Atlanta"); break;
        case 912: printf("This area code corresponds with Savannah"); break;
    }
    printf("\n");
    
    return 0;
}