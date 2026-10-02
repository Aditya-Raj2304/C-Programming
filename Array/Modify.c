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

    printf("\nEnter the position to modify element : ");
    scanf("%d", &j);
    printf("\nEnter the element to modify : ");
    scanf("%d", &a);

    arr[j - 1] = a;
    
    printf("\nArray after modification of element : ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}
