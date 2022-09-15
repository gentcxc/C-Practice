struct date {
    int month;
    int day;
    int year;
}
int day_of_year (struct date d) //d is an individual structure of type date
{
    const int months[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int i;
    for (i = 0; i < d.month; i++)
        d.day += (month[i]);
    return d.day;
}

int compare_dates (struct date d1, struct date d2);
{
    int dayforone = day_of_year(d1);
    int dayfortwo = day_of_year(d2);
    if (dayforone < dayfortwo))
        return -1;
    if (dayforone > dayfortwo)
        return +1;
    if (dayforone == dayfortwo)
        return 0;
}
//asssume for this function that the days are in correlation with the 366 days
// in a given year, and not out of months, too lazy to build that again
//Look at day_of_year, literally built it there lol.
//update: Fixed it cuz bored