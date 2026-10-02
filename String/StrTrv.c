#include <stdio.h>
#include <string.h>
void main()
{
   char s[100];
   int i, l;
   printf("\nEnter the string : ");
   gets(s);
   for (i = 0; s[i] != '\0'; i++)
      printf("\n%c", s[i]);
   printf("\nLength of a string : %d", i);
   l = strlen(s);
   printf("\nLength of a string : %d", l);
}
