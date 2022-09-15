#include <stdio.h>
/*attempted character space and line counter*/

main()
{
    int c, space, enter;

    while ((c = getchar()) !=EOF)
        if (getchar() == " ")
            ++space;
        if (getchar() == "\n")
            ++enter;
        else
            ++c;
    printf("%d%d%d\n", c, space, enter);
    putchar("%d\n", c);
}

