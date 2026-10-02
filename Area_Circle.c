#include <stdio.h>
int main()
{
    float r, area;
    const float p = 3.14;
    printf("\nEnter the radius of circle : ");
    scanf("%f", &r);
    area = p * r * r;
    printf("\nArea of circle : %f", area);
    return 0;
}
