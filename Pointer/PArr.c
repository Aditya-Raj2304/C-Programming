#include <stdio.h>
void main()
{
   int arr[] = {10, 20, 30, 40, 50};
   int *p = &arr[0];
   int *q = &arr[4];
   printf("\np : %d", *p++);
   printf("\nq : %d", *q--);
   printf("\np : %d", *p);
   printf("\nq : %d", *q);
}
