#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("\nEnter first number : ");
    scanf("%d", &a);

    printf("\nEnter second number : ");
    scanf("%d", &b);

    printf("\nEnter third number : ");
    scanf("%d", &c);

    d = a - (b + c);
    
    printf("\n\nAddition of last two numbers and subtraction with first : %d", d);
    return 0;
}
