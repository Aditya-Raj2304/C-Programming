#include<stdio.h>
struct std
{
int rno;
char name[20];
int marks;
char grade;
};
void main()
{
struct std s;
printf("\nEnter Roll Number : ");
scanf("%d",&s.rno);
printf("\nEnter Name : ");
fflush(stdin);
gets(s.name);
printf("\nEnter Marks : ");
scanf("%d",&s.marks);
printf("\nEnter Grade : ");
fflush(stdin);
scanf("%c",&s.grade);
printf("\nRoll Number : %d",s.rno);
printf("\nName : %s",s.name);
printf("\nMarks : %d",s.marks);
printf("\nGrade : %c",s.grade);
}
