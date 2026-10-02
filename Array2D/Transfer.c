#include <stdio.h>
void main()
{
    int i, j, m, n;
    printf("\nEnter the rows & columns size in 2D array : ");
    scanf("%d%d", &m, &n);
    int A[m][n], B[m][n];
    printf("\nEnter the values (%d X %d) inside array : ", m, n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            scanf("%d", &A[i][j]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            B[i][j] = A[j][i];
    }
    printf("\nValues inside array : ");
    for (i = 0; i < m; i++)
    {
        printf("\n");
        for (j = 0; j < n; j++)
            printf("%d ", A[j][i]);
        printf("\t");
        for (j = 0; j < n; j++)
            printf("%d ", B[j][i]);
    }
}
