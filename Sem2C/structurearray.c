#include <stdio.h>
struct db
{
    char sname[30];
    char section;
    int fees;
};
void main()
{
    int i, l;
    struct db s[10];
    printf("\nHow many records you want to enter?\n");
    scanf("%d", &l);
    for (i = 0; i < l; i++)
    {
        printf("\n\nEnter the details\n");
        printf("\nName:");
        scanf("%s", s[i].sname);
        fflush(stdin);
        printf("\nSection:");
        scanf("%s", &s[i].section);
        printf("\nFees:");
        scanf("%d", &s[i].fees);
    }
    printf("\n\nThe details in the database entered are:\n");
    for (i = 0; i < l; i++)
    {
        printf("%s", s[i].sname);
        printf("\t%c", s[i].section);
        printf("\t%d\n", s[i].fees);
    }
}