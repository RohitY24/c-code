#include<stdio.h>
void main()
{
int s,l,b,r,area,choice;
printf("\nEnter the choice\n1. Area of Square\n2. Area of Rectangle\n3. Area of Circle\n");
scanf("%d",&choice);
switch(choice)
{
case 1: printf("\nEnter the side");
scanf("%d",&s);
area=s*s;
printf("\nThe area of the Square is %d",area);
break;
case 2: printf("\nEnter the length and breadth of the rectangle");
scanf("%d%d",&l,&b);
area=l*b;
printf("\nThe area of the rectangle id %d",area);
break;
case 3: printf("\nEnter the radius of the circle\n");
scanf("%d",&r);
area=3.14*r*r;
printf("\nThe area of the circle id %d",area);
break;
default: printf("\nYou entered a wrong choice. Please review the menu and try again...\n");
break;
}
}
