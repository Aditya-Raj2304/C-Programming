#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i, l;
    printf("\nEnter the string : ");
    gets(s);
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    printf("\nString after upper case : %s", s);
}
