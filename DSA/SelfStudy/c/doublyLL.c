#include <stdio.h>
#include <stdlib.h>
struct node
    {
        struct node * prev;
        int data;
        struct node * next;
    };
struct node *start = NULL;
struct node *p = NULL;

void createlist(int data){
    p = (struct node *)malloc(sizeof(struct node));
    p-> data = data;
    p-> next = NULL;
    if (start == NULL)
    {
        start = p;
    }else{
        struct node *t2 = start;
        while (t2->next != NULL)
        {
            t2=t2->next;
        }
        t2->next = p;
        p->prev = t2;
        // p->next=start;
        // start=p;
    }
}

void displaylist(){
    struct node *t = start;
    if(start == NULL){
        printf("Underflow");
    }else{
        while(t != NULL){
            printf("\nDATA: %d", t->data);
            t = t->next;
        }
    
    }
}


int main(){
    int data;
    int flag = 1;
    while(flag == 1){
        printf("Enter data to add: ");
        scanf("%d", &data);
        createlist(data);
        printf("Do you wish to enter more data?(0 no/1 yes): ");
        scanf("%d",&flag);
    }
    printf("the data entered is: ");
    displaylist();
    return 0;
}