#include <stdio.h>
void main()
{
    int a, b, i, j, t;
    printf("\nEnter first number : ");
    scanf("%d", &a);
    printf("\nEnter second number : ");
    scanf("%d", &b);
    for (j = 1; j <= 10; j++)
    {
        for (i = a; i <= b; i++)
        {
            t = i * j;
            printf("%d X %2d = %2d\t", i, j, t);
        }
        printf("\n");
    }
}
