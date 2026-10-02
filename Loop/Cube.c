#include <stdio.h>
void main()
{
    int i = 1, n, cube;
    printf("\nEnter the number : ");
    scanf("%d", &n);
    while (i <= n)
    {
        cube = i * i * i;
        printf("\nCube of %d : %d", i, cube);
        i++;
    }
}
