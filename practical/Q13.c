#include <stdio.h>
#include <stdlib.h>
void main()
{
    int *a, i, n;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);
    a = (int *)calloc(n, sizeof(int));
    printf("\nEnter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    printf("\nThe elements entered are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(a + i));
    }
}