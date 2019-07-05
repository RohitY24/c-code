#include <stdio.h>
void main()
{
    int i, j, limit;
    printf("\nEnter the number of rows to be printed\n");
    scanf("%d", &limit);
    for (i = 1; i <= limit; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}