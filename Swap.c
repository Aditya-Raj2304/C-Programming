#include <stdio.h>
void main()
{
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("\nNumber before swap  a :  %d   b : %d", a, b);
    c = a;
    a = b;
    b = c;
    printf("\nNumber after  swap  a :  %d   b : %d", a, b);
}
