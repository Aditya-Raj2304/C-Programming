#include<stdio.h>
void main()
{
   int a=10;
   int *ptr=&a;
   printf("\nValue of a : %d",a);
   printf("\nAddress of a : %p",&a);
   printf("\nAddress of a hold by ptr : %p",ptr);
   printf("\nValue of a point by ptr : %d",*ptr);
}
