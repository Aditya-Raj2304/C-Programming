#include <stdio.h>

int main()
{
    int i, j, arr[2][4], sum = 0;
    printf("Enter the values for a 2x4 array:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nThe entered array is:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
            sum += arr[i][j];
    }
    printf("\nSum of array : %d", sum);
    return 0;
}
