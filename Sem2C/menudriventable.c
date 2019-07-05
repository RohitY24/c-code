#include <stdio.h>
void main()
{
    int a, i, j;
    char choice;

    do
    {
        printf("\nEnter the number to print it's table\n");
        scanf("%d", &a);
        printf("\n");
        for (i = 0; i < 11; i++)
        {
            printf("%d * %d = %d\n", a, i, a * i);
        }
        printf("\nDo you want to print the table again?\nY-Yes\nN-No\n");
        scanf("%s", &choice);

    } while (choice == 'Y' || choice == 'y');
}