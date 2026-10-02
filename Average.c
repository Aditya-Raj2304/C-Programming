#include <stdio.h>
void main()
{
    float p, r, t, si, amt;
    printf("\nEnter principal amount : ");
    scanf("%f", &p);
    printf("\nEnter rate of interest : ");
    scanf("%f", &r);
    printf("\nEnter time in year: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    amt = p + si;
    printf("\nSimple Interest : %g", si);
    printf("\nAmount : %g", amt);
}
