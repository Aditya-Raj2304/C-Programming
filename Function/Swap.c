#include<stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int x = 10, y = 20;
    swap(&x, &y);
    printf("x = %d, y = %d", x, y);
}