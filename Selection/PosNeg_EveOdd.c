#include<stdio.h>
void main()
{
    int a;
    printf("\nEnter a number : ");
    scanf("%d",&a);
    if(a>0)
    {
        if(a%2==0)
            printf("\n%d is a positive and even number.",a);
        else
            printf("\n%d is a positive and odd number.",a);
    }
    else
    {
        if(a%2==0)
            printf("\n%d is a negative and even number.",a);
        else
            printf("\n%d is a negative and odd number.",a);
    }
}
