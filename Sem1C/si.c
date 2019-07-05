#include<stdio.h>
int main()
{
float p,r,t,si;
printf("\nENTER THE VALUES OF PRINCIPAL, RATE AND TIME\n");
scanf("%f%f%f",&p,&r,&t);
si=p*r*t;
printf("The Simple Interest is Rs. %f",si);
return(0);
}

