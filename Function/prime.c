#include <stdio.h>
#include <math.h>
int prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return 0;
    }

    int i;
    int limit = sqrt(n);
    for (i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);

    if (prime(num))
    {
        printf("%d is a prime numner", num);
    }
    else
    {
        printf("%d is not a prime number", num);
    }
    return 0;
}