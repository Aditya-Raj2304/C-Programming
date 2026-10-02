#include <stdio.h>
void main()
{
    float bs, da, hra, ts;
    printf("\nEnter Basic Salary : ");
    scanf("%f", &bs);
    da = (bs * 25) / 100;
    hra = (bs * 15) / 100;
    ts = bs + da + hra;
    printf("\nBasic Salary : %f", bs);
    printf("\nDA : %f", da);
    printf("\nHRA : %f", hra);
    printf("\nTotal Salary : %f", ts);
}
