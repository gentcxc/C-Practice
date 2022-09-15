int *find_largest(int a[], int n)
{
    int i, *p = &i, b;
    for (i = 0; i < n; i++)
    {
        if (b < a[i])
            b = a[i];
    }
    return *p;
}