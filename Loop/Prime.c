#include <stdio.h>
void main()
{
    int i = 1, n, c = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    printf("\nFactor : ");
    while (i <= n)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            c++;
        }
        i++;
    }
    if (c == 2)
        printf("\n%d is a Prime number", n);
    else
        printf("\n%d is not a Prime number", n);
}
