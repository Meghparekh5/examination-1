#include <stdio.h>
void main()
{

    int i = 1, count = 0, n;
    printf("Enter value of n= ");
    scanf("%d", &n);
    while (i <= n)
    {
        i++;
        count = count + 1;
    }
    printf("no of digit is =%d", count);
}