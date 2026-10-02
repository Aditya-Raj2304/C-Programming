#include <stdalign.h>
void main()
{
    float r, h, v;
    printf("\nRadius of the Cylinder : ");
    scanf("%g", &r);
    printf("\nHeight of the Cylinder : ");
    scanf("%g", &h);
    v = 3.14 * r * (2 * h);
    printf("\nVolume of the Cylinder : %g", v);
}
