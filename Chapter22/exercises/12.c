//Find error in the following function ans show how to fix it.

int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0, c;
    if ((fp = fopen(filename, "r")) != NULL)
    {
        while (fgetc(fp) != EOF)
            if (fgetc(fp) == '.')
                n++;
        fclose(fp);
    }
    return n;
}

//uhh, i would assign fgetc to an int provably, and include error checking but
//it says to just look for an error so , i can't find the way to do it 
//right in this chapter but a gues sis fgetc needs another argument,
//also you could use rb instead of r so you can read binary files


//My revises attempt(without error checking btw)
//correct
int count_periods(const char *filename)
{
    FILE *fp;
    int n = 0, c;
    if ((fp = fopen(filename, "rb")) != NULL)
    {
        while ((c = fgetc(fp)) != EOF)
            if (c == '.')
                n++;
        fclose(fp);
    }
    return n;
}