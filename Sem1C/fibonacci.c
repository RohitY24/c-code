#include<stdio.h>
void main()
{
int i,a=0,b=1, sum,c;
printf("\nEnter the limit of the Fibonacci series\n\n");
scanf("%d",&i);
for(c=0;c<=i;c++)
{
sum=a+b;
a=b;
b=sum;
printf("\n%d",sum);
c=sum;
}
}
