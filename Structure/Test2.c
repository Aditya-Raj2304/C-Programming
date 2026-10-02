#include<stdio.h>
struct phn
{
    char brand[20];
    int price;
    char color[20];
};
void main()
{
    struct phn p;
    printf("\nEnter the brand : ");
    gets(p.brand);
    printf("\nEnter the price : ");
    scanf("%d",&p.price);
    printf("\nEnter the color : ");
    fflush(stdin);
    gets(p.color);
    printf("\nBrand : %s",p.brand);
    printf("\nPrice : %d",p.price);
    printf("\nPrice : %s",p.color);

    printf("\nSize of structure phn : %d",sizeof(p));
}

