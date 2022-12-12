#include <stdio.h>

struct node * concatenate(struct node *top1, struct node *top2){
    struct node *t = top1;
    while(t->next!=NULL){
        t = t->next;
    }
    
    t->next = top2;
    struct node *newtop = top1;
    return newtop;
}