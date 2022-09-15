let TOUPPER be the following macro:
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
Let s be a string and let i be an int variable. Show the output produced 
by each of the following program fragments
a)
    strcopy(s, "abcd");
    i=0;
    putchar(TOUPPER(s[++i]));
  //result: BCD

b)strcpy(s, "0123");
i=0;
putchar(TOUPPER(S[++i]));  

//result: 123

/** ANSWER:
These results are both wrong, since toupper runs ++i three times for both
strings, since toupper runs through ++i three times for both.
the macro ends up printing the third macro in the string, so D for the
first, and 3 for the second.