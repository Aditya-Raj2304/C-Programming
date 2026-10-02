#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("\nNumber before swap  a :  %d   b : %d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNumber after  swap  a :  %d   b : %d", a, b);
}
