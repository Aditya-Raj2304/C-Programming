#include <stdio.h>
int fun(int a[])
{
    int i, sum = 0;
    for (i = 0; i < 5; i++)
        sum = sum + a[i];
    return sum;
}
void main()
{
    int i, arr[5], sum;
    printf("\nEnter values in array : ");
    for (i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    sum = fun(arr);
    printf("\nSum of values in array : %d ", sum);
}
