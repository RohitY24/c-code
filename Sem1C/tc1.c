#include<stdio.h>
int main()
{
int pen,pencil,eraser,tc;
printf("\nEnter the value of one pen, pencil, and eraser\n");
scanf("%d%d%d",&pen,&pencil,&eraser);
tc=(5*pen)+(9*pencil)+(8*eraser);
printf("\nTotal cost is %d\n",tc);
return(0);
}
