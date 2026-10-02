#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n\tMathematical Operation");
    printf("\n Addition: %d+%d= %d",a,b, a+b);
    printf("\nSubtraction :%d-%d = %d",a,b, a-b);
    printf("\nMultiplication :%d*%d = %d",a,b, a*b);
    if (b,a!=0)
    {
     printf("\n Division :%d/%d = %d ", a,b,a/b);
     printf("\n Modulus: %d % %d = %d", a,b,a%b);

    }
    else{
        printf("\nDivision and Modulus are not possible since b or a is zero");
        }
return 0;
}
