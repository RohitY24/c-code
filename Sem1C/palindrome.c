#include<stdio.h>
int main()
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
printf("\nThe given number is a palindrome number\n");
}
else
{
printf("\nThe number is not a palindrome number\n");
}
return 0;
}
