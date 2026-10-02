#include <stdio.h>
float vote(int age)
{
  if (age >= 18)
    printf("Eligible to Vote");
  else
    printf("Not Eligible to Vote");
}
void main()
{
  int age;
  printf("\nEnter your age : ");
  scanf("%d", &age);
  vote(age);
}
