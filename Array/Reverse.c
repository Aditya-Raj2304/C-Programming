#include <stdio.h>
void main()
{
  int i, j, n, a;
  printf("\nEnter the size of array : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter %d values in array : ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  int r[n];
  for (i = 0; i < n; i++)
    r[i] = arr[n - i - 1];
  printf("\nReversed array is : ");
  for (i = 0; i < n; i++)
    printf("%d ", r[i]);
}
