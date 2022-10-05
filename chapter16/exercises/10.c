struct point {int x, y;};
struct rectangle { struct point upper_left, lower_right; };

/**
 * This function gets the are of a rectangle, I stole the formula from 
 * William because i didnt know area formula and how to articulate it.
 * In this function it performs math on the x and y values and returns 
 * the results as a rectangle structure
 **/
struct rectangle area(struct rectangle r)
{
    return ((r.lower_right.x - r.upper_left.x) 
    *(r.lower_right.y - r.upper_left.y)
}
/**
 * This is my most likely incorrect equations to get to return the center
 * of the rectangle as a point structure set of coords
 * */
struct point center(struct rectangle r)
{
    return (struct point){((r.upper_left.x - r.lower_right.x),
    (r.upper_left.y - r.lower_right.y))}
}

struct rectangle move(struct rectangle r, int move_x, int move_y)
{
    if (move_x > 0)
    {
        r.upperleft.x += move_x;
        r.lower_right.x += move_x;
    }
    if (move_x < 0)
    {
        r.upper_left.x -= move_x;
        r.lower_right.x -= move_x;
    }
    if (move_y > 0)
    {
        r.upper_left.y += move_y;
        r.lower_right.y += move_y;
    }
    if (move_y < 0)
    {
        r.upper_left.y -= move_y;
        r.lower_right.y -= move_y;
    }
    return r;
}
/**
 * Here, p is compared to every point in the rectangle, if all of these
 * conditions are met the boolean function will return type true, otherwise,
 * it will return false, if point p is not in the function
 * */
bool is_within_rect(struct rectangle r, struct point p)
{
    return (p.x > r.upper_left.x && p.x < r.lower_right.x &&
    p.y < r.upper_left.y && p.y > r.lower_right.y);
}