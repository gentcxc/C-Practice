6. 
unsigned short swap_bytes(unsigned short i);
{
    unsigned short leftbits = (i >> 8);
    unsigned short rightbits = (i << )
}


unsigned short swap_bytes(unsigned short i)
{
    return (i <<8 | i >> 8);
}
/**This works for 6 because what happens here. The first 8 bits move to the 
 * left 8 bits, essentially "kicking" the left bits off, so it only prints the
 * first 8. Then it returns the leftmost 8 bits "kicking" the rightmost
 * bits off, so everyone is happy and making this function more complex
 * by creating unnecessary unsigned short ints is a waste of time.
 * */

unsigned int rotate_left(unsigned int i, int n);
{
    return (i << n ) | i >> (sizeof(int) * 8) - n)
}

unsigned int rotate_right(unsigned int i, int n)
{
    return (i << (sizeof(int) * 8)-n) | (i >> n);
}

/* The statement "return (i << n)", first returns the bits shifted to the
left, "kicking", off any of the bit values that used the be the leftmost.
Next, it returns, "i >> (sizeof(int) * 8) - n)".
                              ^
                              |
                              |
                        returns 4(byte size of int)
                        an integer is therefore 32 bits long

Therefore, it moves basically the majority of the number off the "right edge"
until only
the numbers that were kicked off are tacked on at the end of the return
statement.

*/

13. what effect does the following statement have on the bits in n?
n&= n-1

//N's rightmost bit gets removed, if this is repeated n will be decremented until it is nothing. rest
//in peace n, you will not be forgotten.


When stored according to the IEEE floating-point standard, a float value consists 
of a 1-bit sign (the leftmost -- or most significant -- bit), an 8-bit exponent, 
and a 23-bit fraction, in that order. Design a structure type that occupies 32 bits, with bit-field
 members corresponding to the sign, exponent, and fraction. Declare the bit-fields to have 
type unsigned int. Check the manual for your compiler to determine the order of the bit-fields.
struct float
{
    unsigned int fraction: 23;
    unsigned int exponent: 8;
    unsigned int sign: 1;
};
/**Explained: Since the fraction is to the rightmost of the bit field, naturally, the fraction
 * is established first, then the exponent, and then the main sign, AKA the most important, and
 * leftmost number. I forgot about the regular colun that establishes bit size, but this is 
 * just a reminder i suppose. Return to this when referencing structures and bit fields!
 * Btw this is williams answer, the messiah.
 * 
 * */

15. - Refer to williams github
/**The reason that this occurs is because the int in the structure is not necessarily a signed
 * or unsigned int, therefore, a compiler may attribute the flag value 1 as a sign bit, 
 * producing 1 or -1 accordingly. (I am pretty sure a sign bit is the leftmost bit, but idk how
 * that could lead to -1 being displayed, research further? )
 * To fix this issue you need to add a type specifier of unsigned int, in english, 
 * make the integer an unsigned int and you will be chilling hard, problem solved.
 * a sign bit returns whether the sign of an int is negative! BUT, WHY WOULD AN UNSIGNED
 * INT TYPE SPEC CHANGE THE POSSIBILITY OF THE COMPILER MISINTERPRETING THIS????! 
 * After reading fordea's explanation, I have returned with more knowledge goodies. My 
 * interpretation is that with unsigned bits, believe it or not, this may shock you(me).
 * THEY HAVE NO SIGN BIT, THAT IS WHY THEY ARE CALLED UNSIGNED. NOW THAT IS PURE GENIUS!
 * K AND R should be handed trophies of pure gold for such a straightforward and genius type spec.
 * PS. Yes I feel stupid for not noticing that but who am I to read words and process what they mean?
 * */