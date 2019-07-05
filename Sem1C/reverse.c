#include<stdio.h>
void main()
{
int r, n,temp,  rev=0;
printf("\nEnter a number\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
r=n%10;
n=n/10;
rev=rev*10+r;
}
if(temp==rev)
{
printf("\nThe given number is palindrome");
}
else
{
printf("\nThe number is not palindrome");
}
}
