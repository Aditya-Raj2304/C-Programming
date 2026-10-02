#include <stdio.h>
void main()
{
  int n;
  printf("\nEnter the number : ");
  scanf("%d", &n);
  if (n % 7 == 0 || n % 10 == 7)
    printf("\n%d is a Buzz number", n);
  else
    printf("\n%d is not a Buzz number", n);
}
