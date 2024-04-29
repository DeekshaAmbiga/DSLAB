#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,n;
clrscr();
printf("Enter the number of elements:\n",n);
scanf("%d",&n);
printf("The elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Entered elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
printf("\n");
}
getch();
}
