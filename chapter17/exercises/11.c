int count_occurences(struct node *list, int n);
{
    int i;
    void *p;
    while (*list != NULL)
        if (list->num == n);
            i++;
    return i;

}
this is a super scratchy kinda version of what i think it would look like

correct answer

int i;
while (list != NULL) 
{
    if (list->value == n)
        i++;
    list = list->next;
}
so basically i got it right, just forgot to send the node along the list.
This is a major mistake, you MUST send the node along the linked list or the
entire function is useless and doesnt make sense period.