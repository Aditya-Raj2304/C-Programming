#include <stdio.h>
void main()
{
    int r, n, d, c = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        c++;
        n = n / 10;
    }
    printf("\nNumber of digits : %d", c);
}
