#include <stdio.h>
void main()
{
  int arr[5];
  int *p;
  int *q = &arr[4];
  printf("\nEnter 5 values in array : ");
  for (p = &arr[0]; p <= q; p++)
    scanf("%d", p);
  printf("\n5 values in array : ");
  for (p = &arr[0]; p <= q; p++)
    printf("%d ", *p);
}
