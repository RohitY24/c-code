#include<stdio.h>
void main()
{
	int a[10],i,j,n=10,temp;
	printf("\nEnter the elements\n");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	printf("\nSorted elements are\n");
	for(i=0;i<10;i++)
	{
	for(j=0;j<10;j++)
	{
	if (a[j]>a[j+1])
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	}
	}
	printf("\nElements:\n");
	 for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}	
}
