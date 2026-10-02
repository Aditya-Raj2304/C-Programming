#include <stdio.h>
int main()
{
    int i, j, n, m, count = 0;
    printf("\nEnter the size of first array : ");
    scanf("%d", &n);
    int arr1[n];
    printf("\nEnter %d values in first array : ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("\nEnter the size of second array : ");
    scanf("%d", &m);
    int arr2[m];
    printf("\nEnter %d values in second array : ", m);
    for (j = 0; j < m; j++)
        scanf("%d", &arr2[j]);

    printf("\nCommon elements in both arrays are : ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("%d ", arr1[i]);
                count++;
            }
        }
    }

    if (count == 0)
        printf("No common elements found.");
    return 0;
}
