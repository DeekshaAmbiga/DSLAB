#include<stdio.h>
#include<conio.h>
struct node
{
int data;
struct node*next;
};
struct node*front;
struct node*rear;
void insert();
void delete();
void display();
void main()
{
int choice;
clrscr();
while(choice!=4)
{
printf("\n*****MAIN MENU*****\n");
printf("\n===========\n");
printf("\n1.Insert an element\n2.Delete an element\n3.Display an element\n4.EXIT\n");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:insert();
	break;
case 2:delete();
	break;
case 3:display();
	break;
case 4:exit(0);
	break;
default:printf("\nInvalid choice\n");
}
}
}
void insert()
{
struct node*ptr;
int item;
ptr=(struct node*)malloc(sizeof(struct node));
if(ptr==NULL)
{
printf("\nOVERFLOW\n");
return;
}
else
{
printf("\nEnter value:\n");
scanf("%d",&item);
ptr->data=item;
if(front==NULL)
{
front=ptr;
rear=ptr;
front->next=NULL;
rear->next=NULL;
}
else
{
rear->next=ptr;
rear=ptr;
rear->next=NULL;
}
}
}
void delete()
{
struct node*ptr;
if(front==NULL)
{
printf("\nUNDERFLOW\n");
return;
}
else
{
ptr=front;
printf("Item to be deleted:%d",ptr->data);
front=front->next;
free(ptr);
}
}
void display()
{
struct node*ptr;
ptr=front;
if(front==NULL)
{
printf("\nEmpty queue\n");
}
else
{
printf("\nElements of queue:\n");
while(ptr!=NULL)
{
printf("\n%d\n",ptr->data);
ptr=ptr->next;
}
}
}

