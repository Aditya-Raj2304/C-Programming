#include <stdio.h>
#include <ctype.h>
void main()
{
  char ch, cl, cu;
  printf("\nEnter the character : ");
  scanf("%c", &ch);
  if (isalpha(ch))
  {
    printf("%c is Alphabet", ch);
    if (isupper(ch))
    {
      printf(" and in upper case");
      cl = tolower(ch);
      printf("\n In lower case : %c", cl);
    }
    if (islower(ch))
    {
      printf(" and in lower case");
      cu = toupper(ch);
      printf("\n In Upper case : %c", cu);
    }
  }
  else if (isdigit(ch))
    printf("%c is digit", ch);
  else if (isspace(ch))
    printf("%c is space", ch);
  else
    printf("%c is special character", ch);
}
