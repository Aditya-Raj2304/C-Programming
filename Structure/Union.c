#include<stdio.h>
union data
{
    int i;
    float f;
    char c;
};
void main()
{
union data x;
x.i=10;
printf("\nx.i : %d",x.i);
x.f=7.5;
printf("\nx.f : %f",x.f);
x.c='A';
printf("\nx.c : %c",x.c);
}
