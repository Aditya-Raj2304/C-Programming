#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n <= 0)
    {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }
    
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    
}
