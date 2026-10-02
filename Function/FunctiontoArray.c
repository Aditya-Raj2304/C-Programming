#include <stdio.h>
void fun(int a[])
{
    int i;
    printf("\nValues in array : ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
}
void main()
{
    int i, arr[5];
    printf("\nEnter values in array : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    fun(arr);
}
