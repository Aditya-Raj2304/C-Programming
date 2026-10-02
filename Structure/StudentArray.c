#include<stdio.h>
struct std
{
int rno;
char name[20];
int marks;
float per;
char grade;
};
void main()
{
int i;
struct std s[3];
for(i=0;i<3;i++)
{
    printf("\nEnter Roll Number : ");
    scanf("%d",&s[i].rno);
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(s[i].name);
    printf("\nEnter Marks (in 100) : ");
    scanf("%d",&s[i].marks);
    s[i].per=s[i].marks/5;
    if(s[i].per>=80)
        s[i].grade='A';
    else if(s[i].per>=60)
        s[i].grade='B';
    else if(s[i].per>=40)
        s[i].grade='C';
    else if(s[i].per>=33)
        s[i].grade='D';
    else
        s[i].grade='E';
}
printf("\nRollNo\tName\tMarks\tPercentage\tGrade");
for(i=0;i<3;i++)
{
printf("\n%d\t%s\t%d\t%f\t%c",s[i].rno,s[i].name,s[i].marks,s[i].per,s[i].grade);
}
}
