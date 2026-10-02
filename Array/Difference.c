#include <stdio.h>
int main()
{
    int a, i, max = 0, min;
    printf("\nEnter the size of array : ");
    scanf("%d", &a);
    int arr1[a];
    printf("\nEnter %d values in array : ", a);
    for (int i = 0; i < a; i++)
        scanf("%d", &arr1[i]);

    for (i = 0; i < a; i++)
    {
        if (max < arr1[i])
            max = arr1[i];
        if (min > arr1[i])
            min = arr1[i];
    }
    printf("\nDifference between maximum and minimum element is : %d", max - min);
}
