#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d ", i);
        i++;
    }
}
