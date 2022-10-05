#include <stdio.h>
//this program finds the average word size in a sentence that you type. nov 29
int main (void)
{   
    char input;
    int characters, wordcount;
    printf("Enter a sentence: ");
    while((input = getchar()) != '\n')
    {
        switch(input)
        {
            case ' ':
            ++wordcount;
            break;
            default:
            ++characters;
            break;
        }
    }
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", wordcount);
    printf("Average word length: %.1f\n", (float)characters/wordcount);
    return 0;
}