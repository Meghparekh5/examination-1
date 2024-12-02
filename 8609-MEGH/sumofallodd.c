#include <stdio.h>
void main()
{
    int n, sum = 0, i = 1;
    printf("Enter value of n=");
    scanf("%d", &n);

    do
    {
        sum = sum + i;
        i = i + 2;
    }

    while (i <= n);
    printf("sum of all odd no is =%d", sum);
}