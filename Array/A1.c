#include <stdio.h>

int main()
{
    int r, c, i, j;
    // Input row and column sizes
    printf("Please enter the row and column size of the array: ");
    scanf("%d%d", &r, &c);
    int arr[r][c];
    // Input array elements
    printf("Please enter the elements inside the array: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);
    }
    // Display the array
    printf("The elements inside the array are:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]); // Added space for readability
        }
        printf("\n");
    }
    int suml = 0, sumu = 0;
    // Calculate sum of lower triangle (j <= i) and upper triangle (j > i)
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (j <= i)
                suml += arr[i][j]; // Lower triangle including diagonal
            if (j > i)
                sumu += arr[i][j]; // Upper triangle excluding diagonal
        }
    }
    printf("Sum of lower triangle: %d\n", suml);
    printf("Sum of upper triangle: %d\n", sumu);
    return 0;
}
