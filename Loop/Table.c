#include <stdio.h>
void main()
{
   int i = 1, n, t;
   printf("\nEnter the number : ");
   scanf("%d", &n);
   while (i <= 10)
   {
      t = n * i;
      printf("\n%d X %d = %d", n, i, t);
      i++;
   }
}
