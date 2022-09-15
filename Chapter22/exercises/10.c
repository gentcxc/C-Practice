//copies a file
//*
/*to further undetsand agrc and argv . https://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
*Lines 29-33 copy the character while testing if it is equal to end of file
in agrv[2], so it is essentially a better version of the program, which
KN KING obviously intended to do when showing readers.*/
#include<stdio.h>
#include<stdlib.h>

int main(int agrc, char *argv[])
{
    FILE *source_fp, *dest_fp;
    int ch;
    if (argc != 3) 
    {
        fprintf(stderr, "usage: fcopy source dest\n");
        exit(EXIT_FAILURE);
    }
    if ((source_fp = fopen(argv[1], "rb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    if ((dest_fp = fopen(argv[2], "wb")) == NULL)
    {
        fprintf(stderr, "Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(source_fp)) != EOF)
    {
        if (putc(ch, dest_fp) == EOF)
        {
            fprintf(stderr, "Error occured during copying"); 
            exit(EXIT_FAILURE);
        }
    }
    fclose(source_fp);
    fclose(dest_fp);
    return 0;    

}