#include <stdio.h>
int area(int l, int b) // Formal  Parameter / Argument
{
    int ar = l * b;
    return ar;
}
int perimeter(int l, int b)
{
    int p = 2 * (l + b);
    return p;
}
void main()
{
    int l, b, ar, pr; // Local Variable
    printf("\nEnter length and breadth : ");
    scanf("%d%d", &l, &b);
    ar = area(l, b); // Actual Parameter / Argument
    pr = perimeter(l, b);
    printf("\nArea of Rectangle  : %d", ar);
    printf("\nPerimeter of Rectangle  : %d", pr);
}
