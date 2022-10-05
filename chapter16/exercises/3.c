#include <stdio.h>
double make_complex(void)

int main(void)
{

    struct complex{
        double real;
        double imaginary;
    }
    c1,
    c2,
    c3;

    
}
c) struct complex make_complex(double a, double b)
    {
        return (struct complex) {real, imaginary};
    }
    //C99 + exclusive
    /**This function has struct complex as a precursor because the function
     * returns the type of struct complex.
     */ 
d) struct complex add_complex(void)
    {
        struct complex newcomplex;
        newcomplex.real = complex.real;
        newcomplex.imaginary = complex.imaginary
        return newcomplex;
    }