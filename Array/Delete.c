#include <stdio.h>
void main()
{
    int n, i, j, x = 0;

    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    printf("\nEnter %d values in array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\nEnter the position to delete element : ");
    scanf("%d", &j);

    for (i = j - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];

    printf("\nArray after deletion of element : ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
        x += 1;
    }
    printf("\nSize of of the array after deletion : %d", x);
}
