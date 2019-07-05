#include <stdio.h>
void main()
{
    int no, a, n, sum = 0, i = 0, array[8];
    printf("\n Enter a number:");
    scanf("%d", &no);
    while (no > 0)
    {
        a = no % 10;
        no = no / 10;
        array[i] = a;
        i++;
    }
    for (n = 1; n < i; n += 2)
    {
        sum = sum + array[n];
    }
    printf("\n Sum= %d\n", sum);
}