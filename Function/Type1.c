#include <stdio.h>
// 1. No Receive No Return
void add()
{
  int x = 10, y = 20, z;
  z = x + y;
  printf("\nSum of two numbers : %d", z);
}
void main()
{
  add();
}
