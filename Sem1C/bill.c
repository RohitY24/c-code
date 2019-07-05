#include<stdio.h>
void main()
{
float units, total, excess;
printf("\nEnter the units consumed\n");
scanf("%f",&units);
if(units<=200)
{
total=units*3.25;
}
else if(units<=400)
{
excess=units-200;
total=(200*3.25)+(excess*4.15);
}
else if(units<=600)
{
excess=units-400;
total=(200*3.25)+(200*4.15)+(excess*5.05);
}
else{
excess=units-600;
total=(200*3.25)+(200*4.15)+(200*5.05)+(excess*5.75);
}
printf("\n\nTotal charges are %f",total);
}
