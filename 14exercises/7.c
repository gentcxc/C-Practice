Let GENERIC_MAX be the following macro:
#define GENERIC_MAX(type)
type type##_max(type x, type y)
{
    return x > y? x: y;
}
a) Show the preprocessor's expansion of GENERIC_MAX(long)
answer: long long_max(long x, long y)
{
    return x >y ? x: y;
}
b) explain why generic_max doesn't work for basic types such as unsigned long
answer: Types including a space character in their name
will not work for this function creation because of the ## operator in
the macro definition, illegally creating a function.

c) Describe a technique that allows us to use generic max with basic types
such as unsigned long, hint dont change the definition.
answer(william): typedef unsigned long u_long;
this answer assigned u_long to the type unsigned long, now making it 
useable in the current macro without changing the macro at all.