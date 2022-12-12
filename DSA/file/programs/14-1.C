#include <stdio.h>
#include <stdlib.h>
struct Node{
  int data;
  struct Node *next;
  struct Node *prev;
};
int getLength(struct Node* node);
void insertStart(struct Node** head, int data){
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = *head;
  newNode->prev = NULL;
  if(*head !=NULL)
    (*head)->prev = newNode;
  *head = newNode; 
}
void insertLast(struct Node** head, int data){
  struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
  newNode->data = data;
  newNode->next = NULL;
  if(*head==NULL){
    *head = newNode;
    newNode->prev = NULL;
    return;
  }
  struct Node* temp = *head;
  while(temp->next!=NULL)
    temp = temp->next;
  temp->next = newNode;
  newNode->prev = temp;
}
void insertAfter(struct Node** head, int n, int data){
    int len = getLength(*head);    
    if(n == 0){
        insertStart(head, data);
        return;
    }
    if(n == len){
        insertLast(head, data);
        return;
    }
    if(n < 0 || n > len) 
        printf("Invalid position to insert\n"); 
    else{ 
        struct Node* newNode = (struct Node*) malloc(sizeof(struct Node)); 
        newNode->data = data;
        newNode->next = NULL;        
        newNode->prev = NULL;        
        struct Node* temp = *head;
        while(--n)
            temp=temp->next;
        (temp->next)->prev = newNode;
        newNode->next= temp->next;
        newNode->prev = temp;
        temp->next = newNode;
    }
}
void display(struct Node* node){ 
    struct Node *end = NULL;
    printf("List in Forward direction: ");
    while (node != NULL) { 
        printf(" %d ", node->data); 
        end = node;
        node = node->next; 
    }
    printf("\nList in backward direction: ");
    while (end != NULL) { 
        printf(" %d ", end->data); 
        end = end->prev; 
    }
}
int getLength(struct Node* node){
    int len = 0;
    while(node!=NULL){
        node = node->next;
        len++;
    }
    return len;
}
int main(){
    struct Node* head = NULL;
    insertStart(&head,20);
    insertStart(&head,10);

    insertLast(&head,40);
    insertLast(&head,90);
    insertLast(&head,60);
    insertAfter(&head,3, 200);    
    display(head); 
    return 0; 
}
