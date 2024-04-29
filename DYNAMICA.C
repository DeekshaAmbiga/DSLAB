#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
int*data,min,max;
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
data=(int*)calloc(n,sizeof(int));
if(data==NULL)
{
printf("Error!!!Memory not allowed");
exit(0);
}
for(i=0;i<n;i++)
{
printf("Enter number %d:",i+1);
scanf("%d",data+i);
}
min=max=data[0];
for(i=0;i<n;i++)
{
if(data[i]<min)
{
min=data[i];
}
if(data[i]>max)
{
max=data[i];
}
}
printf("Smallest number is:%d\n",min);
printf("Largest number is:%d\n",max);
free(data);
getch();
}