#include <stdio.h>
#include <string.h>
void main()
{
    int k = 0;
    char str[10], *p, chare;
    printf("\nEnter the string\n");
    scanf("%s", str);
    printf("\nEnter the charecter to find occurence\n");
    scanf("%s", &chare);
    p = strchr(str, chare);
    while (p != NULL)
    {
        k = k + 1;
        p = strchr(p + 1, chare);
    }
    printf("\nTotal occurence=%d\n", k);
}