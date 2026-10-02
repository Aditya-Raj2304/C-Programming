#include <stdio.h>
int main()
{
    int d, m, y;
    printf("Enter number of Days : ");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    printf("\n%dd Years %d Months %d Days", y, m, d);
    return 0;
}
