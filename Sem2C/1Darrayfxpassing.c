#include <stdio.h>
void display(int *a, int m);
void main()
{
    int a[10], i, limit, *p = a;
    printf("\nEnter the number of elements in the array\n");
    scanf("%d", &limit);
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < limit; i++)
    {
        scanf("%d", p + i);
    }
    display(a, limit);
}
void display(int *a, int n)
{
    int j;
    printf("\nElements:\n");
    for (j = 0; j < n; j++)
    {
        printf("%d\n", *(a + j));
    }
}