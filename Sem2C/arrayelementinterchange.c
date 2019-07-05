#include <stdio.h>
void main()
{
    int a[10], i, l, f, temp, t, l1;
    printf("\nHow many elements do you want in the array?\nMaximum limit is 10\n");
    scanf("%d", &l);
    temp = l;
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe elements before interchanging them:\n");
    for (i = 0; i < l; i++)
    {
        printf("%d\n", a[i]);
    }
    for (t = 0; t < (temp / 2); t++)
    {
        f = a[t];
        a[t] = a[l - 1 - t];
        a[l - 1 - t] = f;
    }
    printf("\nElements swapped, the new element map is:\n");
    for (i = 0; i < l; i++)
    {
        printf("\n%d\n", a[i]);
    }
}