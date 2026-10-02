#include <stdio.h>
void main()
{
  int a = 10, b = 20, c; 
  c = add(a, b);         
  printf("\nsum of two numbers : %d", c);
}
int add(int x, int y) 
{
  int z = x + y;
  return z;
}
