#include <stdio.h>
void main()
{
    int arr[5];
    int *p = &arr[0];
    int *q = &arr[4];
    printf("\nEnter 5 values in array : ");
    while (p <= q)
    {
        scanf("%d", p++);
    }
    printf("\n5 values in array : ");
    p = &arr[0];
    while (p <= q)
    {
        printf("%d ", *p++);
    }
}
