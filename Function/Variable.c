#include <stdio.h>
int b = 20; // Global variable
void fun()
{
    b++;
    printf("\nGlobal variable b : %d", b);
}
void main()
{
    int a = 10; // Local Variable
    printf("\nLocal variable a : %d", a);
    printf("\nGlobal variable b : %d", b);
    fun();
    printf("\nGlobal variable b : %d", b);
}
