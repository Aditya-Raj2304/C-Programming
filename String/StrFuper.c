#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    int i, l;
    printf("\nEnter the string : ");
    gets(s);
    s[0] = s[0] - 32;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
                s[i + 1] = s[i + 1] - 32;
            i++;
        }
    }
    printf("\nString after upper case : %s", s);
}
