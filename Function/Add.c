#include <stdio.h>
int add(int x, int y) // Formal  Parameter / Argument
{
    int z = x + y;
    return z;
}
void main()
{
    int a, b, c; // Local Variable
    printf("\nEnter two numbers : ");
    scanf("%d%d", &a, &b);
    c = add(a, b); // Actual Parameter / Argument
    printf("\nsum of two numbers : %d", c);
}
