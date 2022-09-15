double inner_product(const double *a, const double *b, int n);
{
    double sum, temp, temp2; 
    for (a=n; a < (a+n); a++, b++)
    {
        temp = *a;
        temp2 = *b;
        sum += (temp+temp2);
    }
    return sum;
}
i misinterpretted, you must use multiplication

Williams program:

double inner_product(const double *a, const double *b, int n) {

    double sum;
    int i = 0;

    while (i++ < n)
        sum += *a++ * *b++;

    return sum;
}
/*This works because we initiate sum as the sum, and i as an incremental
value for the "for" loop, for every value that is less than the last value in
the array, sum will add product of the 2 values that pointer a and b
are pointing to, before incrementing them and returning into the
for loop again, at the end finally returning sum to the double function.