#include<stdio.h>
#include<conio.h>
#define MAX 4
int top=-1;
int stack[20];
void push();
void pop();
void display();
void main()
{
int abc=1,ch;
clrscr();
while(abc)
{
printf("Stack\n");
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Display\n");
printf("Enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
	break;
case 2:pop();
	break;
case 3:display();
	break;
default:printf("Invalid choice");
	break;
}
printf("continue?1/0(Yes/No):");
scanf("%d",&abc);
}
getch();
}
void push()
{
int X;
printf("Enter the element to be inserted:");
scanf("%d",&X);
if(top>=MAX-1)
{
printf("OVERFLOW\n");
return;
}
else
{
top=top+1;
stack[top]=X;
}
}
void pop()
{
int X;
if(top<0)
{
printf("UNDERFLOW\n");
return;
}
else
{
X=stack[top];
top=top-1;
printf("Deleted element is:%d\n",X);
}
}
void display()
{
int i;
if(top==-1)
{
printf("No element\n");
return;
}
for(i=top;i>=0;i--)
printf("%d\t",stack[i]);
}

