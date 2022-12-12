#include <stdio.h>
#include <stdlib.h>
struct node
    {
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
        t2->next=p;
        // p->next=start;
        // start=p;
    }
}

void displaylist(){
    struct node *t = start;
    if(start == NULL){
        printf("\nUnderflow");
    }else{
        while(t != NULL){
            printf("\nDATA: %d", t->data);
            t = t->next;
        }
    }
}

void deleteLLElement(int choice){
    if(start == NULL){
        printf("\nUnderflow");
        return;
    }
    if (choice==0)
    {
        //start
        start = start->next;
        printf("first node deleted");
        return;
    }
    else if (choice == -1)
    {
        //last
        struct node * t3 = start;
        while (t3->next->next != NULL)
        {
            t3 = t3->next;
        }
        t3->next = NULL;
        printf("Last Node Deleted");
        return;
    }
    else
    {
        //position
        struct node * t4 = start;
        struct node * prev = NULL;
        int i = 0;
        choice--;
        while (i<=choice && t4->next!=NULL)
        {
            prev = t4;
            t4 = t4->next;
            i++;
        }if (t4!=NULL)
        {
            prev->next = t4->next;
            printf("\nNode deleted");
        }else{
            printf("\nwrong position entered");
        }
        return;
    }
}

int main(){
    int data;
    while(1){
        printf("\nEnter data to add(-999 to exit): ");
        scanf("%d", &data);
        if (data==-999)
        {
            break;
        }
        
        createlist(data);
    }
    printf("\nthe data entered is: ");
    displaylist();
    int ans = 0;
    printf("\nDo you want to delete and element?(0 for no/1 for yes): ");
    scanf("%d",&ans);
    if(ans==1){
        int choice = -1;
        printf("\nWhich node do you want remove?(0 for first node / -1 for last node / or enter the position): ");
        scanf("%d",&choice);
        deleteLLElement(choice);
    }
        displaylist();

    return 0;
}