#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*link;
};
struct node*top=NULL;
void push()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node));
printf("Enter the element to be inserted to the stack:");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(top==NULL)
	top=ptr;
else
{
 ptr->link=top;
 top=ptr;
}
}
void pop()
{
struct node*temp;
if(top==NULL)
{
printf("\nStack is empty..\n");
return;
}
else
{
 temp=top;
 printf("\nItem to be deleted:%d",temp->data);
 top=top->link;
 free(temp);
}
}
void show()
{
struct node*temp;
if(top==NULL)
{
printf("\nStarck is empty..\n");
}
else
{
printf("\nElement of stack:");
temp=top;
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
printf("NULL");
}
}
void main()
{
int ch;
clrscr();
do
{
printf("\n***MENU***");
printf("\n1.Push");
printf("\t2.Pop");
printf("\t3.Show");
printf("\t4.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:show();
	break;
case 4:printf("\nExit");
	break;
default:printf("\nInvalid choice");
	break;
}
}
while(ch!=4);
getch();
}