#include <stdio.h>
#include <malloc.h>
void main()
{
    int i = 1, n, sum = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("\nSum of natural number : %d", sum);
}
