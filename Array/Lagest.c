#include <stdio.h>
void main()
{
    int i, n, max;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nnEnter %d values in array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i]; // max=45
    }
    printf("\nValues stored in array are : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\nLargest values in array are : %d", max);
}
