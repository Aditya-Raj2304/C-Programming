#include <stdio.h>
#include <ctype.h>
void main()
{
    char ch, cl, cu;
    printf("\nEnter the character : ");
    scanf("%c", &ch);
    if (isalpha(ch))
    {
        printf("\n%c is an Alphabet", ch);
        if (isupper(ch))
        {
            printf(" and is upper case");
            cl = tolower(ch);
            printf("\nIn lower case : %c", cl);
        }
        if (islower(ch))
        {
            printf("\n%c is lower case", ch);
            cu = toupper(ch);
            printf("\nIn lower case : %c", cu);
        }
    }
    else if (isdigit(ch))
        printf("%c is a Digit", ch);
    else if (isspace(ch))
        printf("%c is Space", ch);
    else
        printf("%c is a Special Character", ch);
}
