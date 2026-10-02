#include <stdio.h>
void main()
{
  int arr[5], i;
  int *p = arr;
  printf("\nEnter 5 values in array : ");
  for (i = 0; i < 5; i++)
    scanf("%d", (p + i));
  printf("\n5 values in array : ");
  for (i = 0; i < 5; i++)
    printf("%d ", *(p + i));
}
