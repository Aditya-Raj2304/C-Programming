#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("\nEnter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? a > c ? a : c : b > c ? b
                                        : c;
    printf("\nGreatest number : %d", max);
    return 0;
}
