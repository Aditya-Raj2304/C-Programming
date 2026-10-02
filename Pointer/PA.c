#include<stdio.h>
void main()
{
   int a=10;
   int *p=&a;
   int *q=&a;
   printf("\np : %d",p);
   printf("\np : %d",q);
   printf("\np==q : %d",p==q);
   p=p+2;
   q=q-2;
   printf("\np : %d",p);
   printf("\np : %d",q);
   printf("\np==q : %d",p==q);
}