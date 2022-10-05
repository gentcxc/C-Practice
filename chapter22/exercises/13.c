int line_elength*const char *filename, int n)
{
    FILE *fp;
    char a[20];
    if ((fp = fopen(filename, "rb")) != NULL)
        fgets(a, sizeof(a), fp);

}