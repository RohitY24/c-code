#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *p, i, sum = 0, avg = 0, n;
    printf("\nEnter the number of elemens of the array:\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + *(p + i);
    }
    avg = sum / n;
    printf("\nSum=%d\nAvg=%d", sum, avg);
}