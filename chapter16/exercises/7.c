#include <stdio.h>
//for this specific i will use typedef because i dont wanna write struct a 
//million times
//didn't finish the printfs but all the functions and everything should
//be correct, 
typedef struct 
{
    int numerator;
    int denominator;
} fraction;
int find_gcd(int n1, int n2);
fraction reduce(fraction f1);
fraction add_fractions(fraction f1, fraction f2);
fraction subtract_fractions(fraction f1, fraction f2);
fraction multiply_fraction(fraction f1, fraction f2);
fraction divide_fraction(fraction f1, fraction f2);

int main(void)
{
    fraction frac1 = {10, 5};
    fraction frac2 = {15, 3};
    printf("The Fractions: %d/%d  %d/%d",);
    printf("A) Fraction Reduced:     %d/%d | %d/%d",);
    printf("B) Fraction Added:       %d/%d",);
    printf("C) Fractions Subtracted: %d/%d",);
    printf("D) Fractions Multiplied: %d/%d",);
    printf("E) Fractions Divided:    %d/%d",);

    return 0;
}

int find_gcd(int n1, int n2)
{
    int temporary;

    while (n1 != 0)
    {
        temporary = n2 % n1;
        n2 = n1;
        n1 = temp;
    }
    return n2;
}

fraction reduce(fraction f1)
{
    int gcd = find_gcd(f1.numerator, f1.denominator);
    f1.numerator /= gcd;
    f1.denominator /= gcd;
    return f1;
}

fraction add_fractions(fraction f1, fraction f2)
{
    f1.numerator *= f2.denominator;
    f2.numerator *=f1.denominator;
//was going to skip this but you need to cross multiply to ensure compatibility
    fraction result = {
        f1.numerator + f2.numerator,
        f1.denominator + f2.denominator
    };
    result = reduce(result);
    return result;
}

fraction subtract_fractions(fraction f1, fraction f2)
{
    f1.numerator *= f2.denominator;
    f2.numerator *= f1.denominator;
    fraction result = {
        f1.numerator - f2.numerator,
        f1.denominator - f2.denominator
    };
    result = reduce(result);
    return result;
}

fraction multiply_fraction(fraction f1, fraction f2)
{
    fraction result = {
        f1.numerator * f2.numerator,
        f1.denominator * f2.denominator
    };
    result = reduce(result);
    return result;
}

fraction multiply_fraction(fraction f1, fraction f2)
{
    fraction result = {
        f1.numerator * f2.denominator,
        f1.denominator * f2.numerator
    };
    result = reduce(result);
    return result;
}
