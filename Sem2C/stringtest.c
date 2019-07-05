#include <stdio.h>
void main()
{
    int i;
    char test[3][10];
    printf("\nEnter the name of any BADE LOG...\n");
    for (i = 0; i < 3; i++)
    {
        scanf("%s", test[i]);
    }
    printf("\n\n\nThe name of the Bade log you entered are:\n");
    for (i = 0; i < 3; i++)
    {
        printf("\n%s", test[i]);
    }
    printf("\n\nYou entered some real good shit... ;) \n");
}