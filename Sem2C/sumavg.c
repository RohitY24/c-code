#include <stdio.h>
void main()
{
    int a[10], i, sum = 0, avg = 0;
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 10; i++)
    {

        sum = sum + a[i];
    }
    avg = sum / 10;
    printf("\nSum=%d\nAverage=%d", sum, avg);
}
