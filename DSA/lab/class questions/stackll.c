#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct node{
    int data;
    struct node *next;
};

struct node *top  = NULL;
struct node *t;

void push(int item){
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    p->next = NULL;
    if(top == NULL){
        top = p;
        printf("\n%d Pushed into stack.\n",item);
    } else{
        p->next = top;
        top = p;
        printf("\n%d Pushed into stack.\n",item);
    }
}

int pop(){
    if(top == NULL){
        printf("\nUnderflow - Stack is empty");
        return -1;
    } else{
        int item = top->data;
        top = top->next;
        return item;
    }
}

int peek(){
    if(top == NULL){
        printf("\nUnderflow - Stack is empty.");
        return -1;
    } else{
        return top->data;
    }
}

void traverse(){
    if(top == NULL){
        printf("\nUnderflow - Stack is empty.");
    } else{
        t = top;
        while (t!=NULL)
        {
            printf("\n%d",t->data);
            t=t->next;
        }
    }
}

int main(){
    int item,ch,popval,peekval;
    while(1){
        fflush(stdin);
        printf("\n\n0. EXIT\n1. PUSH\n2. POP\n3. PEEK\n4. TRAVERSE\nENTER CHOICE: ");
        scanf("%d",&ch);
        if(ch == 0){
            break;
        }
        switch (ch)
        {
        case 1:
            fflush(stdin);
            printf("\nEnter the number to push: ");
            scanf("%d",&item);
            push(item);
            break;
        case 2:
            popval = pop();
            printf("\n%d popped from stack\n\n",popval);
            break;
        case 3:
            peekval = peek();
            printf("\n%d is at top\n\n",peekval);
            break;
        case 4:
            traverse();
            break;
        default:
            printf("\nwrong value entered\n\n");
            break;
        }
    }
    return 0;
}