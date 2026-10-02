#include <stdio.h>
void main()
{
    int i, n, min;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    printf("\nEnter %d values in array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i]; // max=45
    }
    printf("\nSmallest values in array are : %d", min);
}
