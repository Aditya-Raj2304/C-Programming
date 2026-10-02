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
char dept[20];
int salary;
};
void main()
{
    struct emp e;
    printf("\nEnter employee number : ");
    scanf("%d",&e.empno);
    printf("\nEnter name of employee : ");
    fflush(stdin);
    gets(e.name);
    printf("\nEnter data of joining : ");
    scanf("%d-%d-%d",&e.doj.d,&e.doj.m,&e.doj.y);
    printf("\nEnter department : ");
    fflush(stdin);
    gets(e.dept);
    printf("\nEnter the salary : ");
    scanf("%d",&e.salary);

    printf("\nEmployee number : %d",e.empno);
    printf("\nName of employee : %s",e.name);
    printf("\nData of joining : %d-%d-%d",e.doj.d,e.doj.m,e.doj.y);
    printf("\nDepartment : %s",e.dept);
    printf("\nSalary : %d",e.salary);
}
