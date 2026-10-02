#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch1, ch2;
    printf("Enter the character: ");
    scanf("%c", &ch1);
    if (islower(ch1))
    {
        ch2 = toupper(ch1);
        printf("\nch1: %c", ch1);
        printf("\nch2: %c", ch2);
    }
    else if (isupper(ch1))
    {
        ch2 = tolower(ch1);
        printf("\nch1: %c", ch1);
        printf("\nch2: %c", ch2);
    }
    else
    {
        printf("Wrong Input!!!\n");
    }
    return 0;
}
