#include <stdio.h>
// 3. No Receive But Return
int add()
{
    int x = 10, y = 20, z;
    z = x + y;
    return z;
}
void main()
{
    int c;
    c = add();
    printf("\nSum of two numbers : %d", c);
}
