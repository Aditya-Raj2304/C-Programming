#include <stdio.h>
void main()
{
    int i, j, m, n, sum = 0;
    printf("\nEnter the rows & columns size of 2D array : ");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    printf("\nEnter the values (%d X %d) inside 2D array : ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);
    }
    printf("\nValue inside array : ");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            }
            else
                printf("  ");
        }
    }
    printf("\nSum of Middle diagonal values in array : %d", sum);
}
