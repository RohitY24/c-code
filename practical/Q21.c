#include <stdio.h>
#include <string.h>
void main()
{
    char st[20], ch;
    int i, l;
    printf("\nEnter the string\n");
    scanf("%s", st);
    l = strlen(st);
    printf("Original String:  %s\n", st);
    for (i = 0; i < l / 2; i++)
    {
        ch = st[i];
        st[i] = st[l - 1 - i];
        st[l - 1 - i] = ch;
    }
    printf("\nReverse String is : %s\n", st);
}