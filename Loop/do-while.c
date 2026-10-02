#include <stdio.h>
void main()
{
    int i = 0, n, sum = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    do
    {
        sum = sum + i;
        i++;
    } while (i <= n);
    printf("\nSum of natural numbers = %d", sum);
}
