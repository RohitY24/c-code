#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[10],i,sum=0,avg;
printf("\nEnter the elements of the array\n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum=sum+a[i];
}
avg=sum/10;
printf("\nAvg=%d",avg);
getch();
}