#include <stdio.h>
#include<string.h>

//finds smallest and largest in a series of words. after the user
//enters the words the program will determine which words would come first
//and last if the words were listed in dictionary order.
//program must stop accepting input when the user enters a four-letter word.

void store_smallest_largest(const char *input, char *smallest_word, char *largest_word);
int main (void)
{
    //this initization sets the two latter variables to be usable
    char input[20],smallest_word[20] = {'z'},largest_word[20] = {'a'};
    while (strlen(input) != 4)
    {
        printf("Enter word: ");
        scanf("%20s", input);
        store_smallest_largest(input, smallest_word, largest_word);
    }
    printf("Smallest word: %s\nLargest word: %s\n\n", smallest_word, largest_word);
    return 0;
}

void store_smallest_largest(const char *input, char *smallest_word, char *largest_word)
{
    char *psmall = smallest_word, *plarge = largest_word;
    if (strcmp(input, psmall) < 0)
        strcpy(psmall, input);
    else if (strcmp(input, plarge) > 0)
        strcpy(plarge, input);
}
