#include<stdio.h>
#define volume(l,b,h)(l*b*h)
int main()
{
	int v,l,b,h;
	scanf("%d%d%d",&l,&b,&h);
	v=volume(l,b,h);
	printf("\n%d\n",v);
	return 0;
}

