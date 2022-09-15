unsigned int rotate_left(unsinged int i, int n);
{
    return (i << n) | (i >> (sizeof(int) * 8) - n);
}