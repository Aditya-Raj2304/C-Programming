#include <stdio.h>
void main()
{
    int d, m, y;
    printf("\nEnter number of days : ");
    scanf("%d", &d);
    y = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    printf("\n%d Year %d Months %d Days", y, m, d);
}
