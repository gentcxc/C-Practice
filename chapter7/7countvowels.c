#include <stdio.h>
#include <ctype.h> //toupper
//count the vowels in a typed sentence
int main(void)
{
    char vowel;
    int vowelcount;
    printf("Enter a sentence: ");
    while((vowel = getchar()) != '\n')
    {
        switch(toupper(vowel))
        {
            case 'A': case 'E': case 'I': case 'O': case 'U':
            vowelcount++;
            break;
        }
    }
    printf("Vowel Count: %d\n", vowelcount);
    return 0;
}
