#include <stdio.h>

void reverse(struct node *top){
    struct node *current = top;
    struct node *prev = NULL;
    struct node *next = NULL;

    while (current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    top = prev;
    struct node *t = top;
    while (t->next!=NULL)
    {
        printf("%d",t->data);
        t = t->next;
    }
}