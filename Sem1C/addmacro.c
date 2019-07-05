#include<stdio.h>
#define add(a,b)(a+b)
int main()
{
	int i,j,sum;
	printf("\n\n");
	scanf("%d%d",&i,&j);
	sum=add(i,j);
	printf("\n%d",sum);
	return 0;
}
