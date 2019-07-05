#include <stdio.h>
void main()
{
    int A[25], i, n, num;
    printf("\nEnter the number of elements of the array\n(To be less than 25)\n");
    scanf("%d", &n);
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("\nEnter the element to search\n");
    scanf("%d", &num);
    for (i = 0; i < n; i++)
    {
        if (num == A[i])
        {
            printf("%d is present at location %d", num, i);
        }
    }
    if (i == n)
    {
        printf("\nNumber is not in array");
    }
}