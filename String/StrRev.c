#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100] = "", s2[100] = "";
    int i, j, l;
    printf("\nEnter the string : ");
    gets(s1);
    l = strlen(s1);
    for (i = l - 1, j = 0; i >= 0; i--, j++)
        s2[j] = s1[i];
    printf("\nStrings after reverse : %s", s2);
}
