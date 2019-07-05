#include <stdio.h>
struct studentdb
{
    int rollno;
    char Name[20];
    char section;
    int fees;
};
void main()
{
    int t, i;
    printf("Enter how many student records you want to enter?\n");
    scanf("%d", &t);
    struct studentdb s[t];
    for (i = 1; i <= t; i++)
    {
        printf("\nEnter Roll No.: ");
        scanf("%d", &s[i].rollno);
        printf("\nEnter Name of the student: ");
        scanf("%s", s[i].Name);
        printf("\nEnter section of student: ");
        scanf("%s", &s[i].section);
        printf("\nEnter fees of student: ");
        scanf("%d", &s[i].fees);
    }
    printf("\n\nDetails of Students are\n\n");
    for (i = 1; i <= t; i++)
    {

        printf("%d", s[i].rollno);
        printf("\t");
        printf("%s", s[i].Name);
        printf("\t");
        printf("%c", s[i].section);
        printf("\t");
        printf("%d", s[i].fees);
        printf("\n");
    }
    printf("\n\n");
}