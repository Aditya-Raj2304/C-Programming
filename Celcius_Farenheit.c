#include <stdio.h>
void main()
{
    float cel, far;
    printf("Enter the temperature in Celcius : ");
    scanf("%g", &cel);
    far = (1.8 * cel) + 32;
    printf("\nTemperature in Farenheit : %g", far);
}
