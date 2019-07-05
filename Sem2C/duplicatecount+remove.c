#include <stdio.h>
void main()
{
    int a[10], i, j, k, n, count = 0;
    printf("\n\nEnter the size of the array\n");
    scanf("%d", &n);
    printf("\n\nEnter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n\nBefore duplicate removal\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d\n", a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] == a[i])
            {
                count = count + 1;
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("\n\nAfter duplicate values removed:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\nTotal number of duplicate entries removed: %d\n", count);
}