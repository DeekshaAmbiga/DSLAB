
#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,pos,search,a[50];
clrscr();
printf("Enter the number of elements:\n");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the searching element:\n",search);
scanf("%d",&search);
pos=-1;
for(i=0;i<n;i++)
{
if(search==a[i])
{
pos=i;
break;
}
}
if(pos>=0)
{
printf("Searching element found,%d is found at the location %d\n",search,i+1);
}
else
{
printf("Searching element not found\n");
}
getch();
}

