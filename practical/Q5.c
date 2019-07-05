#include <stdio.h>
void fx(int a[], int n);
void main()
{
    int a[8], i;
    printf("\nEnter the elements\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }
    fx(a, 8);
}
void fx(int a[], int n)
{
    int i;
    printf("\n\nThe Elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
}