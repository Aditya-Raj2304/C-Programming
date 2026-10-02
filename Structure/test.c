#include<stdio.h>
struct date
{
    int d,m,y;
};
struct emp
{
    int empno;
    char name[20];
    struct date doj;
    int dept[20];
    char salary;
};
void main()
{
    struct emp e;
    printf("\nEnter Employee No. : ");
    scanf("%d",&e.empno);
    printf("\nEnter Name : ");
    fflush(stdin);
    gets(e.name);
    printf("\nEnter the date of joining : ");
    scanf("%d-%d-%d",&e.doj.d,&e.doj.m,&e.doj.y);
    printf("\nEnter Department : ");
   fflush(stdin);
   gets(e.dept);
   fflush(stdin);
    printf("\nEnter the Salary : ");
    scanf("%d",&e.salary);

    printf("\nEnter Employee No. : %d",e.empno);
    printf("\nEnter Name : %s",e.name);
    printf("\nEnter the date of joining : %d-%d-%d",e.doj.d,e.doj.m,e.doj.y);
    printf("\nEnter Department : %s",e.dept);
    printf("\nEnter the Salary : %d",&e.salary);
}
