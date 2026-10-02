#include <stdio.h>
void main()
{
    int n, f;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    f = factorial(n);
    printf("\nFactorial of %d : %d", n, f);
}
int factorial(int x)
{
    if (x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}
