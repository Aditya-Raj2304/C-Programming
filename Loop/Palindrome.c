#include <stdio.h>
void main()
{
    int r, num, n, rev = 0;
    printf("\nEnter the number : ");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (num == rev)
        printf("\n %d is an Palindrome number", num);
    else
        printf("\n %d is not an Palindrome number", num);
}
