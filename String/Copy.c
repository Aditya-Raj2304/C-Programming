#include <stdio.h>
void main()
{
    char s1[100], s2[100];
    int i, j;
    printf("\nEnter the string : ");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
        s2[i] = s1[i];

    printf("Copy of string-1 to string-2 : %s", s2);
}
