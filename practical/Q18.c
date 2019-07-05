#include <stdio.h>
void main()
{
    int i = 0, j = 0;
    char s1[10], s2[10];
    printf("\nEnter the first string\n");
    scanf("%s", s1);
    printf("\nEnter the second string\n");
    scanf("%s", s2);
    while (s1 != '\0')
    {
        s2[i] = s1[i];
        i++;
    }
    for (i = 0; i < 10; i++)
    {
        if (s1[i] != s2[i])
        {
            printf("\nStrings unequal");
        }
    }
    while (s1[i] == s2[j] && s1[i] == '\0' && s2[j] == '\0')
    {
        i++;
        j++;
    }
    if (s1[i] = s2[j])
    {
        printf("\nEqual String");
    }
}