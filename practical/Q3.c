#include <stdio.h>
void main()
{
    int a[5], i, max;
    printf("\nEnter the elements\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 0; i < 5; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("\n\nLargest element= %d\n", max);
}