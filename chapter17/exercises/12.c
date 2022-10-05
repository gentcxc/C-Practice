struct node *find_last(struct node *list, int n);
{
    i++
    while (*list != NULL)
        if (list->value == n);
            i++;
    

    i = 0 ? return NULL;
}
since i pretty much only know how to do the second part, i will refer to and 
explain williams solution to this problem to demonstrate understanding

struct node *find_last(struct node *list, int n) {
    struct node *answer = NULL;
    while (list != NULL) {
        if (list->value == n)
            answer = list;
        list = list->next;
    }
    return answer;
}

/**  First, williams establishes a new node, called *answer, and assigns it
 * the NULL value. Next, he starts a while loop, so while the list pointer
 * is not equal to null(end of the list).
 * During this loop, if the list's value is equal to the n parameter,
 * the answer pointer will be assigned to that list pointer.
 * after this, the list pointer will increment. After this loop is finished
 * it will return the answer pointer, which will be equal to the last node
 * where n was, but also will return no if n never showed up in the list
 * , due to declaring it equal to null in the beginning of the function.