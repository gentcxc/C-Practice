#include <stdio.h>

typedef int (*pooburger)(int, int);
typedef int (*twoints)(int, int);
int add(int a, int b);
void arraymath(int *a, int *b, int len, twoints f);

int main (void)
{
    int a[]={1,2,3,4,5};
    int b[]={1,2,3,4,5};
    pooburger pingle = add;
    printf("5 + 6 : %d\n\n", pingle(5,6));
    arraymath(a, b, 5, add);
    return 0;

}
int add(int a, int b)
{
    return a + b;
}
void arraymath(int *a, int *b, int len, twoints f)
{
    for (int i = 0; i < len; i++)
        printf("%d + %d : %d\n", a[i], b[i], f(a[i], b[i]));
}