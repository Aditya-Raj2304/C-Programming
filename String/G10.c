#include <stdio.h>
int main()
{
    int max;
    char s1[] = "Lal Piyush Nath Shahdeo", s2[] = "Mohit Singh", s3[] = "Uttam Kumar", s4[] = "Aditya Raj", s5[] = "Naman Raj", s6[] = "Kritika Raj", s7[] = "Ankush Singh", s8[] = "Khuswadaj Shahdeo", s9[] = "Lal Uday Pratap Nath Shahdeo", s10[] = "Akash Kumar";
    max = 0;
    if (max < sizeof(s1))
        max = sizeof(s1) - 1;
    if (max < sizeof(s2))
        max = sizeof(s2) - 1;
    if (max < sizeof(s3))
        max = sizeof(s3) - 1;
    if (max < sizeof(s4))
        max = sizeof(s4) - 1;
    if (max < sizeof(s5))
        max = sizeof(s5) - 1;
    if (max < sizeof(s6))
        max = sizeof(s6) - 1;
    if (max < sizeof(s7))
        max = sizeof(s7) - 1;
    if (max < sizeof(s8))
        max = sizeof(s8) - 1;
    if (max < sizeof(s9))
        max = sizeof(s9) - 1;
    if (max < sizeof(s10))
        max = sizeof(s10) - 1;
    printf("\nLength of longest string : %d", max);
    return 0;
}