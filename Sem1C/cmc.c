#include<stdio.h>
int main()
{
float cm,mm,m;
printf("\nEnter the length in centimetres\n");
scanf("%f",&cm);
mm=cm*10;
m=cm/100;
printf("\n%f mm and %f m\n",mm,m);
return(0);
}
