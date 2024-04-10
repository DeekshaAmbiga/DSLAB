#include<stdio.h>
void towerofhanoi(int n,char from_rod,char to_rod,char aux_rod)
{
if(n==1)
{
printf("\nMove disk %d from rod %c to rod %c",n,from_rod,to_rod);
return;
}
towerofhanoi(n-1,from_rod,aux_rod,to_rod);
printf("\nMove disk %d from rod %c to rod %c",n,from_rod,to_rod);
towerofhanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{
int n=3;
clrscr();
towerofhanoi(n,'A','C','B');
getch();
return 0;
}
