#include <stdio.h>
//this program prints a table of compound interest using arrays
//has errors,   
#define NUM_RATES ((int) (sizeof(value)/sizeof(value[0])))  //size of array
#define INITIAL_BALANCE 100.00                                  

int main(void)
{
    int i, low_rate, num_years, year;
    double value[5];

    printf("Enter interest rate: ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears"); 
    for (i = 0; i < NUM_RATES; i++) //prints the rates 
    {
        printf("%6d%%", low_rate + i); 
        value[i] = INITIAL_BALANCE;         
    }
    printf("\n");
    for (year = 1; year <= num_years; year++)
    {
        printf("%3d     ", year);
        for (i = 0; i < NUM_RATES; i++)
        {
            value[i] += (low_rate + 1) / 100.0 * value[i]; 
            printf("%7.2f", value[i]);
        }
        printf("\n");
    }
    return 0;
}
