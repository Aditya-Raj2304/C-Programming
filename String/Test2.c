#include<stdio.h>
int main()
{
    char str[10];
    printf("\nEnter the string : ");
    gets(str);
    for(str[10] = 0; str[10] < 5; str[10]++)
        puts(str);
    
}