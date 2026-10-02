#include <stdio.h>
void main()
{
    int r, n, rev = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    printf("\nReverse of the digits of number %d : %d", n, rev);
}
