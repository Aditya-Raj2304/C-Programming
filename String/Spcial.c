#include <stdio.h>
#include <string.h>
void main()
{
    char w[20] = "";
    int i, l;
    printf("\nEnter the word : ");
    gets(w);
    l = strlen(w);
    if (w[0] == w[l - 1])
        printf("\n%s is a special word", w);
    else
        printf("\n%s is not a special word", w);
    
}
