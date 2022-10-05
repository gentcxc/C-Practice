#include <stdio.h>

int main (void)
{
    char *str = "food fool";
    printf("%c", str);
    censor(*str);
    printf()
}
void censor(*str)
{
    int i;
    char *c = str;
    for (; c != '\0'; c++)
        if (*c == 'f' || 'F')
            for(i=0; i <= 2; i++)
                if (*)    
    
}
void censor(char *str) {
    char *c = str;
    while (c+2 != '\0') {
        if (*c == 'f' && *(c+1) == 'o' && *(c+2) == 'o')
            *c = *(c+1) = *(c+2) = 'x';
        c++;
    }
}

/*This is williams function, it tests if the pointer plus 2 is equal to
the end of the string, if not it tests if the pointers are equal to "foo", 
if so it sets all three letters to x and impliments again.