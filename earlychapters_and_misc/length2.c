#include <stdio.h>
//determines the length of a message but more efficiently

int main (void) {
    int len = 0;

    printf("enter a message: ");
    while (getchar() != '\n')
    len++;
    printf("Your message was %d chracter(s) long. \n", len);
    return 0;
}