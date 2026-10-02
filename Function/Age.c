#include <stdio.h>
void main()
{
  int age, flag;
  printf("\nEnter your age : ");
  scanf("%d", &age);
  flag = vote(age);
  if (flag == 1)
    printf("Eligible to Vote");
  else
    printf("Not Eligible to Vote");
}
int vote(int age)
{
  if (age >= 18)
    return 1;
  else
    return 0;
}
