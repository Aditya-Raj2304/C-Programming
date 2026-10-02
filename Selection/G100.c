#include<stdio.h>
void main()
{
   int n;
   printf("\nEnter the number : ");
   scanf("%d",&n);
   if(n>100)
      printf("\n%d is greater than 100",n);
   if(n<100)
      printf("\n%d is less than 100",n);
    if(n==100)
    printf("\n%d is equal to 100",n);
}
