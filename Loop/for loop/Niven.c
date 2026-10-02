#include <stdio.h>
void main()
{
    int n, i, sum = 0, r, num;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    num = n;
    for (i = 0; n != 0; n /= 10)
    {
        r = n % 10;
        sum = sum + r;
    }
    if (num % sum == 0)
        printf("\n%d is a Niven Number", num);
    else
        printf("\n%d is not a Niven Number", num);
}
