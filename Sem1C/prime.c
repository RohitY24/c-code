#include<stdio.h>
void main()
{
int n, c, pv=1;
printf("\nEnter the number");
scanf("%d",&n);
for(c=2;c<n;c++){
if(n%c==0)
{
pv=0;
break;
}}
if(pv==1)
printf("\n%d is prime number ",n);
else if(pv==0)
printf("\n%d is not prime number",n);
}
