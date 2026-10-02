#include <stdio.h>
void main()
{
  int i, n, pos;
  printf("\nEnter the size of array : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter %d values in array : ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter the position to display the number : ");
  scanf("%d", &pos);
  printf("\nNumber in Position : %d ", arr[pos]);
}
