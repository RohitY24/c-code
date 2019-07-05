#include <stdio.h>
void main()
{
    int a[2][2], b[2][2], c[2][2] = {0, 0, 0, 0}, i, j, k;
    printf("\nEnter the elements of 1st Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the elements of 2nd Array\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                c[i][j] += a[i][j] * b[i][j];
            }
        }
    }
    printf("\nThe product of the matrices are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}