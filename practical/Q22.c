#include <stdio.h>
struct student
{
    int rollno;
    char name[30];
    int m1;
    int m2;
    int m3;
    int total;
};
void main()
{
    int i, total, sum = 0, avg[10], n;
    struct student s[10];
    printf("\nHow many records?\tMax=10\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the details of the %dst student", n);
        scanf("%d", &s[i].rollno);
        scanf("%s", s[i].name);
        scanf("%d", &s[i].m1);
        scanf("%d", &s[i].m2);
        scanf("%d", &s[i].m3);
    }
    for (i = 0; i < n; i++)
    {
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        sum = sum + s[i].total;
        avg[i] = sum / 3;
    }
    printf("\nThe details with Total and Average marks are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", s[i].rollno);
        printf("%s\n", s[i].name);
        printf("%d\n", s[i].m1);
        printf("%d\n", s[i].m2);
        printf("%d\n", s[i].m3);
        printf("%d\n", s[i].total);
        printf("%d\n\n", avg[i]);
    }
}