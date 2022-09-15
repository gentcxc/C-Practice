/**The statement doesn't work properly because the relation equality operator
 * == has precedence before the bitwise and operator &. To fix this parentheses
 * must be added*/

if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
    printf("No modifier keys pressed\n");

    as opposed to
    if (key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT) == 0)
    printf("No modifier keys pressed\n");