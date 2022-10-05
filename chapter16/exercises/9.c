struct color {
    int red;
    int green;
    int blue;
};
struct color make_color(int red, int green, int blue)
{
    struct color madecolor;
    if (red < 0)
        red = 0;
    if (red > 255)
        red = 255;
    if (green < 0)
        green = 0;
    if (green > 255)
       green = 255;
     if (blue < 0)
        blue = 0;
    if (blue > 255)
        blue = 255;
    madecolor = {red, green, blue};
    return madecolor;
}
int getRed(struct color c) //returns integer of red value
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2); 
//Tests if structures are same color, if so return true
{
    (color1.red == color2.red && 
     color1.green == color2.green &&
     color1.blue == color2.blue ? return 1: return 0)
}
struct color brighter(struct color c)
{
    if (c.red == 0 && c.green == 0 && c.blue == 0)
    {
        c = {3,3,3};
        return c;
    }

    if (c.red > 0 && c.red < 3)
        c.red = 3;
    if (c.green > 0 && c.green < 3)
        c.green = 3;
    if (c.blue > 0 && c.green < 3)
        c.blue = 3

    c.red /= 0.7;
    c.green /= 0.7;
    c.blue /= 0.7;

    if (c.red > 255)
        c.red = 255;
    if (c.green > 255)
        c.green = 255;
    if (c.blue > 255)
        c.blue = 255;
    
    return c;
}
struct color darker(struct color c);
{
    c.red *= 0.7;
    c.green *= 0.7;
    c.blue *= 0.7;
    return c;
}