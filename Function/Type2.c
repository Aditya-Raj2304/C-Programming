#include <stdio.h>
// 2. Receive But No Return
void add(int x, int y)
{
    int z = x + y;
    printf("\nSum of two numbers : %d", z);
}
void main()
{
    int a = 10, b = 20, c;
    add(a, b);
}
