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
    fp = fopen("Marks.dat", "wb");
    if (fp == NULL)
        perror("Oops!!!");
    for (i = 0; i < 3; i++)
    {
        printf("Enter roll number : ");
        scanf("%d", &ptr->rno);
        printf("Enter the name : ");
        fflush(stdin);
        gets(ptr->name);
        printf("Enter marks  : ");
        scanf("%d", &ptr->marks);
        printf("Enter the grade : ");
        fflush(stdin);
        scanf("%c", &ptr->grade);
        fwrite(ptr, sizeof(s[i]), 1, fp);
    }
    fclose(fp);
}
