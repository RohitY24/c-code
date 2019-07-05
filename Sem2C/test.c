#include <stdio.h>
int main()
{
    char str[8], choice;
    printf("\n\nEnter\n\n");
    fgets(str, 8, stdin);
    printf("%s", str);
    printf("\nENter");
    scanf("%c", &choice);
    printf("%c", choice);

    return 0;
}