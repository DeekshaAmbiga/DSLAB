#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,temp,arr[20];
clrscr();
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter %d integer values:\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
//sort the array ina scending order
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
//swap arr[j] and arr[j+1]
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("sorted array in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d\t",arr[i]);
}
printf("\n");
getch();
}