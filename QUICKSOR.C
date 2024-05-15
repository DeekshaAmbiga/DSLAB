#include<stdio.h>

//function to swap elements
void swap(int *a,int *b)
{
int t=*a;
*a=*b;
*b=t;
}
//function to find the partition position\
int partition(int array[],int low,int high)
{
//select the rightmost element as pivot
int pivot=array[high];
//pointer for greater element
int i=(low-1);
//traverse each element of the array
//compare them with the pivot
int j;
for(j=low;j<high;j++)
{
if(array[j]<=pivot)
{
//if element smaller than pivot is found
//swap it with the greater element pointed by i
i++;
//swap element at i with element atr;
swap(&array[i],&array[j]);
}
}
//swap the pivot6 element with the greater element at i
swap(&array[i+1],&array[high]);
//return the partition point
return (i+1);
}
void quickSort(int array[],int low,int high)
{
if(low<high)
{
int pi=partition(array,low,high);
//recursive call on the left of pivot
quickSort(array,low,pi-1);
//recursive call on the right of pivot
quickSort(array,pi+1,high);
}
}
//function to print array elementa
void printArray(int array[],int size)
{
int i;
for(i=0;i<size;++i)
{
printf("%d",array[i]);
}
printf("\n");
}
//main function
void main()
{
int n,arr[20],i;
clrscr();
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter %d elements:\n",n);
for(i=0;i<n;++i)
{
scanf("%d",&arr[i]);
}
printf("Unsorted array\n");
printArray(arr,n);
//perform quickSort on data
quickSort(arr,0,n-1);
printf("Sorted array in ascending order:\n");
printArray(arr,n);
getch();
}
