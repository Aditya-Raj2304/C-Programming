#include <stdio.h>
void main()
{
    int a;
    printf("\nEnter the  number : ");
    scanf("%d", &a);
    if (a < 0)
        printf("\n%d is negative", a);
    else if (a > 0)
        printf("\n%d is positive", a);
    else
        printf("\n%d is equal to 0", a);
}
