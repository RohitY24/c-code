#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, n, num, *p, loc = 0;
    printf("\nEnter the number of elements of the array\n");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }
    printf("\nEnter the element to search\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == *(p + i))
        {
            printf("%d is present at location %d", num, i + 1);
        }
    }
    if (i == n)
    {
        printf("\nNumber is not in array");
    }
    free(p);
}