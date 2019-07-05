#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a, i, p, sum = 0, avg = 0;
    printf("Enter the number of elements\n");
    scanf("%d", &p);
    a = (int *)calloc(p, sizeof(int));
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < p; i++)
    {
        scanf("%d", a + i);
    }
    for (i = 0; i < p; i++)
    {

        sum = sum + *(a + i);
    }
    avg = sum / p;
    printf("\nSum=%d\nAverage=%d\n", sum, avg);
}