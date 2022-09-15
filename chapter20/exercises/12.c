/**the function does not work as expected because the addition operator + 
 * has precedence over the bitwise shift operator <<. Enclosing the operation
 * in parentheses fixes this issue:
 * */

unsigned short create_short(unsigned char high_byte, unsigned char low_byte)
{
    return (high_byte << 8) + low_byte;
}