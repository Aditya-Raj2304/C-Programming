#include <stdio.h>
void main()
{
    int x, y, n;
    printf("\nEnter the number : ");
    scanf("%d", &x);
    printf("\nEnter the power : ");
    scanf("%d", &n);
    y = power(x, n);
    printf("\n%d to power %d : %d", x, n, y);
}
int power(int x, int n)
{
    if (n == 1)
        return x;
    else
        return x * power(x, n - 1);
}

