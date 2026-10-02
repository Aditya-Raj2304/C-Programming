#include <stdio.h>
void main()
{
    int i, n, num, sq, r, sum = 0;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    num = n;
    for (sq = n * n; sq != 0; sq /= 10)
    {
        r = sq % 10;
        sum = sum + r;
    }
    i++;
    {
        if (sum == num)
            printf("\n%d is a Neon Number", num);
        else
            printf("\n%d is a not Neon Number", num);
    }
}
