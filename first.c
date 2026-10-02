#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter two integers: ");
  scanf("%d %d", &a, &b);

  printf("\n--- Mathematical Operations ---\n");
  printf("\nAddition: %d + %d = %d", a, b, a + b);
  printf("\nSubtraction: %d - %d = %d", a, b, a - b);
  printf("\nMultiplication: %d * %d = %d", a, b, a * b);

  if (b > a)
  {
    printf("\nDivision: %d / %d = %d", a, b, a / b);
    printf("\nModulus: %d %% %d = %d", a, b, a % b);
  }
  else
  {
    printf("\nDivision and modulus are not possible (division by zero).");
  }
  return 0;
}
