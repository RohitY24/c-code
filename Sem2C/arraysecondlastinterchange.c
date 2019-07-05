#include <stdio.h>
void main()
{
    int a[10], i, l, se = 0;
    printf("\nHow many elements do you want in the array?\nMaximum limit is 10\n");
    scanf("%d", &l);
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < l; i++)
    {
        printf("%d", a[i]);
    }

    se = a[1];
    a[1] = a[l - 1];
    a[l - 1] = se;
    printf("\nElements swapped, the new element map is:\n");
    for (i = 0; i < l; i++)
    {
        printf("%d\n", a[i]);
    }
}