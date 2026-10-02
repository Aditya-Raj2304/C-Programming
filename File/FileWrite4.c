#include <stdio.h>
void main()
{
    FILE *fp;
    int rollno = 1001;

    fp = fopen("File4.txt", "w");
    if (fp == NULL)
    {
        perror("Opps!!!");
    }
    fprintf(fp, "Rollno : %d", rollno);
    fclose(fp);
}
