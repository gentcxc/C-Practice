#include<stdio.h>
#define ENGLISH

int main(void)
{
    #ifdef(ENGLISH)
        printf("Insert Disk 1\n");
    #elif defined(FRENCH)
        printf("Inserez Le Disque 1\n");
    #elif defined(SPANISH)
        printf("Inserte El Disco 1 ");
    return 0;
}

