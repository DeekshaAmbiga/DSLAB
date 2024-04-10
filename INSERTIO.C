
#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,j,n,temp;
clrscr();
printf("Enter the number of elements:\n",n);
scanf("%d",&n);
printf("The elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
temp=a[i];
j=i-1;
while(j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j=j-1;
}
a[j+1]=temp;
}
printf("Sorted elements are:\n");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
printf("\n");
}
getch();
}







