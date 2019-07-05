#include<stdio.h>
void main()
{
int c,l,b,area,h;
printf("\nEnter the choice as per the menu options...\n1. Area of rectangle\n2. Area of square\n3. Area of circle\n4. Volume of cube\n5. Volume of cuboid\n\n\n");
scanf("%d",&c);
switch(c){
case 1: printf("\nEnter the length and breadth of the rectangle\n");
scanf("%d%d",&l,&b);
area=l*b;
printf("\nArea of rectangle= %d square units\n",area);
break;
case 2: printf("\nEnter the length of side\n");
scanf("%d",&l);
area=l*l;
printf("\nThe area of square is %d square units\n",area);
break;
case 3: printf("\nEnter the radius of circle\n");
scanf("%d",&l);
area=3.14*l*l;
printf("\nArea of circle is %d square units\n",area);
break;
case 4: printf("\nEnter the length of the edge\n");
scanf("%d",&l);
area=l*l*l;
printf("\nThe volume of cube is %d cubic units\n");
break;
case 5: printf("\nEnter the length, breadth and the height of the cuboid\n");
scanf("%d%d%d",&l,&b,&h);
area=l*b*h;
printf("\nThe area of cuboid is %d cubic units\n",area);
break;
default:printf("\nYou entered a wrong choice. Please try again\n");
break;
}
}
