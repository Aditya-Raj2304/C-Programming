#include <stdio.h>
void main()
{
    FILE *fp;
    char s[10] = "Apple";

    fp = fopen("File3.txt", "w");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    fputs(s, fp);
    fclose(fp);
}
