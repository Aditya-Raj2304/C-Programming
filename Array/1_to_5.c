#include<stdio.h>
int main()
{
    int i, j;
    printf("\nEnetr the size of array : ");
    scanf("%d", &i);
    int arr[i];
    printf("\nEnter %d values in array : ", i);
    for (int j = 0; j < i; j++)
        scanf("%d", &arr[j]);

    printf("\nArray before swapping first and last element : ");
    for ( j = 0; j < i; j++)
        printf("%d ", arr[j]);

    int temp = arr[4];
    arr[4] = arr[0];
    arr[0] = temp;

    printf("\nArray after swapping first and last element : ");
    for ( j = 0; j < i; j++)
        printf("%d ", arr[j]);
}
