#include <stdio.h>
#define MAXLINE 1000 /*max input of line size*/

int max; /*maximum length seen so far*/
char line[MAXLINE]; /*current input line*/
char longest[MAXLINE]; /* longest line saved here*/

int getline(void)
void copy(void)line

/*print longest input line; specialized version */
main()
{
    int len;
    extern int max;
    extern char longest[]

    max = 0;
    while ((len = getline()) > 0)
        if (len > max) {
            max = len;
            copy();
        }
    if (max > 0)
        printf("%s", longest);
    return 0;
}

/* getline: specialized version*/
int getline(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE)
}