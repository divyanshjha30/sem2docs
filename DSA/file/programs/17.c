#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
int data;
struct list *link;
}*top=NULL;
void push(int m)
{
struct list *tmp;
tmp=(struct list *)malloc(sizeof(struct list));
tmp->data=m;
tmp->link=NULL;
tmp->link=top;
top=tmp;
}
void pop()
{
struct list *tmp;
if(top==NULL)
printf("\n\nSTACK IS EMPTY");
else
{
tmp=top;
printf("\n\nDELETED IS ELEMENT %d",tmp->data);
top=top->link;
free(tmp);
}
}
void disp()
{
struct list *q;
if(top==NULL)
printf("\n\nSTACK IS EMPTY");
else
{
q=top;
while(q!=NULL)
{
printf("%d->",q->data);
q=q->link;
}
}
}
void main()
{
int i,n,ch;
do
{
printf("\n\nMENU");
printf("\n\n1.PUSH ");
printf("\n\n2.POP ");
printf("\n\n3.DISPLAY ");
printf("\n\n4.EXIT");
printf("\n\nENTER UR CHOICE");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("\n\nENTER THE NUMBER");
scanf("%d",&n);
push(n);
break;
case 2:
pop();
break;
case 3:
printf("\n\nSTACK ELEMENTS ARE \n\n");
disp();
break;
case 4:
exit(0);
}
}
while(ch!=4);
}