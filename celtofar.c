#include <stdio.h>
/*Celsius to farenheit calculator*/

main()
{
	printf("Celsius to Farenheit \n");
 
    float far, celsius;
    int highest, lowest, step;

    lowest = 0; /*Lowest possible number*/
    highest = 200; /*where program ends*/
    step = 5; /* step size*/
    
    celsius = lowest;
    while (celsius <= highest) {
        far = ((celsius * (9.0/5.0)) +32);
        printf("%3.1f%6.0f\n", celsius, far);
        celsius = celsius + step;
    }
}


