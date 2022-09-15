a)  typedef struct
{
    double real;
    double imaginary;
} complex;

b) complex c1, c2, c3;

//c
complex make_complex(double real, double imaginary)
{
    return (complex) {real, imaginary};
}

//d

complex add_complex(complex a, complex b)
{
    return (complex) {a.real + b.real, a.imaginary + b.imaginary}
}