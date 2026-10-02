#include <stdio.h>
void main()
{
    char s[100], w[20] = "";
    int i;
    printf("\nEnter the string : ");
    gets(s);
    for (i = 0; s[i] != ' '; i++)
        w[i] = s[i];
    printf("\nFirst word : %s", w);
}
