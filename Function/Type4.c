#include <stdio.h>
// 4. Receive and Return
int add(int x, int y)
{
    int z = x + y;
    return z;
}
void main()
{
    int a = 10, b = 20, c;
    c = add(a, b);
    printf("\nSum of two numbers : %d", c);
}
