For each of the following macros, give an example that illustrates a problem
with the macro and show how to fix it.
a) #define AVG(x,y) (x+y)/2)
b) #define AREA(x,y) (x)*(y)

/* My answer:
a) I do not know how to illustrate the problems, but for the first one,
x and y should in in seperate parentheses, with parentheses covering the
entirety of the equation, ((x)+(y)/2)
for b, it should all be encapsulated as well. ((x)*(y))
*/

/*Williams reasons: 
a) This will incorrectly follow standard order of operations:
(1+1-2+2) will evaluate to 2 rather than the wanted -2.
b)25/AREA(5,5) will incorrectly evaluate to 25 rather than predicted 1, 
following standard order of operations, placing parentheses around the
entire definition should fix this problem.