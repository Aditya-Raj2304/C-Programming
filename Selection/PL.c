#include <stdio.h>
int main()
{
    int cp, sp, p, l;
    printf("\nEnter cost price : ");
    scanf("%d", &cp);
    printf("\nEnter selling price : ");
    scanf("%d", &sp);
    if (cp > sp)
    {
        l = cp - sp;
        printf("\nLoss : %d", l);
    }
    else if (sp > cp)
    {
        p = sp - cp;
        printf("\nProfit : %d", p);
    }
    else
        printf("\nNo Profit No Loss");
    return 0;
}
