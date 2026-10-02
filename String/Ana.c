#include <stdio.h>
#include <string.h>
void main()
{
  char s1[100] = "", s2[100] = "";
  int j, l1, l2, f1 = 0, f2 = 0, flag = 0;
  char i;
  printf("\nEnter first string : ");
  gets(s1);
  puts(s1);
  printf("\nEnter second string : ");
  gets(s2);
  l1 = strlen(s1);
  l2 = strlen(s2);
  if (l1 != l2)
    flag = 1;
  else
  {
    for (i = 'A'; i <= 'Z'; i++)
    {
      for (j = 0; s1[j] != '\0'; j++)
      {
        if (i == s1[j])
        {
          f1 = 1;
          //printf("\n1HI");
          break;
        }
      }
      for (j = 0; s2[j] != '\0'; j++)
      {
        if (i == s2[j])
        {
          f2 = 1;
          //printf("\n2HI");
          break;
        }
      }
      if (f1 == 1 && f2 == 1)
      {
        //printf("\n3HI");
        flag = 1;
      }
    }
  }
  if (flag == 1)
    printf("\nStrings are not same");
  else
    printf("\nStrings are same");
}
