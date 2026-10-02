#include <stdio.h>
void main()
{
    FILE *fp;
    int rno;
    char s[100];
    fp = fopen("File4.txt", "r");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    fscanf(fp, "%s%d", &s, &rno);

    printf("%s : %d", s, rno);
    fclose(fp);
}
