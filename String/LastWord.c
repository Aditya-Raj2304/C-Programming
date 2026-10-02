#include <stdio.h>
#include <string.h>
void main()
{
    char s[100], w[20] = "";
    int i, j, l;
    printf("\nEnter the string : ");
    gets(s);
    l = strlen(s);
    for (i = l - 1; s[i] != ' '; i--)

        for (i = i + 1, j = 0; s[i] != '\0'; i++, j++)
            w[j] = s[i];
    printf("\nLast word : %s", w);
}
