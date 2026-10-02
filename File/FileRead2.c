#include <stdio.h>
void main()
{
    FILE *fp;
    int i;
    char s[100];
    fp = fopen("MyFile.txt", "r");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    for (i = 0; i < 2; i++)
    {
        fgets(s, 100, fp);
        printf("%s", s);
    }

    fclose(fp);
}
