#include <stdio.h>
void sumavg(int sa[], int n);
void main()
{
    int sa[10], i, sum = 0, avg = 0;
    printf("\nEnter the elements of the array\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &sa[i]);
    }
    sumavg(sa, 10);
}
void sumavg(int sa[], int n)
{
    int i, sum = 0, avg = 0;
    for (i = 0; i < 10; i++)
    {

        sum = sum + sa[i];
    }
    avg = sum / 10;
    printf("\nSum=%d\nAverage=%d", sum, avg);
}