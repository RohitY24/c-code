#include <stdio.h>
void test(int *a, int m, int n);
void main()
{
    int a[2][2], *p, i, j;
    p = &a[0][0];
    printf("\nEnter the elements of the array\t(2x2)\n");

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", (p + i * 2 + j));
        }
    }
    test(&a[0][0], 2, 2);
}
void test(int *a, int m, int n)
{
    printf("\nThe elements of the array are:\n");
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\n%d", *(a + i * 2 + j));
        }
    }
    printf("\n\n");
}