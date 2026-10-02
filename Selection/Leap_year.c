#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter an year : ");
    scanf("%d",&a);
    if(a%100==0)
    {
        if(a%400==0)
             printf("%d year is a leap year",a);
        else
             printf("%d year is not a leap year",a);
    }
    else
    {
        if(a%4==0)
             printf("%d year is a leap year",a);
        else
             printf("%d year is not a leap year",a);
    }
}
