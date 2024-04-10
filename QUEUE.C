#include<stdio.h>
#include<conio.h>
#define MAX 5
int front=-1,rear=-1,item,q[MAX];
void qinsert()
{
if(rear>=MAX-1)
printf("\nQueue is full!!");
else
{
printf("Enter an element to be inserted into queue:");
scanf("%d",&item);
if(front==-1)
front=0;
rear=rear+1;
q[rear]=item;
}
}
void qdelete()
{
int d;
if(front==-1)
printf("Queue is Empty!!");
else
{
d=q[front];
if(front==rear)
front=rear=-1;
else
front=front+1;
printf("\nDeleted element is :%d",d);
}
}
void qdisplay()
{
int i;
if(front==-1)
printf("Queue is Empty!!");
else
{
printf("\nContent of the queue:\t");
for(i=front;i<=rear;i++)
printf("%d\t",q[i]);
}
}
void main()
{
int ch;
clrscr();
do
{
printf("\n*****MENU*****");
printf("\n1.Insert");
printf("\t2.Delete");
printf("\t3.Display");
printf("\t4.Exit");
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:qinsert();
	break;
case 2:qdelete();
	break;
case 3:qdisplay();
	break;
case 4:printf("\nEXIT");
	break;
default:printf("\nInvalid option");
	break;
}
}
while(ch!=4);
getch();
}

