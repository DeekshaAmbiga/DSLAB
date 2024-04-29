#include<stdio.h>
#include<conio.h>
#define MAX 3
int top=-1,item;
char stack_string[MAX];
void pushChar(char item);
char popChar(void);
int isEmpty(void);
int isFull(void);
int main()
{
char str[MAX];
int i;
clrscr();
printf("Input a string:");
scanf("%s",str);
for(i=0;i<strlen(str);i++)
{
pushChar(str[i]);
}
for(i=0;i<strlen(str);i++)
{
str[i]=popChar();
}
printf("Reversed string is:%s",str);
getch();
return 0;
}
void pushChar(char item)
{
if(isFull())
{
printf("Stack is full!!!\n");

}
top=top+1;
stack_string[top]=item;
}
char popChar()
{
char str;
if(isEmpty())
{
printf("Stack is Empty!!");
//return 0;
}

item=stack_string[top];
top=top-1;
return item;

}
int isEmpty()
{
if(top==-1)
return 1;
else
return 0;
}
int isFull()
{
if(top==MAX-1)
return 1;
else
return 0;
}