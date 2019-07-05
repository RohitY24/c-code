#include <stdio.h>
void main()
{
    int marks[3][5], i, j;
    char *sub[3] = {'\0', '\0', '\0'};
    char *studentname[5] = {'\0', '\0', '\0', '\0', '\0'};
    printf("\nEnter the subjects whose marks are to be entered\n");
    for (i = 0; i < 3; i++)
    {
        fgets(*sub[i], 20, stdin);
    }
    printf("\nEnter the names of the students\n");
    for (i = 0; i < 5; i++)
    {
        fgets(*studentname[i], 40, stdin);
        // scanf("%s", *studentname[i]);
    }
    printf("\n\nEnter the marks of the students\n");
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the marks of %s\n", *sub[i]);
        for (j = 1; j < 6; j++)
        {
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\t\t\t\tMARKSHEET\n\n");
    printf("\t");
    for (i = 0; i < 5; i++)
    {
        printf("%s\t", *studentname[i]);
    }
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        printf("%s\t", *sub[i]);
        for (j = 0; j < 5; j++)
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }
}