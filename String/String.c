#include <stdio.h>
void main()
{
    char name[] = {'H', 'a', 'r', 'i'};
    char gender[] = "Male";
    char address[20];
    printf("\nEnter the address : ");
    gets(address);
    printf("\nName : %s", name);
    printf("\nGender : %s", gender);
    printf("\nAddress : %s", address);
}
