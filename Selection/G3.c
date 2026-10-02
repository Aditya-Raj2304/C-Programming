#include <stdio.h>
void main()
{
    int a, b, c;
    printf("\nEnter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
        printf("\nGreatest number : %d", a);
    else if (b > c)
        printf("\nGreatest number : %d", b);
    else
        printf("\nGreatest number : %d", c);
}
