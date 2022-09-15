int *create_array(int n, int initial_value)
{
    int *p, *p2;
    if ((p = malloc(n * sizeof(int))) = NULL) 
    {
        printf("Malloc Failed");
        return NULL:
    }
    for (p2 = p; p2 < p + n; p++)
        *p2 = initial_value;
    return p;
}
/**
 * this is fordea's answer, we start by making two ineger pointers.
 * after this, we test. If (pointer p equals the size of the array times 
 * the size of integer values ) is equal to a null pointer, print a messgae
 * and return null. If not, meaning that malloc can store this amount of values,
 * for(pointer 2 equals pointer p; when pointer 2 is less than pointer 
 * p + n(this is the array)increment p2)
 * so simply put, here the for statement fills the array up with 
 * the initial_value integer for each spot.