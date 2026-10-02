#include <stdio.h>
struct std
{
    int rno;
    char name[20];
    int marks;
    char grade;
};
void main()
{
    FILE *fp;
    struct std s[3];
    struct std *ptr = &s;
    int i;
    fp = fopen("Marks.dat", "rb");
    if (fp == NULL)
        perror("Oops!!!");
    printf("\nRollNo\tName\tMarks\tGrade");
    for (i = 0; i < 3; i++)
    {
        fread(ptr, sizeof(s[i]), 1, fp);
        printf("\n%d\t%s\t%d\t%c", ptr->rno, ptr->name, ptr->marks, ptr->grade);
    }
    fclose(fp);
}
