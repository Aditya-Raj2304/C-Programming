#include <stdio.h>
struct book
{
    int bno;
    char name[20];
    char author[20];
    int price;
};
void main()
{
    int a, i;
    printf("\nEnetr the number of books : ");
    scanf("%d", &a);
    struct book b;
    struct book *ptr;
    ptr = &b;
    for (i = 1; i <= a; i++)
    {
        printf("\nEnter the details of book %d", i);
        printf("\nEnter book Number : ");
        scanf("%d", &ptr->bno);
        printf("Enter the Name of book : ");
        fflush(stdin);
        gets(ptr->name);
        printf("Enter name of author : ");
        fflush(stdin);
        gets(ptr->author);
        printf("Enter the price : ");
        scanf("%d", &ptr->price);
    }
    for (int i = 1; i <= a; i++)
    {
        printf("\n\nBook : %d",i);
        printf("\nBook Number : %d", ptr->bno);
        printf("\nName of book : %s", ptr->name);
        printf("\nName of author : %s", ptr->author);
        printf("\nPrice of book : %d", ptr->price);
    }
}
