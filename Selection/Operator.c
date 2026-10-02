#include <stdio.h>
void main()
{
    char op;
    int a, b, c;
    printf("\nEnter two numbers : ");
    scanf("%d%d", &a, &b);
    printf("Enter the operator(+,-,*,/) : ");
    fflush(stdin);
    scanf("%c", &op);
    if (op == '+')
    {
        c = a + b;
        printf("\nAddition of two numbers : %d", c);
    }
    else if (op == '-')
    {
        c = a - b;
        printf("\nSubtraction of two numbers : %d", c);
    }
    else if (op == '*')
    {
        c = a * b;
        printf("\nMultiplication of two numbers : %d", c);
    }
    else if (op == '/')
    {
        c = a / b;
        printf("\nDivision of two numbers : %d", c);
    }
    else
        printf("Invalid Operator");
}
