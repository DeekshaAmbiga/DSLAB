#include<stdio.h>
#include<conio.h>
void main()
{
int arr[10],i,j,n,merge;
clrscr();
printf("enter the number of elements:",n);
scanf("%d",&n);
printf("The elements are:\n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
mergesort(arr,0,n-1);
printf("Sorted arrays in ascending order:\n");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
getch();
}
void merge(int arr[],int beg,int mid,int end)
{
int i,j,k;
int n1=mid-beg+1;
int n2=end-mid;
int leftarr[5],rightarr[8];
for(i=0;i<n1;i++)
{
leftarr[i]=arr[beg+i];
}
for(j=0;j<n2;j++)
{
rightarr[j]=arr[mid+1+j];
}
i=0;
j=0;
k=beg;
while(i<n1&&j<n2)
{
if(leftarr[i]<=rightarr[j])
{
arr[k]=leftarr[i];
i++;
}
else
{
arr[k]=rightarr[j];
j++;
}
k++;
}
while(i<n1)
{
arr[k]=leftarr[i];
i++;
k++;
}
while(j<n2)
{
arr[k]=rightarr[j];
j++;
k++;
}
}
int mergesort(int arr[],int beg,int end)
{
if(beg<end)
{
int mid=(beg+end)/2;
mergesort(arr,beg,mid);
mergesort(arr,mid+1,end);
merge(arr,beg,mid,end);
}
return 0;
}
