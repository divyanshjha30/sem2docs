#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int calcSize(struct Node* node){
    int size=0;

    while(node!=NULL){
        node = node->next;
        size++;
    }
    return size;
}

void deletee(struct Node** head, int pos)
{
    struct Node* temp = *head;
    struct Node* previous;

    int size = calcSize(*head);

    if(pos<1 || pos>size){
        printf("Enter valid position\n");

        return;
    }

    if(pos==1){
        *head = temp->next; //changing head to next in the list
        printf("Value %d, deleted \n",temp->data);

        free(temp);
        return;
    }

    while (--pos) 
    {
      
        previous = temp; 
        temp = temp->next; 
    }


    previous->next = temp->next;
    printf("Value %d, deleted \n",temp->data);

    free(temp);
}

void display(struct Node* node){

    while(node!=NULL)
    {
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n\n");
}

int main()
{
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL;
    struct Node* node5 = NULL;
    struct Node* node6 = NULL;

    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node)); 
    node5 = (struct Node*)malloc(sizeof(struct Node));
    node6 = (struct Node*)malloc(sizeof(struct Node));

   
    head->data  = 22; // data set for head node 
    head->next  = node2; // next pointer assigned to address of node2 

    node2->data = 30; 
    node2->next = node3; 

    node3->data = 24;
    node3->next = node4; 

    node4->data = 20;
    node4->next = node5; 
   
    node5->data = 16;
    node5->next = node6;

    node6->data = 12;
    node6->next = NULL;

    printf("Linked List Before Operations : "); 
    display(head);

    deletee(&head,1);
    deletee(&head,3);
    deletee(&head,4);
    
    printf("Linked List After Operations : ");
    display(head);

    deletee(&head,-2); // not valid as pos negative
    deletee(&head,10); // not valid as breaches size of Linked List
    printf("Linked List After Operations : ");
    display(head);

    return 0; 
}
