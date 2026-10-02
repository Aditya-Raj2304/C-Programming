#include <stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter first numbers : ");
    scanf("%d", &a);
    printf("\nEnter second numbers : ");
    scanf("%d", &b);
    c = a > b ? a : b;
    printf("\nGreatest number : %d", c);
    return 0;
}
