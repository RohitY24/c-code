#include<stdio.h>
void main()
{
int a,b,c,d;
a=3;
b=5;
c=a,b;
d=(a,b);
printf("%d  %d",c,d);
}
