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
    
    printf("\nEnter the position to insert element : ");
    scanf("%d", &j);
    printf("\nEnter the element to insert : ");
    scanf("%d", &a);

    for (i = n - 1; i >= j - 1; i--)
        arr[i + 1] = arr[i];
    arr[j - 1] = a;

    printf("\nArray after insertion of element : ");
    for (i = 0; i < n + 1; i++)
        printf("%d ", arr[i]);
}

