#include <stdio.h>

int main()
{
    int a = 33, b = 2, sum;
    sum = a + b;
    printf("The value of a is %d and value of b is %d\n", a, b);
    printf("a divided by b gives remainder as %d\n", a % b);

    // int i = ab;    // Invalid
    int i = a * b; // Valid
    int j = a ^ b; // Does not print a power b
    return 0;
}