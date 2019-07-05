#include<stdio.h>
void main(){
int a,b,c;
printf("\nEnter the three numbers\n");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
if(a>c)
{
printf("\n%d is greater\n",a);
}
else
{
printf("\n%d is greater\n",c);
}
}
else
{
if(b>c)
{
printf("%d is greater\n",b);
}
else
{
printf("\n%d is greater\n",c);
}
}
}
