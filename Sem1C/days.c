#include<stdio.h>
int main()
{
int td,d,m;
printf("\nEnter the number of days\n");
scanf("%d",&td);
m=td/30;
d=td%30;
printf("\nNumber of months=%d and Number of days=%d\n",m,d);
return(0);
}
