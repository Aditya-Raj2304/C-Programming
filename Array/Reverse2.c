#include <stdio.h>
void main()
{
  int i, j, n, temp;

  printf("\nEnter the size of array : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter %d values in array : ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 0, j = n - 1; i <= j; i++, j--)
  {
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  printf("\nValues inside array after reverse : ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
}
