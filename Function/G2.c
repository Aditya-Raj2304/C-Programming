#include <stdio.h>
void main()
{
    int a, b, max;
    printf("\nEnter two numbers : ");
    scanf("%d%d", &a, &b);
    max = greater(a, b);
    printf("\nGreatest number : %d ", max);
}
int greater(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
