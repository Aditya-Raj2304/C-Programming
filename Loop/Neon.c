#include <stdio.h>
void main()
{
    int i = 0, n, sq, sum = 0, r, num;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    n = num;
    for (sq = n * n; sq != 0; sq /= 10)
    {
        r = sq % 10;
        sum = sum + r;
    }
    if (sum == num)
        printf("\n%d is a Neon Number.", num);
    else
        printf("\n%d is not a Neon Number.", num);
}
