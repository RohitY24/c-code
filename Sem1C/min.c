#include<stdio.h>
int main()
{
int h,m,tm;
printf("\nEnter the hours and Minutes\n");
scanf("%d%d",&h,&m);
tm=(h*60)+(m%60);
printf("\nThe total number of minutes is %d\n",tm);
return(0);
}
