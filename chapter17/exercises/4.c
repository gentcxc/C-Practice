p = (struct rectangle *) malloc(sizeof(struct rectangle));
p->upper_left = {10,25};
p->lower_right = {20,15};

or 

    p->upper_left.x = 10;
    p->upper_left.y = 25;
    p->lower_right.x = 20;
    p->lower_right.y = 15;

