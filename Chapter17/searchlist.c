struct node *search_list(struct node *list, int n)
{
    struct node *p
    for (p = list; p != NULL; p = p->next)
        if (p->value == n)
            return p;
    return NULL;
}