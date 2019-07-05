#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("\nEnter the number\n");
	scanf("%d",&n);
	f=fact(n);
	printf("\nFactorial= %d",f);
}
int fact(int a)
{
int f=1;
	if(a==1)
		return 1;
	else
		f=a*fact(a-1);
		return f;
}
