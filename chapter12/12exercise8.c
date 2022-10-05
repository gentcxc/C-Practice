void store_zeroes(int a[], int n)
{
    int *p;
    for(p = a; p < (a + n); p++)
        *p = 0;
}