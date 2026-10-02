#include <stdio.h>
void swap(int x, int y)
{
  int z;
  z = x;
  x = y;
  y = z;
}
void main()
{
  int a, b, c;
  printf("\nEnter two numbers : ");
  scanf("%d%d", &a, &b);
  printf("\nNumber before swap a : %d    b : %d", a, b);
  swap(a, b);
  printf("\nNumber after  swap a : %d    b : %d", a, b);
}
