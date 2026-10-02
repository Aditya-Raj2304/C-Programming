#include<stdio.h>
void main()
{
    int n,num,i=1,r,rev=0;
    printf("\nEnter the number : ");
    scanf("\n%d",&num);
    n=num;
    while(n!=0)
    {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
    }
    n=rev;
    while(n!=0)
    {
        r=n%10;
        switch(r)
        {
            case 0: printf("Zero ");  break;
            case 1: printf("One ");  break;
            case 2: printf("Two ");  break;
            case 3: printf("Three ");  break;
            case 4: printf("Four ");  break;
            case 5: printf("Five ");  break;
            case 6: printf("Six ");  break;
            case 7: printf("Seven ");  break;
            case 8: printf("Eight ");  break;
            case 9: printf("Nine ");  break;
        }
        n=n/10;
    }
}
