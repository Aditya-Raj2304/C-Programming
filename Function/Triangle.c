#include <stdio.h>
void main()
{
  int a, b, c;
  printf("\nEnter three angles of triangle : ");
  scanf("%d%d%d", &a, &b, &c);
  if ((a + b + c) == 180)
    printf("\nIt is Triangle");
  else
    printf("\nIt is not a Triangle");
}
