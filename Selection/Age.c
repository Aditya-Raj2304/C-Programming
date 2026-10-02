#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter the age of the person : ");
    scanf("%d",&n);
    if(n>18)
        printf("\n%d years old eligible to vote",n);
    else if(n<18)
        printf("\n%d years old not eligible to vote",n);
    else
        printf("\n%d years old eligible to vote",n);
}
