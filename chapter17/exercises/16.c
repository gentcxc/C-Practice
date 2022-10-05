int sum(int (*f) (int), int start, int end);
{
    int result = 0;
    while (start <= end) {
        result += (*f)(start);
        start++;
    }
    return result;
}

//This solution is william's, I am copying it for understanding purposes
//as this chapter has confused me a lot.