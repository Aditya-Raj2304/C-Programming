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
    fp = fopen("Student.dat", "wb");
    if (fp == NULL)
        perror("Opps!!!");
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the Roll No. : ");
        scanf("%d", &ptr->rno);
        printf("\nEnter the Name : ");
        fflush(stdin);
        gets(ptr->name);
        printf("\nEnter the Marks : ");
        scanf("%d", &ptr->marks);
        printf("\nEnter the Grade : ");
        fflush(stdin);
        scanf("%c", &ptr->grade);
        fwrite(ptr, sizeof(s[i]), 1, fp);
    }
    fclose(fp);
}
