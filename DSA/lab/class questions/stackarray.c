#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX], top = -1;

void push(int item){
    if(top == MAX-1){
        printf("\nOverflow\n\n");
        return;
    } else{
        top++;
        stack[top] = item;
        printf("\n%d inserted at position %d\n\n",item,top);
    }
    return;
}

int pop(){
    if(top == -1){
        printf("\nStack is empty\n\n");
        return -1;
    } else{
        int item = stack[top];
        top--;
        return item;
    }
}

int peek(){
    if(top == -1){
        printf("\nStack is empty\n\n");
        return -1;
    } else{
        return stack[top];
    }
}

void traverse(){
    for (int i = top; i >=0 ; i--)
    {
        printf("\n%d",stack[i]);
    }
}

int main(){
    int item,ch,popval,peekval;
    while(1){
        fflush(stdin);
        printf("\n\n1. PUSH\n2. POP\n3. PEEK\n4. TRAVERSE\n-999. EXIT\nENTER CHOICE: ");
        scanf("%d",&ch);
        if(ch == -999){
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