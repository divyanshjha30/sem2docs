#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
};
int getLength(struct Node* node);

void insert(struct Node** head, int data){

    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = *head;
    newNode->prev = NULL;

    if(*head !=NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

void deleteStart(struct Node** head)
{
    struct Node* temp = *head;
  
    if(*head == NULL){
        printf("Linked List Empty, nothing to delete\n");
        return;
    }
    
    if(temp->next == NULL){
        printf("%d deleted\n", temp->data);
        *head = NULL;
        return;
    }
    *head = (*head)->next;
    
    (*head)->prev = NULL;
    
    printf("%d deleted\n", temp->data);
    free(temp);
}

void deleteLast(struct Node** head){
    struct Node* temp = *head;

    if(*head == NULL){
        printf("Linked List Empty, nothing to delete\n");
        return;
    }
    if(temp->next == NULL){
        printf("%d deleted\n", temp->data);
        *head = NULL;
        return;
    }
    
    while (temp->next != NULL) 
        temp = temp->next; 
    
    struct Node* secondLast = temp->prev;
    
    secondLast->next = NULL;
    
    printf("%d deleted\n", temp->data);
    free(temp);
}

void deleteNthNode(struct Node** head, int n){
    int len = getLength(*head);
    
    
    if(n < 1 || n > len){
        printf("Enter valid position\n");
        return;
    }
    
    if(n == 1){
        deleteStart(head);
        return;
    }
    
    if(n == len){
        deleteLast(head);
        return;
    }
    
    struct Node* temp = *head;
    
   
    while (--n){
        temp = temp->next; 
    }
    
    struct Node* previousNode = temp->prev; // (n-1)th node
    struct Node* nextNode = temp->next; // (n+1)th node
    
    previousNode->next = temp->next;

    nextNode->prev = temp->prev;
    
    printf("%d deleted \n", temp->data);
    free(temp);
}
int getLength(struct Node* node){
    int len = 0;
    

    while(node!=NULL){
        node = node->next;
        len++;
    }
    
    return len;
}

void display(struct Node* node) 
{ 
    struct Node *end = NULL;
    
    printf("List in Forward direction: ");
    while (node != NULL) { 
        printf(" %d ", node->data); 
        end = node;
        node = node->next; 
    }
    
    printf("\nList in backward direction:");

    while (end != NULL) { 
        printf(" %d ", end->data); 
        end = end->prev; 
    }
    printf("\n\n");
}

int main()
{
    struct Node* head = NULL;

    insert(&head,9);
    insert(&head,5);
    insert(&head,18);
    insert(&head,9);
    insert(&head,10);
    insert(&head,40);
  
    display(head);
    
    deleteStart(&head);
    display(head);
        
    deleteLast(&head);
    display(head);

    deleteNthNode(&head, 3);
    display(head);    
    
  
    deleteNthNode(&head, 1);
    display(head);
    
    deleteLast(&head);
    display(head);
    
    deleteStart(&head);
    display(head);
    
    return 0; 
}
