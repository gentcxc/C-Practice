p = duplicate(str);

char *duplicate(char *str)
{
    char *newstring = (char *) malloc(strlen(str) +1);
    if (newstring == NULL)
    {    printf("Malloc Failed");
         return NULL;
    }
    strcpy(newstring, str);
    return newstring;
}