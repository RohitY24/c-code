#include <stdio.h>
void main()
{
    char choice;
    int a[2][2], b[2][2], i, j, c[2][2] = {0, 0, 0, 0}, k;
    printf("\nChoose any matrix operation out of Addition, Subtraction, Take Transpose, or Multiplication\na\ts\tt\tm\n\n");
    fflush(stdin);
    scanf("%c", &choice);
    printf("\nYour choice is %c\n", choice);
    switch (choice)
    {
    case 'a':
    case 'A':
        printf("\nEnter the elements of first matrix\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the elements of second matrix\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nAddition Result:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", a[i][j] + b[i][j]);
            }
            printf("\n");
        }
        break;
    case 's':
    case 'S':
        printf("\nEnter the elements of first matrix\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("\nEnter the elements of second matrix\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nSubtraction Result:\n");
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                printf("%d\t", a[i][j] - b[i][j]);
            }
            printf("\n");
        }
        break;
    case 't':
    case 'T':
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
        break;
    case 'm':
    case 'M':
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
        break;
    }
}