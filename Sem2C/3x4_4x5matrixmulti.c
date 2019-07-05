#include <stdio.h>
void main()
{
    int a[3][4], b[4][5], c[4][5] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, i, j, k;
    printf("\nEnter the elements of 1st Array\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] < 0)
            {
                printf("\nPlease enter the element again, no Negatives please...");
                j -= 1;
            }
        }
    }
    printf("\nEnter the elements of 2nd Array\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
            if (b[i][j] < 0)
            {
                printf("\nPlease enter the element again, no Negatives please...");
                j -= 1;
            }
        }
    }
    printf("\nProduct:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nThe product of the matrices are:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}