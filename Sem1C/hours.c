#include<stdio.h>
int main()
{
int tm,m,h;
printf("\nEnter the number of minutes\n");
scanf("%d",&tm);
h=tm/60;
m=tm%60;
printf("\nThe number of hours=%d and Number of minutes=%d\n",h,m);
return(0);
}
