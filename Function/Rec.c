/*Recursion: function calling itself is called recursion.
Note: It will execute the function until stack overflow. */
#include <stdio.h>
int i = 1;
void main()
{
    printf("\nHi from main");
    fun();
}
void fun()
{
    printf("\n%d Hi from fun", i++);
    fun();
}
