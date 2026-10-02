#include <stdio.h>
void main()
{
    int n, r, max = 0, min = 9;
    printf("\nEnter the number : ");
    scanf("\n%d", &n);
    while (n != 0)
    {
        r = n % 10;
        if (r > max)
            max = r;
        if (r < min)
            min = r;
        n = n / 10;
    }
    printf("\nSmallest digit : %d", min);
    printf("\nLargest digit : %d", max);
}
