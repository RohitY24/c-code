#include<stdio.h>
void main()
{
int i,f=1, n;
printf("\nEnter a number to find its factorial\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("\nFactorial= %d\n",f);
}
