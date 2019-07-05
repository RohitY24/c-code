#include <stdio.h>
void main()
{
    int a[10], g, i, j, n = 10, temp, choice;
    printf("\n\nArrange in ascending order or descending order?\n");
    scanf("%d", &choice);
    printf("\nHow many elements to enter? Max limit=10\n");
    scanf("%d", &g);
    printf("\nEnter the elements\n");
    for (i = 0; i < g; i++)
    {
        scanf("%d", &a[i]);
    }

    if (choice == 1)
    {
        printf("\nSorted elements are\n");
        for (i = 0; i < g; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
    else if (choice == 0)
    {
        printf("\nSorted elements are\n");
        for (i = 0; i < g; i++)
        {
            for (j = 0; j < i; j++)
            {
                if (a[j] < a[j + 1])
                {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    printf("\nElements:\n");
    for (i = 0; i < g; i++)
    {
        printf("%d\n", a[i]);
    }
}
