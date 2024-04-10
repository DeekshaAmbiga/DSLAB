
#include<stdio.h>
#include<conio.h>
void main()
{
int arr[15],i,j,min,n,temp;
clrscr();
printf("Enter the number of elements:\n",n);
scanf("%d",&n);
printf("The elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n+1;i++)
{
min=i;
for(j=i+1;j<n;j++)
{
if(arr[min]>arr[j])
min=j;
}
if(min!=i)
{
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
}
printf("Sorted arrays in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
getch();
}
