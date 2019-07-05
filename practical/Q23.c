#include <stdio.h>
void main()
{
    FILE *fpr;
    char str[100];
    fpr = fopen("test.txt", "r");
    if (fpr == NULL)
    {
        puts("Issue in opening the input file");
    }
    while (1)
    {
        if (fgets(str, 10, fpr) == NULL)
            break;
        else
            printf("%s", str);
        printf("\n");
    }
    fclose(fpr);
}