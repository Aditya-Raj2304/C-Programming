#include <stdio.h>
#include <string.h>
void main()
{
    char s1[100] = "", s2[100] = "";
    int i, l1, l2, flag = 0;
    printf("\nEnter first string : ");
    gets(s1);
    printf("\nEnter second string : ");
    gets(s2);
    l1 = strlen(s1);
    l2 = strlen(s2);
    if (l1 != l2)
        flag = 1;
    else
    {
        for (i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != s2[i])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1)
        printf("\nStrings are not same");
    else
        printf("\nStrings are same");
}
