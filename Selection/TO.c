#include <stdio.h>
void main()
{
    int a = 0 ? 100 : 200;              // a=200
    int b = 1 ? 100 : 200;              // b=100
    int c = 5 > 3 ? 100 : 200;          // c=100
    int d = 5 < 3 ? 100 : 200;          // d=200
    int e = 5 > 3 == 7 < 2 ? 100 : 200; // e=200
    printf("\n a : %d", a);
    printf("\n b : %d", b);
    printf("\n c : %d", c);
    printf("\n d : %d", d);
    printf("\n e : %d", e);
}
