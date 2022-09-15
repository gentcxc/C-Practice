void find_two_largest(const int *a, int n, int *largest, int *second_largest);
{
    int i;
    for (; a < (a+n); a++)
        if (*largest < *a)
            *largest = *a;
    for (a = 0; a < (a + n); a++)
        if (*second_largest < *a && *second_largest < *largest)
            *second_largest = *a;
}
/*Although my above written function would most likely work;
I awknowledge williams program as better than mine, and would like to
display it so that i may learn from it.
*/
void find_two_largest(const int *a, int n, int *largest, int *second_largest) {

    const int *p = a;
    *largest = *second_largest = *a;
    
    while (p++ < a + n) {
        if (*p > *largest) {
            *second_largest = *largest;
            *largest = *p;
        } else if (*p > *second_largest)
            *second_largest = *p;
    }
}
/*Here william establishes a second point for the array pointer which is
a, and then sets all parameters equal to one another, presumably at
value 0. after this, he tests the values of each array, if p is bigger
than largest, second_largest will inherit largest's current value, and 
then largest will gain the new value directly after. Afterwards, he has 
an else as a failsafe that tests p again second largest just in case
the array number is greater than second largest but not largest, and
assigns it to second largest if those specific conditions are met.
very easy, in theory, to understand this program, that being said i could
not think of it myself and love william's version.