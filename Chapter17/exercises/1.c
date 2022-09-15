void my_malloc(size_t byte)
{
    void *p;
    if ((p = malloc(n)) == NULL)
    {
        printf("Null pointer, program will now temrinate");
        exit(EXIT_FAILURE);
    }
    return *p;
}