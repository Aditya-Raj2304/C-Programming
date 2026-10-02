#include <stdio.h>
void main()
{
    FILE *fp;
    char ch;
    fp = fopen("File1.txt", "r");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);
}
