#include <stdio.h>
void main()
{
    int count, i = 0;
    char s1[10], s2[10];
    printf("\nEnter the string\n");
    fgets(s1, 10, stdin);
    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        count += 1;
        i++;
    }
    printf("\n%s is the copied string\n", s2);
}