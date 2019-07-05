#include <stdio.h>
int main()
{
    char *array[3] = {'\0', '\0', '\0'};
    int i;
    printf("\nEnter\n");
    for (i = 0; i < 3; i++)
    {
        //scanf("%s", *array[i]);
        fgets(array[i], 20, stdin);
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n%s", array[i]);
    }
    return 0;
}