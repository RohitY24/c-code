#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char str[20];
    int i = 0, j, check = 0, alpha = 0;
    printf("\nEnter the string\n");
    fflush(stdin);
    fflush(stdout);
    fgets(str, 20, stdin);
    while (i <= 20)
    {
        if ((str[i] != ' ') || (str[i] != '\0'))
        {
            check = str[i];
            if (((check >= 65) && (check <= 90)) || ((check >= 97) && (check <= 122)))
            {
                alpha += 1;
            }
        }
        i++;
    }
    printf("\nNumber of Aplhabets=%d\n", alpha);
}