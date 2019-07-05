#include<stdio.h>
void main()
{
int n, a, sum=0;
printf("\nEnter a number\n");
scanf("%d",&n);
while(n>0)
{
a=n%10;
n=n/10;
sum=sum+a;
}
printf("\nSum= %d\n",sum);
}
