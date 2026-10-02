#include <stdio.h>
void main()
{
     int n;
     printf("Enter the number : ");
     scanf("%d", &n);
     if (n % 2 == 0)
          printf("\n%d is Even number", n);
     else if (n % 2 != 0)
          printf("\n%d is Odd number", n);
     else
          printf("\n%d is Zero", n);
}
