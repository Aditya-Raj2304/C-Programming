#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            printf("%d",j);
        for(k=1;k<=5-i;k++)
            printf("%d",k);
        printf("\n");
    }
}

