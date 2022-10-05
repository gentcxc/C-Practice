Write a macro DISP(f,x) that expands into a call of printf that displays
the value of the function f when called with argument x. For example,
DISP(sqrt, 3.0);
should expand into 
printf("sqrt(%g) = %g\n", 3.0, sqrt(3.0));
/
/
/
#define DISP(f, x) printf("#f(%g) = %g\n", x, f(x))
//this is wrong, i need parentheses, forgot it was a macro and needed so many
correct version: 
#define DISP(f,x) (printf((#f) "(%g) = %g\n", (x), (f(x)))

 
b)Write a macro DISP2(f,x,y) that's similar to DISP but works for functions 
with two arguments.

#define DISP(f,x,y) (printf((#f) "(%g) and (%g) = (%g) and (%g)\n", (x), (y),\
                                                    (f(x)), (f(y)))

This version works just fine.