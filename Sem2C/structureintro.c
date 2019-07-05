#include <stdio.h>
struct studentdb
{
    int rollno;
    char name[30];
    int fees;
    char section;
};
void main()
{

    struct studentdb s1 = {1, "Rohit", 100000, 'A'};
    struct studentdb s2 = {2, "Rakshita", 100000, 'A'};
    printf("\nThe values in the studentdb structure are:\n");
    printf("\n Roll No.: %d \tName: %s \tFees: %d \tSection: %c \t", s1.rollno, s1.name, s1.fees, s1.section);
    printf("\n\n Roll No.: %d \tName: %s \tFees: %d \tSection: %c \t", s2.rollno, s2.name, s2.fees, s2.section);
}