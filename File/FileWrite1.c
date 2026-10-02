#include <stdio.h>
void main()
{
    FILE *fp;
    char ch = 'A';
    fp = fopen("File1.txt", "w");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    fputc(ch, fp);
    fclose(fp);
}
