#include <stdio.h>

int main()
{
    int a = 1;
    printf("%d\n", a);
    float b = 1.1;
    printf("%f\n", b);
    char c = '$';
    printf("%c\n", c);

    printf("The size of a is %zu\n", sizeof(int));
    printf("The size of a is %zu\n", sizeof(a));
    return 0;
}