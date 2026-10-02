#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    if(n%3==0)
    printf("\n%d is divisible by 3",n);
    else
        printf("\n%d is not divisible by 3",n);
}
