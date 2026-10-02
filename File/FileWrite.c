#include <stdio.h>
void main()
{
    FILE *fp;
    fp = fopen("MyFile.txt", "a");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    fprintf(fp, "\nAnd How are you?");
    fclose(fp);
}
