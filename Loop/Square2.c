#include <stdio.h>
void main()
{
    int i = 1, n, sq;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        sq = i * i;
        printf("\nSquare of %d = %d", i, sq);
        i++;
    }
}
