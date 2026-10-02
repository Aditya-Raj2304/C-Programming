#include<stdio.h>
void main()
{
    int i,j,k,s;
    for(i=1;i<=5;i++)
    {
        for(s=1;s<=5-i;s++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*",i);
        for(k=i-1;k>=1;k--)
            printf("*",i);
        printf("\n");
    }
    for(i=1;i<=4;i++)
    {
        for(s=1;s<=i;s++)
            printf(" ");
        for(j=1;j<=5-i;j++)
            printf("*",j);
        for(k=4-i;k>=1;k--)
            printf("*",j);
    printf("\n");
    }
}

