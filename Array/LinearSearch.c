#include <stdio.h>
void main()
{
  int i, n, sn, flag = 0;
  printf("\nEnter the size of array : ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter %d values in array : ", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  printf("\nEnter the number to search in array : ");
  scanf("%d", &sn);
  for (i = 0; i < n; i++)
  {
    if (sn == arr[i])
    {
      flag = 1;
      break;
    }
  }
  if (flag == 1)
  {
    printf("\nSearch successful!!! Number found Position : %d ", i);
    printf("\nValue of number in %d position : %d",i,arr[i]);
  }
  else
    printf("\nSearch Unsuccessful!!! Number not found");
}
