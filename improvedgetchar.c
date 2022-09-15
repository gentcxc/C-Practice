#include <stdio.h>
/*this is the improved version of getchar*/

main()
{
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
    
    
}