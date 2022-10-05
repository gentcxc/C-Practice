
struct date{
    int month;
    int day;
    int year;
};

int day_of_year(struct date d);
//returns the day of the year (int between 1 and 366 , corresponds to date
int compare_dates(struct date d1, struct date d2);
//Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later date than d2
//and 0 if d1 and d2 are the same.