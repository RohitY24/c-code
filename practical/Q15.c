#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    int choice, i, c, l1, l2;
    char a[20], b[10];
    printf("\nEnter first string\n");
    scanf("%s", a);
    printf("\nEnter second string\n");
    scanf("%s", b);
    printf("\nChoose any operation out of String copy(1), concatenate(2), compare(3), length(4), upper(5), lower(6)");
    scanf("%d", &choice);
    printf("\nYour choice is %d\n", choice);
    switch (choice)
    {
    case 1:
        strcpy(a, b);
        printf("\n%s\n", a);
        break;
    case 2:
        strcat(a, b);
        printf("\n%s\n", a);
        break;
    case 3:
        c = strcmp(a, b);
        if (c == 0)
            printf("\nStrings equal\n");
        else
            printf("\nUnequal strings\n");
        break;
    case 4:
        l1 = strlen(a);
        l2 = strlen(b);
        printf("String A length= %d \t String B length= %d ", l1, l2);
        break;
    case 5:
        printf("%s\n", strlwr(a));
        printf("%s\n", strlwr(b));
        break;
    case 6:
        printf("%s\n", strupr(a));
        printf("%s\n", strupr(b));
        break;
    default:
        printf("\nYou entered a wrong choice\n");
    }
}