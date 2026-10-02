#include <stdio.h>
void main()
{
    float p, r, t, si, total;
    printf("\nEnter the principle amount : ");
    scanf("%f", &p);
    printf("\nEnter rate of interest : ");
    scanf("%f", &r);
    printf("\nEnter time (in years) : ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("\nSimple Interest : %f", si);
    total = si + p;
    printf("\nTotal Amount : %f", total);
}
