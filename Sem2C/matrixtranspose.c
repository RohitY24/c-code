#include <stdio.h>
void main()
{
    int a[2][2], i, j;
    printf("\nEnter the elements\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
}