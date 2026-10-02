#include <stdio.h>
void main()
{
    int num, n, r, sum = 0;
    printf("\nEnter the number : ");
    scanf("%d", &num); // num=153
    n = num;
    while (n != 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    } // n=0
    if (num == sum)
        printf("\n %d is an Armstrong number", num);
    else
        printf("\n %d is not an Armstrong number", num);
}
