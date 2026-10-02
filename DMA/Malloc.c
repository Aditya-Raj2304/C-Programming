#include <stdio.h>
#include <malloc.h>
void main()
{
    int *ptr, i;
    ptr = (int *)calloc(sizeof(int), 5);
    printf("\nEnter 5 value : ");
    for (i = 0; i < 5; i++)
        scanf("%d", (ptr + i));
    printf("\n5 Values : ");
    for (i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    free(ptr);
}
