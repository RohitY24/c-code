#include <stdio.h>
void main()
{
    char *c[2];
    printf("\nEnter\n");
    fgets(*c, 11, stdin);
    printf("\n");
    printf("%s", *c);
    /*fgets(str, 10, stdin);
    getchar();
    scanf();*/
}