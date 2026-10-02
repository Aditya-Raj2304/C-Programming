#include <stdio.h>

union data {
    int a;
    int b;
    int sum;
};

int main() {
    union data d;

    d.a = 5;
    d.b = 10;

    d.sum = d.a + d.b;

    printf("The sum of %d and %d is %d", d.a, d.b, d.sum);
    printf("\nSize of union: %d bytes\n", sizeof(d));
    return 0;
}

    