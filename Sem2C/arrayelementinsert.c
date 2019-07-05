#include <stdio.h>
void main()
{
    int a[10], i, l, new, newloc, b[2], temp = 0;
    char choice, choice2;
    printf("\nHow many elements do you want in the array?\nMaximum limit is 10\n\n");
    scanf("%d", &l);
    temp = l;
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < l; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nThe elements of the array are:\n");
    for (i = 0; i < l; i++)
    {
        printf("%d\n", a[i]);
    }
choice:
    printf("\nDo you want to insert more elements to it?\nY\tN\n");
    scanf("%s", &choice);
    switch (choice)
    {
    case 'Y':
    case 'y':
        printf("\nEnter the element that you want to insert\n");
        scanf("%d", &new);
        printf("\nEnter the element location in the array\n");
        scanf("%d", &newloc);
        for (i = l + 1; i >= newloc; i--)
        {
            a[i + 1] = a[i];
        }
        a[newloc] = new;
        l = l + 1;
        printf("\nElement inserted\nNew elements are\n");
        for (i = 0; i < temp + 1; i++)
        {
            printf("\n%d", a[i]);
        }

        break;

    case 'N':
    case 'n':
        printf("\nNo elements inserted\nDo you want to see the elements again\nYes\tNo");
        scanf("%s", &choice2);
        if (choice2 == 'Y' || choice2 == 'y')
        {
            for (i = 0; i < l; i++)
            {
                printf("%d\n", a[i]);
            }
        }
        break;
    default:
        printf("\nYou entered a wrong choice. Please try again\n");
        goto choice;
        break;
    }
}